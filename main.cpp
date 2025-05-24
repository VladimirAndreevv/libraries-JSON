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
    bool choice;
    string file;
    string temp;
    wcout << L"Введите \"0\" если производится тест 1 файла JSON \n или    \"1\" если производится тест каталога с файлами JSON: ";
    getline(cin, temp);
    stringstream(temp) >> choice;
    if (choice == 0)
    {
        wcout << L"Введите путь к JSON-файлу: ";
    }        
    else 
    {
        wcout << L"Введите путь к папке с JSON-файлами: ";        
    } 
    getline(cin, file);
    cout << endl;
    Stats stats;
    vector<string> sampleValues = Sample();
    wcout << L"Рeзультаты библиотеки Boost.JSON:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = BoostJSON(file, choice, sampleValues);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = BoostJSON(file, choice, sampleValues);
    Results(stats);
    Reset();
    /*wcout << L"3 запуск: " << endl;
    stats = BoostJSON(file, choice, sampleValues);
    Results(stats);
    Reset();*/

    wcout << L"Рeзультаты библиотеки nlohmann/json:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = NlohmannJson(file, choice, sampleValues);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = NlohmannJson(file, choice, sampleValues);
    Results(stats);
    Reset();
    /*wcout << L"3 запуск: " << endl;
    stats = NlohmannJson(file, choice, sampleValues);
    Results(stats);
    Reset();*/

    wcout << L"Рeзультаты библиотеки RapidJSON:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = RapidJSON(file, choice, sampleValues);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = RapidJSON(file, choice, sampleValues);
    Results(stats);
    Reset();
    /*wcout << L"3 запуск: " << endl;
    stats = RapidJSON(file, choice, sampleValues);
    Results(stats);
    Reset();*/


    wcout << L"Рeзультаты библиотеки JsonCpp:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = JsonCpp(file, choice, sampleValues);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = JsonCpp(file, choice, sampleValues);
    Results(stats);
    Reset();
    /*wcout << L"3 запуск: " << endl;
    stats = JsonCpp(file, choice, sampleValues);
    Results(stats);
    Reset();*/

    wcout << L"Рeзультаты библиотеки Boost.PropertyTree:" << endl;
    wcout << L"1 запуск: " << endl;
    stats = BoostPropertyTree(file, choice, sampleValues);
    Results(stats);
    Reset();
    wcout << L"2 запуск: " << endl;
    stats = BoostPropertyTree(file, choice, sampleValues);
    Results(stats);
    Reset();
    /*wcout << L"3 запуск: " << endl;
    stats = BoostPropertyTree(file, choice, sampleValues);
    Results(stats);
    Reset();*/
    system("pause");
    return 0;
}
