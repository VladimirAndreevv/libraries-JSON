#include <iostream>
#include <string>
#include "Boost.JSON.h"
#include "tools.h"
#include "nlohmannJson.h"
#include "RapidJSON.h"
#include "JsonCpp.h"
#include "Boost.PropertyTree.h"

using namespace std;


int main()
{
    setlocale (LC_ALL,"");
    string file;
    wcout << L"Введите путь к JSON-файлу: ";
    getline(cin, file);
    cout << endl;
    Stats stats;

    wcout << L"Рeзультаты библиотеки Boost.JSON:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = BoostJSON(file);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = BoostJSON(file);
    Results(stats);
    Reset();
    wcout << L"3 запуск: " << endl;
    stats = BoostJSON(file);
    Results(stats);
    Reset();

    wcout << L"Рeзультаты библиотеки nlohmann/json:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = NlohmannJson(file);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = NlohmannJson(file);
    Results(stats);
    Reset();
    wcout << L"3 запуск: " << endl;
    stats = NlohmannJson(file);
    Results(stats);
    Reset();

    wcout << L"Рeзультаты библиотеки RapidJSON:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = RapidJSON(file);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = RapidJSON(file);
    Results(stats);
    Reset();
    wcout << L"3 запуск: " << endl;
    stats = RapidJSON(file);
    Results(stats);
    Reset();


    wcout << L"Рeзультаты библиотеки JsonCpp:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = JsonCpp(file);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = JsonCpp(file);
    Results(stats);
    Reset();
    wcout << L"3 запуск: " << endl;
    stats = JsonCpp(file);
    Results(stats);
    Reset();

    wcout << L"Рeзультаты библиотеки Boost.PropertyTree:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = BoostPropertyTree(file);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = BoostPropertyTree(file);
    Results(stats);
    Reset();
    wcout << L"3 запуск: " << endl;
    stats = BoostPropertyTree(file);
    Results(stats);
    Reset();
    system("pause");
   
    return 0;
}
