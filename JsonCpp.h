#ifndef JSONCPP_H_
#define JSONCPP_H_
#include <json/json.h>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;

Json::Value LinearRecordJsonCpp(const vector<string>& sampleValues, const Stats& stats)
{
    Json::Value allRecords(Json::arrayValue);

    for (size_t i = 0; i < stats.Objects; ++i) 
    {
        Json::Value record(Json::objectValue);
        for (int j = 0; j < 20; ++j) 
        {
            record["key" + to_string(j)] = sampleValues[j % sampleValues.size()];
        }
        allRecords.append(record);
    }

    return allRecords;
}

void CreatesStringsJsonCpp(const Json::Value& allRecords, const Stats& stats)
{
    ofstream outFile(stats.Filename);
    for (Json::ArrayIndex i = 0; i < allRecords.size(); ++i) 
    {
        Json::StreamWriterBuilder writer;
        writer["indentation"] = "";
        string serialized = Json::writeString(writer, allRecords[i]);
        outFile << serialized;
        outFile << "\n";
    }
    outFile << "\n";
    outFile.close();
}

void ReadLineFromJsonCpp(ifstream& inFile, const Stats& stats)
{
    string line;
    Json::CharReaderBuilder readerBuilder;
    readerBuilder["collectComments"] = false;
    while (getline(inFile, line)) 
    {
        Json::Value jsonObject;
        string errs;
        istringstream ss(line);
        Json::parseFromStream(readerBuilder, ss, &jsonObject, &errs);
    }
    inFile.close();
}

ifstream OpenFileJsoncpp(const Stats& stats)
{
    ifstream inFile(stats.Filename);
    if (!inFile.is_open())
    {
        wcout << L"Не удалось открыть файл!" << endl;
    }
    return inFile;
}


Stats JsonCpp(const string& files, bool choice, const vector<string> sampleValues) 
{

    Stats stats;
    string jsonStr;
    switch (choice)
    {
    case 0:
        jsonStr = ReadFile(files);
        break;
    case 1:
        jsonStr = ReadFiles(files);
        break;
    }

    if (jsonStr.empty())
    {
        return stats;
    }
    size_t RAMStart = RAMCount();
    auto startReading = chrono::high_resolution_clock::now();
    Json::CharReaderBuilder readerBuilder;
    Json::Value root;
    string errs;
    istringstream input(jsonStr);
    bool success = Json::parseFromStream(readerBuilder, input, &root, &errs);
    auto endReading = chrono::high_resolution_clock::now();
    size_t RAMEnd = RAMCount();
    stats.ReadTime = chrono::duration_cast<chrono::microseconds>(endReading - startReading).count() / 1000.0;
    if (RAMEnd > RAMStart)
    {
        stats.RAWMemory = RAMEnd - RAMStart;
    }
    else
    {
        stats.RAWMemory = 0;
    }
    auto startWrite = chrono::high_resolution_clock::now();
    Json::StreamWriterBuilder writerBuilder; 
    string dumped = Json::writeString(writerBuilder, root);
    auto endWrite = chrono::high_resolution_clock::now();
    stats.WriteTime = chrono::duration_cast<chrono::microseconds>(endWrite - startWrite).count() / 1000.0;
    
    auto startReadingV2 = chrono::high_resolution_clock::now();
    Json::Value templateRecord = LinearRecordJsonCpp(sampleValues, stats);
    auto endReadingV2 = chrono::high_resolution_clock::now();
    stats.ReadTimeV2 = chrono::duration_cast<chrono::microseconds>(endReadingV2 - startReadingV2).count() / 1000.0;
    CreatesStringsJsonCpp(templateRecord, stats);
    ifstream inFile = OpenFileJsoncpp(stats);
    auto startReadingV3 = chrono::high_resolution_clock::now();
    ReadLineFromJsonCpp(inFile, stats);
    auto endReadingV3 = chrono::high_resolution_clock::now();
    stats.ReadTimeV3 = chrono::duration_cast<chrono::microseconds>(endReadingV3 - startReadingV3).count() / 1000.0;


    return stats;
}
#endif
