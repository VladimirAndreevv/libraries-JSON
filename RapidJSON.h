#ifndef RAPIDJSON_H_
#define RAPIDJSON_H_
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;

rapidjson::Document LinearRecordRapid(const vector<string>& sampleValues, const Stats& stats)
{
    rapidjson::Document allRecords(rapidjson::kArrayType);
    rapidjson::Document::AllocatorType& allocator = allRecords.GetAllocator();

    for (size_t i = 0; i < stats.Objects; ++i) 
    {
        rapidjson::Value record(rapidjson::kObjectType);
        for (int j = 0; j < 20; ++j) 
        {
            string key = "key" + to_string(j);
            const string& value = sampleValues[j % sampleValues.size()];
            record.AddMember(rapidjson::Value().SetString(key.c_str(), allocator),
                rapidjson::Value().SetString(value.c_str(), allocator),
                allocator);
        }
        allRecords.PushBack(record, allocator);
    }

    return allRecords;
}


void CreatesStringsRapid(const rapidjson::Document& allRecords, const Stats& stats)
{
    ofstream outFile(stats.Filename);
    for (rapidjson::SizeType i = 0; i < allRecords.Size(); ++i) 
    {
        rapidjson::StringBuffer buffer;
        rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
        allRecords[i].Accept(writer);

        outFile << buffer.GetString();
        if (i != allRecords.Size() - 1)
        outFile << "\n";
    }
    outFile.close();
}

void ReadLineFromRapid(ifstream& inFile, const Stats& stats)
{
    string line;

    while (getline(inFile, line)) 
    {

        rapidjson::Document doc;
        doc.Parse(line.c_str());
    }
}

ifstream OpenFileRapid(const Stats& stats)
{
    ifstream inFile(stats.Filename);
    if (!inFile.is_open())
    {
        cout << "Не удалось открыть файл!" << endl;
    }
    return inFile;
}

Stats RapidJSON(const string& files, bool choice, const vector<string> sampleValues) {

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
    rapidjson::Document doc;
    doc.Parse(jsonStr.c_str());
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
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    doc.Accept(writer);
    string dumped = buffer.GetString();
    auto endWrite = chrono::high_resolution_clock::now();
    stats.WriteTime = chrono::duration_cast<chrono::microseconds>(endWrite - startWrite).count() / 1000.0;

 auto startReadingV2 = chrono::high_resolution_clock::now();
 rapidjson::Document templateRecord = LinearRecordRapid(sampleValues, stats);
 auto endReadingV2 = chrono::high_resolution_clock::now();
 stats.ReadTimeV2 = chrono::duration_cast<chrono::microseconds>(endReadingV2 - startReadingV2).count() / 1000.0;
 CreatesStringsRapid(templateRecord, stats);
 ifstream inFile = OpenFileRapid(stats);
 auto startReadingV3 = chrono::high_resolution_clock::now();
 ReadLineFromRapid(inFile, stats);
 auto endReadingV3 = chrono::high_resolution_clock::now();
 stats.ReadTimeV3 = chrono::duration_cast<chrono::microseconds>(endReadingV3 - startReadingV3).count() / 1000.0;
return stats;
}
#endif 
