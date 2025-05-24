#ifndef TOOLS_H_
#define TOOLS_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
#include <psapi.h>
#include <filesystem>

using namespace std;

struct Stats
{
    double ReadTime = 0.0;
    double WriteTime = 0.0;
    double ReadTimeV2 = 0.0;
    double ReadTimeV3 = 0.0;
    size_t RAWMemory = 0;
    size_t Objects = 500000;
    string Filename = "input.json";
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
        wcout << L"Ошибка при открытии файла: " ;
        cout << files << endl;
    }
    else
    {
        stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }
}

string ReadFiles(const string& catalog)
{
    if (!filesystem::exists(catalog) || !filesystem::is_directory(catalog)) 
    {
        wcout << L"Ошибка: указанный путь не является папкой.\n";

    }

    string basketJSON = "[\n";

    bool first = true;
    for (const auto& entry : filesystem::directory_iterator(catalog)) 
    {
        if (entry.is_regular_file() && entry.path().extension() == ".json") 
        {
            ifstream file(entry.path());
            if (!file) 
            {
                wcout << L"Не удалось открыть: " << entry.path().filename() << endl;
                continue;
            }

            if (!first) 
            {
                basketJSON += ",\n";
            }
            else 
            {
                first = false;
            }

            stringstream buffer;
            buffer << file.rdbuf();
            basketJSON += buffer.str();
        }
    }
    basketJSON += "\n]";
    return basketJSON;
}

void Results(Stats stats)
{
    wcout << L"Время чтения: " << stats.ReadTime << L" ms или " << stats.ReadTime / 1000 << " s" << endl;    
    wcout << L"Время записи: " << stats.WriteTime << L" ms или " << stats.WriteTime / 1000 << " s" << endl;
    wcout << L"Приблиз. использование памяти: " << stats.RAWMemory << L" KB или " << stats.RAWMemory / 1024 << L" МB" << endl;
    wcout << L"Время построчной записи в библиотеку (ДЛЯ ФАЙЛА input.json): " << stats.ReadTimeV2 << L" ms или " << stats.ReadTimeV2 / 1000 << " s" << endl;
    wcout << L"Время построчного чтение в библиотеку (ДЛЯ ФАЙЛА input.json): " << stats.ReadTimeV3 << L" ms или " << stats.ReadTimeV3 / 1000 <<" s" << endl;
}

void Reset()
{
    Stats stats;
    stats.ReadTime = 0.0;
    stats.WriteTime = 0.0;
    stats.RAWMemory = 0;
    stats.ReadTimeV2 = 0.0;
    stats.ReadTimeV3 = 0.0;
}

vector<string> Sample() 
{
    vector<string> samples;
    for (int len = 4; len <= 1024; len *= 2) 
    {
        samples.push_back(string(len, 'A' + samples.size()));
    }
    return samples;
}
#endif