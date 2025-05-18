# libraries-JSON
# План выполнения задания: Сравнение библиотек JSON для C++

##  Основные критерии оценки библиотек для работы с JSON

1. **Скорость чтения**
2. **Скорость записи**
3. **Удобство API**
4. **Использование оперативной памяти**
5. **Размер библиотеки**
6. **Поддержка потоковой обработки (стриминг)**

---

## Библиотеки для сравнения

1. [nlohmann/json](https://github.com/nlohmann/json)
2. [RapidJSON](https://github.com/Tencent/rapidjson)
3. [JsonCpp](https://github.com/open-source-parsers/jsoncpp)
4. [Boost.PropertyTree](https://www.boost.org/doc/libs/release/doc/html/property_tree.html)
5. [Boost.JSON](https://www.boost.org/releases/latest/)

---

## Размеры JSON-файлов для тестирования

1. 10 МБ
2. 100 МБ
3. 600 МБ
4. 1 ГБ
- [Файлы для теста](https://disk.yandex.ru/d/S24ux_HCso23kg)

---

## Цель

Сравнить производительность и удобство работы с JSON в библиотеках C++ при обработке больших структурированных данных.

---

 ## IDE
 Visual Studio Code

---

## Сроки

Задание выполняется до 25.05.2025


# Сравнение производительности библиотек Boost.JSON, nlohmann/json, RapidJSON, JsonCpp и Boost.PropertyTree при работе с JSON-файлом
## Файлы объемом 10 МБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">412.854 ms</td><td valign="top">178.329 ms</td><td valign="top">22 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">490.593 ms</td><td valign="top">144.555 ms</td><td valign="top">21 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">462.348 ms</td><td valign="top">130.316 ms</td><td valign="top">21 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>455.27 ms</b></td><td valign="top"><b>151.07 ms</b></td><td valign="top"><b>21.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">1266.42 ms</td><td valign="top">312.861 ms</td><td valign="top">43 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">1278.07 ms</td><td valign="top">224.169 ms</td><td valign="top">44 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">1463.16 ms</td><td valign="top">303.332 ms</td><td valign="top">42 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>1335.88 ms</b></td><td valign="top"><b>280.12 ms</b></td><td valign="top"><b>43 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">279.008 ms</td><td valign="top">180.826 ms</td><td valign="top">12 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">378.647 ms</td><td valign="top">261.318 ms</td><td valign="top">12 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">376.497 ms</td><td valign="top">255.325 ms</td><td valign="top">12 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>344.72 ms</b></td><td valign="top"><b>232.49 ms</b></td><td valign="top"><b>12 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">308.036 ms</td><td valign="top">203.96 ms</td><td valign="top">57 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">260.578 ms</td><td valign="top">146.042 ms</td><td valign="top">56 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">237.92 ms</td><td valign="top">142.784 ms</td><td valign="top">56 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>268.84  ms</b></td><td valign="top"><b>164.26 ms</b></td><td valign="top"><b>56.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">5452.87 ms</td><td valign="top">567.741 ms</td><td valign="top">109 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">5166.4 ms</td><td valign="top">419.775 ms</td><td valign="top">108 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">5320.51 ms</td><td valign="top">421.798 ms</td><td valign="top">108 МB </td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>5313.26 ms</b></td><td valign="top"><b>469.77 ms</b></td><td valign="top"><b>108.33 МB</b></td></tr>
</table>

**Вывод:** 
## Файлы объемом 100 МБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">4.31295 s</td><td valign="top">1.64817 s</td><td valign="top">195 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.12341 s</td><td valign="top">1.53432 s</td><td valign="top">195 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">4.0463 s</td><td valign="top">1.53694 s</td><td valign="top">195 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>4.16 s</b></td><td valign="top"><b>1.57 s</b></td><td valign="top"><b>195 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">12.398 s</td><td valign="top">2.91257 s</td><td valign="top">393 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">12.2488 s</td><td valign="top">2.76162 s</td><td valign="top">393 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">11.8107 s</td><td valign="top">3.28877 s</td><td valign="top">392 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>12.15 s</b></td><td valign="top"><b>2.99 s</b></td><td valign="top"><b>392.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">3.2134 s</td><td valign="top">1.97557 s</td><td valign="top">110 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">3.32687 s</td><td valign="top">2.34185 s</td><td valign="top">110 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">3.13078 s</td><td valign="top">2.25121 s</td><td valign="top">110 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>3.22 s</b></td><td valign="top"><b>2.19 s</b></td><td valign="top"><b>110 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">2.7103 s</td><td valign="top">1.77562 s</td><td valign="top">513 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">2.66837 s</td><td valign="top">1.7686 s</td><td valign="top">513 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">2.75556 s</td><td valign="top">4.78128 s</td><td valign="top">513 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>2.71 s</b></td><td valign="top"><b>2.78 s</b></td><td valign="top"><b>513 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">47.5422 s</td><td valign="top">4.78128 s</td><td valign="top">979 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">47.3812 s</td><td valign="top">4.7607 s</td><td valign="top">978 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">49.0485 s</td><td valign="top">5.25114 s</td><td valign="top">978 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>47.99 s</b></td><td valign="top"><b>4.93 s</b></td><td valign="top"><b>978.33 МB</b></td></tr>
</table>

**Вывод:** 
## Файлы объемом 600 МБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">25.453 s</td><td valign="top">10.2848 s</td><td valign="top">1225 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">26.3507 s</td><td valign="top">9.66659 s</td><td valign="top">1223 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">26.1309 s</td><td valign="top">16.784 s</td><td valign="top">1222 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>25.98 s</b></td><td valign="top"><b>12.25 s</b></td><td valign="top"><b>1223.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">75.4834 s</td><td valign="top">16.784 s</td><td valign="top">2465 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">76.4166 s</td><td valign="top">17.5373 s</td><td valign="top">2462 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">76.6663 s</td><td valign="top">16.7062 s</td><td valign="top">2463 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>76.19 s</b></td><td valign="top"><b>17.01 s</b></td><td valign="top"><b>2463.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">19.4194 s</td><td valign="top">13.5474 s</td><td valign="top">504 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">19.8141 s</td><td valign="top">13.238 s</td><td valign="top">484 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">19.7493 s</td><td valign="top">13.8712 s</td><td valign="top">688 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>19.66 s</b></td><td valign="top"><b>13.55 s</b></td><td valign="top"><b>558.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">16.2815 s</td><td valign="top">10.3664 s</td><td valign="top">3012 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">17.7036 s</td><td valign="top">10.838 s</td><td valign="top">2950 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">17.1263 s</td><td valign="top">10.0528 s</td><td valign="top">3218 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>17.04 s</b></td><td valign="top"><b>10.42 s</b></td><td valign="top"><b>3060 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">296.088 s</td><td valign="top">31.4919 s</td><td valign="top">5725 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">294.044 s</td><td valign="top">29.9517 s</td><td valign="top">6134 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">298.146 s</td><td valign="top">31.0931 s</td><td valign="top">4896 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>296.09 s</b></td><td valign="top"><b>30.85 s</b></td><td valign="top"><b>5585 МB</b></td></tr>
</table>

**Вывод:** 

## Файлы объемом 1 ГБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">43.5187 s</td><td valign="top">17.0104 s</td><td valign="top">1920 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">43.9324 s</td><td valign="top">16.8988 s</td><td valign="top">1917 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">43.9799 s</td><td valign="top">17.1289 s</td><td valign="top">1916 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>43.81 s</b></td><td valign="top"><b>17.01 s</b></td><td valign="top"><b>1917.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">130.365 s</td><td valign="top">29.1363 s</td><td valign="top">3862 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">130.369 s</td><td valign="top">29.3775 s</td><td valign="top">3858 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">129.76 s</td><td valign="top">29.9424 s</td><td valign="top">3525 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>130.16 s</b></td><td valign="top"><b>29.49 s</b></td><td valign="top"><b>3748.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">35.1629 s</td><td valign="top">23.3939 s</td><td valign="top">1082 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">35.0693 s</td><td valign="top">23.3482 s</td><td valign="top">1079 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">34.6272 s</td><td valign="top">23.3322 s</td><td valign="top">740 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>34.95 s</b></td><td valign="top"><b>23.36 s</b></td><td valign="top"><b>967 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">29.4696 s</td><td valign="top">18.1966 s</td><td valign="top">5043 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">27.9194 s</td><td valign="top">18.2022 s</td><td valign="top">4583 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">28.3989 s</td><td valign="top">18.3828 s</td><td valign="top">5044 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>28.6 s</b></td><td valign="top"><b>18.26 s</b></td><td valign="top"><b>4890 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">515.961 s</td><td valign="top">55.3196 s</td><td valign="top">9614 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">520.29 s</td><td valign="top">53.5875 s</td><td valign="top">9613 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">530.495 s</td><td valign="top">53.7047 s</td><td valign="top">7647 МB</td></tr>
<tr><td valign="top">Среднее</td><td valign="top"><b>522.25 s</b></td><td valign="top"><b>54.2 s</b></td><td valign="top"><b>8958 МB</b></td></tr>
</table>

**Вывод:** 

## Общий вывод

## Демонстрация вывода программы
![image](https://github.com/user-attachments/assets/4d7c15cc-21b2-471d-aafd-4e451080d590)



