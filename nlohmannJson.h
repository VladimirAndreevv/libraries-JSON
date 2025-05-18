#ifndef NLOHMANNJSON_H_
#define NLOHMANNJSON_H_
#include <nlohmann/json.hpp>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;


Stats NlohmannJson(const string& files) {

    Stats stats;
    string jsonStr = ReadFile(files);
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
    return stats;
}



#endif
