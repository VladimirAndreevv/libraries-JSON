#ifndef BOOST_JSON_H_
#define BOOST_JSON_H_
#include <boost/json.hpp>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;


Stats BoostJSON(const string& files) {

    Stats stats;
    string jsonStr = ReadFile(files);
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
    return stats;
}



#endif
