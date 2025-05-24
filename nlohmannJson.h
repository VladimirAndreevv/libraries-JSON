#ifndef NLOHMANNJSON_H_
#define NLOHMANNJSON_H_
#include <nlohmann/json.hpp>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;

nlohmann::json LinearRecordNlohmann(const vector<string>& sampleValues, const Stats& stats)
{
    nlohmann::json allRecords = nlohmann::json::array();

    for (size_t i = 0; i < stats.Objects; ++i) 
    {
        nlohmann::json record;
        for (int j = 0; j < 20; ++j) 
        {
            string key = "key" + to_string(j);
            const string& value = sampleValues[j % sampleValues.size()];
            record[key] = value;
        }
        allRecords.push_back(record);
    }

    return allRecords;
}

void CreatesStringsNlohmann(const nlohmann::json& allRecords, const Stats& stats)
{
    ofstream outFile(stats.Filename);
    for (const auto& item : allRecords) 
    {
        outFile << item.dump() << "\n";
    }

    outFile.close();
    outFile.close();
}

void ReadLineFromNlohmann(ifstream& inFile, const Stats& stats)
{
    string line;
    while (getline(inFile, line)) 
    {
        if (nlohmann::json::accept(line)) 
        {
            nlohmann::json obj = nlohmann::json::parse(line);
        }
    }
    inFile.close();
}


ifstream OpenFileNlohmann(const Stats& stats)
{
    ifstream inFile(stats.Filename);
    if (!inFile.is_open())
    {
        wcout << L"Не удалось открыть файл!" << endl;
    }
    return inFile;
}

Stats NlohmannJson(const string& files, bool choice, const vector<string> sampleValues) 
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
    nlohmann::json parsed = nlohmann::json::parse(jsonStr);
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
    string dumped = parsed.dump();
    auto endWrite = chrono::high_resolution_clock::now();
    stats.WriteTime = chrono::duration_cast<chrono::microseconds>(endWrite - startWrite).count() / 1000.0;
    
   auto startReadingV2 = chrono::high_resolution_clock::now();
   nlohmann::json templateRecord = LinearRecordNlohmann(sampleValues, stats);
   auto endReadingV2 = chrono::high_resolution_clock::now();
   stats.ReadTimeV2 = chrono::duration_cast<chrono::microseconds>(endReadingV2 - startReadingV2).count() / 1000.0;
   CreatesStringsNlohmann(templateRecord, stats);
   ifstream inFile = OpenFileNlohmann(stats);
   auto startReadingV3 = chrono::high_resolution_clock::now();
   ReadLineFromNlohmann(inFile, stats);
   auto endReadingV3 = chrono::high_resolution_clock::now();
   stats.ReadTimeV3 = chrono::duration_cast<chrono::microseconds>(endReadingV3 - startReadingV3).count() / 1000.0;
    return stats;
}


#endif
