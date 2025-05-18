#ifndef TOOLS_H_
#define TOOLS_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
#include <psapi.h>

using namespace std;

struct Stats
{
    double ReadTime = 0.0;
    double WriteTime = 0.0;
    size_t RAWMemory = 0;
};

size_t RAMCount() 
{
    PROCESS_MEMORY_COUNTERS pmc;
    if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc)))
    {
        return pmc.WorkingSetSize / 1024;
    }
    return 0;
}

string ReadFile(const string& files) 
{
    ifstream file(files.c_str());
    if (!file)
    {
        wcout << L"Ошибка при открытии файла: ";
        cout  << files << endl;
    }
    else
    {
        stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }
}

void Results(Stats stats)
{
    wcout << L"Время чтения: " << stats.ReadTime << L" ms или " << stats.ReadTime / 1000 << L" s" << endl;
    wcout << L"Время записи: " << stats.WriteTime << L" ms или " << stats.WriteTime / 1000 << L" s" << endl;
    wcout << L"Приблиз. использование памяти: " << stats.RAWMemory << L" KB или " << stats.RAWMemory / 1024 << L" МB" << endl<<endl;
}

void Reset()
{
    Stats stats;
    stats.ReadTime = 0.0;
    stats.WriteTime = 0.0;
    stats.RAWMemory = 0;
}

#endif