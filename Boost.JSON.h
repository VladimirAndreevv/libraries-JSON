#ifndef BOOST_JSON_H_
#define BOOST_JSON_H_
#include <boost/json.hpp>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;

boost::json::array LinearRecordBoost(const vector<string>& sampleValues, const Stats& stats)
{
    boost::json::object record;
    boost::json::array allRecords;
    allRecords.reserve(stats.Objects);
    for (size_t i = 0; i < stats.Objects; ++i)
    {
        for (int j = 0; j < 20; ++j)
        {
            record["key" + to_string(j)] = sampleValues[j % sampleValues.size()];
        }
        allRecords.push_back(record);
    }         
    return allRecords;
}


void CreatesStringsBoost(boost::json::array allRecords, const Stats& stats)
{
    ofstream outFile(stats.Filename);
    for (const auto& item : allRecords)
    {
        outFile << boost::json::serialize(item) << endl;
    }
    outFile.close();
}

void ReadLineFromBoost(ifstream& inFile, const Stats& stats)
{
    string line;
    while (getline(inFile, line))
    {
        boost::json::value parsed = boost::json::parse(line);
        boost::json::object obj = parsed.as_object();
    }
    inFile.close();
}

ifstream OpenFileBoost(const Stats& stats)
{
    ifstream inFile(stats.Filename);    
    if (!inFile.is_open())
    {
        wcout << L"Не удалось открыть файл!" << endl;
    }
    return inFile;
}

Stats BoostJSON(const string& files, bool choice, const vector<string> sampleValues)
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
    boost::json::value parsed = boost::json::parse(jsonStr);
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
    string dumped = boost::json::serialize(parsed);
    auto endWrite = chrono::high_resolution_clock::now();
    stats.WriteTime = chrono::duration_cast<chrono::microseconds>(endWrite - startWrite).count() / 1000.0;

    auto startReadingV2 = chrono::high_resolution_clock::now();
    boost::json::array templateRecord = LinearRecordBoost(sampleValues, stats);
    auto endReadingV2 = chrono::high_resolution_clock::now();
    stats.ReadTimeV2 = chrono::duration_cast<chrono::microseconds>(endReadingV2 - startReadingV2).count() / 1000.0;
    CreatesStringsBoost(templateRecord, stats);
    ifstream inFile = OpenFileBoost(stats);
    auto startReadingV3 = chrono::high_resolution_clock::now();
    ReadLineFromBoost(inFile, stats);
    auto endReadingV3 = chrono::high_resolution_clock::now();
    stats.ReadTimeV3 = chrono::duration_cast<chrono::microseconds>(endReadingV3 - startReadingV3).count() / 1000.0;

    return stats;
}

#endif
