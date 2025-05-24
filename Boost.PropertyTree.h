#ifndef BOOST_PROPERTYTREE_H_
#define BOOST_PROPERTYTREE_H_
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;

vector<boost::property_tree::ptree> LinearRecordPTree(const vector<string>& sampleValues, const Stats& stats) 
{
    vector<boost::property_tree::ptree> allRecords;
    allRecords.reserve(stats.Objects);

    for (size_t i = 0; i < stats.Objects; ++i) 
    {
        boost::property_tree::ptree record;
        for (int j = 0; j < 20; ++j) 
        {
            record.put("key" + to_string(j), sampleValues[j % sampleValues.size()]);
        }
        allRecords.push_back(record);
    }

    return allRecords;
}

void CreatesStringsPTree(const vector<boost::property_tree::ptree>& allRecords, const Stats& stats) 
{
    ofstream outFile(stats.Filename);
    for (const auto& item : allRecords) 
    {
        write_json(outFile, item, false);
        outFile << "\n";
    }
    outFile.close();
}

void ReadLineFromPTree(ifstream& inFile, const Stats& stats) 
{
    string line;
    while (getline(inFile, line))
    {
        boost::property_tree::ptree pt;
        istringstream iss(line);
        read_json(iss, pt);
    }
    inFile.close();
}

ifstream OpenFilePTree(const Stats& stats) 
{
    ifstream inFile(stats.Filename);
    if (!inFile.is_open()) 
    {
        wcout << L"Не удалось открыть файл!" << endl;
    }
    return inFile;
}

Stats BoostPropertyTree(const string& files, bool choice, const vector<string> sampleValues)
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
    boost::property_tree::ptree root;
    stringstream iss(jsonStr);
    read_json(iss, root);
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
    ostringstream oss;
    write_json(oss, root, false);
    string dumped = oss.str();
    auto endWrite = chrono::high_resolution_clock::now();
    stats.WriteTime = chrono::duration_cast<chrono::microseconds>(endWrite - startWrite).count() / 1000.0;

   auto startReadingV2 = chrono::high_resolution_clock::now();
   auto templateRecord = LinearRecordPTree(sampleValues, stats);
   auto endReadingV2 = chrono::high_resolution_clock::now();
   stats.ReadTimeV2 = chrono::duration_cast<chrono::microseconds>(endReadingV2 - startReadingV2).count() / 1000.0;
   CreatesStringsPTree(templateRecord, stats);
   ifstream inFile = OpenFilePTree(stats);
   auto startReadingV3 = chrono::high_resolution_clock::now();
   ReadLineFromPTree(inFile, stats);
   auto endReadingV3 = chrono::high_resolution_clock::now();
   stats.ReadTimeV3 = chrono::duration_cast<chrono::microseconds>(endReadingV3 - startReadingV3).count() / 1000.0;
    return stats;
}
#endif
