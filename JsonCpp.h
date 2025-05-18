#ifndef JSONCPP_H_
#define JSONCPP_H_
#include <json/json.h>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;


Stats JsonCpp(const string& files) {

    Stats stats;
    string jsonStr = ReadFile(files);
    if (jsonStr.empty())
    {
        return stats;
    }
    size_t RAMStart = RAMCount();
    auto startReading = chrono::high_resolution_clock::now();
    Json::CharReaderBuilder forReading;
    Json::Value root;
    string error;
    stringstream is(jsonStr);
    bool success = Json::parseFromStream(forReading, is, &root, &error);
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
    return stats;
}



#endif
