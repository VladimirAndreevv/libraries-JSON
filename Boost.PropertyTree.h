#ifndef BOOST_PROPERTYTREE_H_
#define BOOST_PROPERTYTREE_H_
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <iostream>
#include <chrono>
#include <string>
#include "tools.h"

using namespace std;


Stats BoostPropertyTree(const string& files, bool choice) 
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
    stringstream is(jsonStr);
    read_json(is, root);
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
    ostringstream os;
    write_json(os, root, false);
    string dumped = os.str();
    auto endWrite = chrono::high_resolution_clock::now();
    stats.WriteTime = chrono::duration_cast<chrono::microseconds>(endWrite - startWrite).count() / 1000.0;
    return stats;
}



#endif
