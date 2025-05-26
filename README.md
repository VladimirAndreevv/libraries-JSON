
# libraries-JSON
# План выполнения задания: Сравнение библиотек JSON для C++

##  Основные критерии оценки библиотек для работы с JSON

1. **Скорость чтения**
2. **Скорость записи**
3. **Удобство API**
4. **Использование оперативной памяти**
5. **Поддержка потоковой обработки (стриминг)**

---

## Библиотеки для сравнения

1. [Boost.JSON](https://www.boost.org/releases/latest/)
2. [nlohmann/json](https://github.com/nlohmann/json)
3. [RapidJSON](https://github.com/Tencent/rapidjson)
4. [JsonCpp](https://github.com/open-source-parsers/jsoncpp)
5. [Boost.PropertyTree](https://www.boost.org/doc/libs/release/doc/html/property_tree.html)

---

## Размеры JSON-файлов для тестирования
1. 100 КБ
2. 1 МБ
3. 10 МБ
4. 100 МБ
5. 600 МБ
6. 1 ГБ
7. Много маленьких файлов (размер 1 файла ~238КБ, элементов 474,  общий вес ~111 МБ)
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
## Файлы объемом 100 КБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">1.388 ms</td><td valign="top">0.622 ms</td><td valign="top">268 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">1.39 ms</td><td valign="top">0.58 ms</td><td valign="top">340 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">1.425 ms</td><td valign="top">0.534 ms</td><td valign="top">376 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>1.4 ms</b></td><td><b>0.58</b> <b>ms</b></td><td><b>328</b> <b>KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">4.422 ms</td><td valign="top">1.366 ms</td><td valign="top">744 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.223 ms</td><td valign="top">1.375 ms</td><td valign="top">344 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">3.997 ms</td><td valign="top">1.426 ms</td><td valign="top">460 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.21 ms</b></td><td><b>1.39 ms</b></td><td><b>516 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">0.876 ms</td><td valign="top">0.719 ms</td><td valign="top">84 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">0.8 ms</td><td valign="top">0.796 ms</td><td valign="top"> KB</td></tr>
<tr><td valign="top">3</td><td valign="top">0.751 ms</td><td valign="top">0.624 ms</td><td valign="top"> KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>0.81 ms</b></td><td><b>0.71 ms</b></td><td><b>76 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">4.888 ms</td><td valign="top">3.6 ms</td><td valign="top">776 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">7.709 ms</td><td valign="top">5.05 ms</td><td valign="top">760 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">6.616 ms</td><td valign="top">5.844 ms</td><td valign="top">808 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>6.4 ms</b></td><td><b>4.83 ms</b></td><td><b>781.33 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">10.926 ms</td><td valign="top">2.942 ms</td><td valign="top">1940 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">11.76 ms</td><td valign="top">3.607 ms</td><td valign="top">1264 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">11.391 ms</td><td valign="top">2.815 ms</td><td valign="top">1756 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>11.36 ms</b></td><td><b>3.12 ms</b></td><td><b>1653.33 KB</b></td></tr>
</table>



**Гистограмма:** 
![Гистограмма](https://github.com/user-attachments/assets/eba715dd-990f-4c92-a754-1112c4d21300)
![Гистограмма 0,1](https://github.com/user-attachments/assets/aff48927-f7a6-49d9-8193-d667f8840e42)


**Вывод:** RapidJSON показала наилучшее время чтения — 0.81 мс — и минимальное использование оперативной памяти — 76 КБ. Boost.JSON обеспечила самую быструю скорость записи — в среднем 0.58 мс.

## Файлы объемом 1 МБ
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">7.871 ms</td><td valign="top">3.554 ms</td><td valign="top">1516 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">7.665 ms</td><td valign="top">3.551 ms</td><td valign="top">1200 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">8.112 ms</td><td valign="top">3.609 ms</td><td valign="top">2144 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>7.88</b> <b>ms</b></td><td><b>3.57 ms</b></td><td><b>1620 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">26.242 ms</td><td valign="top">8.079 ms</td><td valign="top">3576 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">26.433 ms</td><td valign="top">8.202 ms</td><td valign="top">3500 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">26.429 ms</td><td valign="top">8.104 ms</td><td valign="top">3508 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>26.37 ms</b></td><td><b>8.13 ms</b></td><td><b>3528 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">4.685 ms</td><td valign="top">3.699 ms</td><td valign="top">384 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.58 ms</td><td valign="top">4.092 ms</td><td valign="top">3 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">4.382 ms</td><td valign="top">3.694 ms</td><td valign="top">372 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.55 ms</b></td><td><b>3.83 ms</b></td><td><b>376 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">31.227 ms</td><td valign="top">20.916 ms</td><td valign="top">5080 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">30.504 ms</td><td valign="top">20.808 ms</td><td valign="top">5488 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">28.997 ms</td><td valign="top">20.3 ms</td><td valign="top">5084 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>30.24 ms</b></td><td><b>20.67 ms</b></td><td><b>5217.33 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">69.28 ms</td><td valign="top">19.259 ms</td><td valign="top">10628 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">69.235 ms</td><td valign="top">17.323 ms</td><td valign="top">10096 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">69.222 ms</td><td valign="top">16.833 ms</td><td valign="top">11084 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>69.25 ms</b></td><td><b>17.81 ms</b></td><td><b>10602.67 KB</b></td></tr>
</table>



**Гистограмма:** 
![Гистограмма2](https://github.com/user-attachments/assets/d6771ade-6ed0-448d-a587-0d98f6f76d94)


**Вывод:** RapidJSON продемонстрировала наилучшее среднее время чтения — 4.55 мс — и самое низкое использование оперативной памяти — 376 КБ. Boost.JSON показала лучшее среднее время записи — 3.57 мс.
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">79.503 ms</td><td valign="top">31.888 ms</td><td valign="top">22 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">78.244 ms</td><td valign="top">31.807 ms</td><td valign="top">21 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">79.239 ms</td><td valign="top">31.924 ms</td><td valign="top">21 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>79 ms</b></td><td><b>31.87 ms</b></td><td><b>21.33</b>  <b>МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">266.789 ms</td><td valign="top">79.84 ms</td><td valign="top">43 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">263.983 ms</td><td valign="top">78.535 ms</td><td valign="top">43 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">265.929 ms</td><td valign="top">79.349 ms</td><td valign="top">43 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>265.57 ms</b></td><td><b>79.24 ms</b></td><td><b>43 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">47.612 ms</td><td valign="top">45.17 ms</td><td valign="top">12 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">48.304 ms</td><td valign="top">43.648 ms</td><td valign="top">12 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">49.636 ms</td><td valign="top">42.75 ms</td><td valign="top">12 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>48.52 ms</b></td><td><b>43.86 ms</b></td><td><b>12 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">304.655 ms</td><td valign="top">200.734 ms</td><td valign="top">57 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">306.638 ms</td><td valign="top">199.444 ms</td><td valign="top">56 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">305.999 ms</td><td valign="top">198.027 ms</td><td valign="top">57 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>305.76 ms</b></td><td><b>199.4 ms</b></td><td><b>56.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">701.878 ms</td><td valign="top">179.293 ms</td><td valign="top">109 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">697.31 ms</td><td valign="top">179.406 ms</td><td valign="top">108 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">698.287 ms</td><td valign="top">178.673 ms</td><td valign="top">108 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>699.16 ms</b></td><td><b>179.12 ms</b></td><td><b>108.33 МB</b></td></tr>
</table>



**Гистограмма:** 
![Гистограмма10](https://github.com/user-attachments/assets/24852ca9-0ba7-4255-9c64-20f22d227877)




**Вывод:** RapidJSON показала наилучшее среднее время чтения — 48.52 мс и самое низкое использование памяти — 12 МБ. Boost.JSON заняла первое место по скорости записи — 31.87 мс.
## Файлы объемом 100 МБ
Тестирование:

<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">761.85 ms</td><td valign="top">337.629 ms</td><td valign="top">195 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">743.898 ms</td><td valign="top">286.805 ms</td><td valign="top">195 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">749.105 ms</td><td valign="top">253.635 ms</td><td valign="top">194 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>751.62 ms</b></td><td><b>292.69 ms</b></td><td><b>194.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">2567.62 ms</td><td valign="top">717.405 ms</td><td valign="top">394 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">2422.35 ms</td><td valign="top">732.368 ms</td><td valign="top">393 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">2337.18 ms</td><td valign="top">693.348 ms</td><td valign="top">393 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>2442.38 ms</b></td><td><b>714.37 ms</b></td><td><b>393.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">449.861 ms</td><td valign="top">412.871 ms</td><td valign="top">110 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">442.727 ms</td><td valign="top">401.238 ms</td><td valign="top">109 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">444.783 ms</td><td valign="top">399.721 ms</td><td valign="top">109 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>445.79 ms</b></td><td><b>404.61 ms</b></td><td><b>109.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">2920.2 ms</td><td valign="top">1779.63 ms</td><td valign="top">513 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">2782.07 ms</td><td valign="top">1778.16 ms</td><td valign="top">513 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">2765.88 ms</td><td valign="top">1787.07 ms</td><td valign="top">513 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>2822.72 ms</b></td><td><b>1781.62 ms</b></td><td><b>513 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">6344.11 ms</td><td valign="top">1680.15 ms</td><td valign="top">980 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">6356.97 ms</td><td valign="top">1611.91 ms</td><td valign="top">978 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">6357.8 ms</td><td valign="top">1604.86 ms</td><td valign="top">978 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>6352.96</b> <b>ms</b></td><td><b>1632.31 ms</b></td><td><b>978.67 МB</b></td></tr>
</table>



**Гистограмма:** 
![Гистограмма3](https://github.com/user-attachments/assets/616ab02c-27a5-4dd5-a8cf-3b3b8ce202f7)


**Вывод:** Boost.JSON лидирует по скорости записи (292.69 мс). RapidJSON остаётся самой экономичной по памяти — 109.33 МБ и самым быстры на чтетие (445.79 мс)
## Файлы объемом 600 МБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">4.72567 s</td><td valign="top">2.33111 s</td><td valign="top">1225 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.60418 s</td><td valign="top">1.80161 s</td><td valign="top">1223 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">4.49343 s</td><td valign="top">1.80491 s</td><td valign="top">1222 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.61</b> <b>s</b></td><td><b>1.98 s</b></td><td><b>1223.33</b> <b>МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">15.6914 s</td><td valign="top">4.87907 s</td><td valign="top">2465 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">15.2407 s</td><td valign="top">4.42404 s</td><td valign="top">2462 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">15.4006 s</td><td valign="top">4.44008 s</td><td valign="top">2463 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>15.44 s</b></td><td><b>4.58 s</b></td><td><b>2463.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">2.72234 s</td><td valign="top">2.72429 s</td><td valign="top">511 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">2.70451 s</td><td valign="top">2.64792 s</td><td valign="top">483 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">2.85034 s</td><td valign="top">2.67239 s</td><td valign="top">688 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>2.76 s</b></td><td><b>2.68 s</b></td><td><b>560.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">18.5662 s</td><td valign="top">11.1866 s</td><td valign="top">3009 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">17.9123 s</td><td valign="top">11.0867 s</td><td valign="top">2940 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">17.8024 s</td><td valign="top">11.1429 s</td><td valign="top">3218 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>18.09 s</b></td><td><b>11.14 s</b></td><td><b>3055.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">42.0132 s</td><td valign="top">11.0726 s</td><td valign="top">6135 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">42.7936 s</td><td valign="top">10.4962 s</td><td valign="top">6134 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">45.149 s</td><td valign="top">10.141 s</td><td valign="top">4888 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>43.32 s</b></td><td><b>10.57 s</b></td><td><b>5719 МB</b></td></tr>
</table>




**Гистограмма:** 
![Гистограмма4](https://github.com/user-attachments/assets/be7c97d3-1103-41af-a6f6-1252591afc9e)


**Вывод:** Boost.JSON показала наилучшее время записи (1.98 с), а RapidJSON лидирует в скорости чтения (2.76 с) и потреблении памяти (560.67 МБ). Boost.PropertyTree оказалась самой ресурсоёмкой по всем показателям.
## Файлы объемом 1 ГБ
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">6.06027 s</td><td valign="top">2.79998 s</td><td valign="top">1919 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">5.91596 s</td><td valign="top">2.87674 s</td><td valign="top">1916 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">6.03602 s</td><td valign="top">2.87749 s</td><td valign="top">1915 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>6 s</b></td><td><b>2.85 s</b></td><td><b>1916.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">20.7473 s</td><td valign="top">5.72596 s</td><td valign="top">3862 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">20.6582 s</td><td valign="top">5.86691 s</td><td valign="top">3858 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">20.5032 s</td><td valign="top">5.84947 s</td><td valign="top">3524 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>20.64 s</b></td><td><b>5.81 s</b></td><td><b>3748 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">4.37108 s</td><td valign="top">5.31833 s</td><td valign="top">1082 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.27775 s</td><td valign="top">5.438 s</td><td valign="top">1079 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">3.96741 s</td><td valign="top">5.40932 s</td><td valign="top">739 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.21 s</b></td><td><b>5.39 s</b></td><td><b>966.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">26.009 s</td><td valign="top">15.7601 s</td><td valign="top">5043 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">24.5905 s</td><td valign="top">16.3223 s</td><td valign="top">4607 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">24.9263 s</td><td valign="top">16.0626 s</td><td valign="top">5043 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>25.18 s</b></td><td><b>16.05 s</b></td><td><b>4897.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">58.6224 s</td><td valign="top">17.9931 s</td><td valign="top">9613 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">62.6208 s</td><td valign="top">16.2797 s</td><td valign="top">9613 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">68.5794 s</td><td valign="top">16.4328 s</td><td valign="top">7691 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>63.27 s</b></td><td><b>16.9 s</b></td><td><b>8972.33 МB</b></td></tr>
</table>


**Гистограмма:** 
![Гистограмма5](https://github.com/user-attachments/assets/5fbaa2ca-a3d8-404b-9995-405660b4ba60)


**Вывод:** RapidJSON показала лучшее среднее время чтения (4.21 с) и наименьшее потребление оперативной памяти (966.67 МБ), демонстрируя сбалансированную производительность. Boost.JSON заняла второе место по времени чтения (6.00 с) и записи (2.85 с), однако использует около 1.9 ГБ памяти. JonCpp и Boost.PropertyTree оказались самыми ресурсоёмкими: JonCpp — с пиковым потреблением почти 5 ГБ, а Boost.PropertyTree — до 9.6 ГБ и временем чтения свыше 1 минуты. nlohmann::json обеспечила стабильную, но умеренную производительность с временем чтения 20.64 с и расходом памяти ~3.7 ГБ. 

## Много маленьких файлов (размер 1 файла ~238КБ, элементов 474,  общий вес ~111 МБ)
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">0.938457 s</td><td valign="top">0.42426 s</td><td valign="top">346 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">0.956689 s</td><td valign="top">0.431143 s</td><td valign="top">345 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">0.971727 s</td><td valign="top">0.425447 s</td><td valign="top">344 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>0.96 s</b></td><td><b>0.43 s</b></td><td><b>345 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">3.62665 s</td><td valign="top">1.04239 s</td><td valign="top">696 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">3.42135 s</td><td valign="top">1.01791 s</td><td valign="top">695 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">3.47991 s</td><td valign="top">0.99989 s</td><td valign="top">694 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>3.51 s</b></td><td><b>1.02 s</b></td><td><b>695 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">0.659422 s</td><td valign="top">0.920955 s</td><td valign="top">193 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">0.590949 s</td><td valign="top">0.895933 s</td><td valign="top">94 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">0.590815 s</td><td valign="top">0.951909 s</td><td valign="top">91 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>0.61 s</b></td><td><b>0.92 s</b></td><td><b>126 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">4.00259 s</td><td valign="top">2.88142 s</td><td valign="top">854 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">3.88686 s</td><td valign="top">2.8398 s</td><td valign="top">725 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">3.89328 s</td><td valign="top">2.84213 s</td><td valign="top">693 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>3.93 s</b></td><td><b>2.85 s</b></td><td><b>757.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">8.85535 s</td><td valign="top">2.52537 s</td><td valign="top">1494 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">9.02329 s</td><td valign="top">2.51772 s</td><td valign="top">1678 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">8.92508 s</td><td valign="top">2.53415 s</td><td valign="top">1316 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>8.93 s</b></td><td><b>2.53 s</b></td><td><b>1496 МB</b></td></tr>
</table>


**Гистограмма:** 
![Гистограмма11](https://github.com/user-attachments/assets/5d06cf17-cf7e-485b-b1d6-3aa90d6c0508)
![Гистограмма6,1](https://github.com/user-attachments/assets/d92d0d9b-014b-4ec6-ab5d-c0c5f679a03d)


**Вывод:** RapidJSON заняла лидирующие позиции: лучшее среднее время чтения (0.61 с) и наименьшее потребление оперативной памяти (126 МБ), что делает её наиболее эффективной библиотекой по скорости и экономии ресурсов. Boost.JSON показала стабильную производительность с хорошими результатами: чтение — 0.96 с, запись — 0.43 с и умеренное использование памяти — 345 МБ.


## Тест на построчное чтение/запись
Тестирование:

<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время построчной записи в библиотеку (ДЛЯ ФАЙЛА input.json)</th><th valign="top">Время построчного чтение в библиотеку (ДЛЯ ФАЙЛА input.json)</th></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">5.22534 s</td><td valign="top">16.5274 s</td></tr>
<tr><td valign="top">2</td><td valign="top">6.4077 s</td><td valign="top">16.5546 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>5.82</b> <b>s</b></td><td><b>16.54</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">12.559 s</td><td valign="top">160.381 s</td></tr>
<tr><td valign="top">2</td><td valign="top">11.0462 s</td><td valign="top">161.02 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>11.8</b> s</td><td><b>160.7</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">5.50354 s</td><td valign="top">53.1589 s</td></tr>
<tr><td valign="top">2</td><td valign="top">4.2342 s</td><td valign="top">50.1703 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.87</b> s</td><td><b>51.66</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">14.2557 s</td><td valign="top">29.7501 s</td></tr>
<tr><td valign="top">2</td><td valign="top">12.3815 s</td><td valign="top">42.9883 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>13.32</b> s</td><td><b>36.37</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">31.2017 s</td><td valign="top">72.2704 s</td></tr>
<tr><td valign="top">2</td><td valign="top">30.0306 s</td><td valign="top">69.2141 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>30.62</b> s</td><td><b>70.74</b> s</td></tr>
</table>


**Гистограмма:**

![Гистограмма7](https://github.com/user-attachments/assets/1a76bb5e-f840-4815-9cf2-eb371b5661d3)


**Вывод:** RapidJSON — самая быстрая запись (4.87 с), но чтение — 51.66 с. Boost.JSON — сбалансированные показатели: запись — 5.82 с, чтение — 16.54 с.
# Инструкция по библиотекам

## Установка библиотек

Все библиотеки устанавливались через **vcpkg**

1. Устанавливаем vcpkg  
```cmd
git clone https://github.com/microsoft/vcpkg
```

2. Переходим в каталог  
```cmd
cd vcpkg
```

3. Устанавливаем библиотеки  
```cmd
vcpkg install rapidjson  
vcpkg install simdjson  
vcpkg install jsoncpp  
vcpkg install boost-property-tree  
vcpkg install boost-json  
```

**ВАЖНО:** В сравнении используется компилятор MinGW, и библиотеки были скачаны для него (у них расширение `.a`). Библиотеки формата `.lib` для Visual Studio могут показывать другую производительность. Например, **Boost.PropertyTree** и **nlohmann/json** в сборке под MSVC потребляют в два раза больше RAM.

4. Добавляем библиотеки в проект.

**Пример:**  
```cmake
set(nlohmann_json_DIR "C:/Users/[имя пользователя]/vcpkg/installed/x64-mingw-static/share/nlohmann_json/")
find_package(nlohmann_json CONFIG REQUIRED)
```

5. Подключаем библиотеки в проекте:

**Boost.JSON**  
```cpp
#include <boost/json.hpp>
```

**nlohmann/json**  
```cpp
#include <nlohmann/json.hpp>
```

**RapidJSON**  
```cpp
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
```

**JsonCpp**  
```cpp
#include <json/json.h>
```

**Boost.PropertyTree**  
```cpp
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
```

## Boost.JSON
Особенности:

1. Минимальная версия C++: C++11
2. Удобство API: 5/5
3. Поддержка потоковой обработки: поддержка частичная

Типы пременных и функции:
1. `json::object` - это JSON-объект `{"id": 1}`
2. `json::array` - это JSON-массив `[object1, object2, object3]`
3. `json::value` - это универсальное значение, может быть object или array
4. `json::parse` - переводит строку `string` в `json::value`
5. `json::serialize` - переводит значение `json::value` в  `string`
6. `json::value_from` - преобразует структуру C++ в JSON

Пример кода
```cpp
#include <iostream>
#include <boost/json.hpp>
using namespace std;
int main()
{
	// создание объекта
	boost::json::object obj;
	obj["name"] = "Vova";
	obj["age"] = 20;
	// перевод в строку
	string jsonStr = boost::json::serialize(obj);
	cout << jsonStr << endl;
	// перевод в boost::json::value
	boost::json::value parsed = boost::json::parse(jsonStr);
	// boost::json::array
	boost::json::array arr = { obj,obj, obj };
	for (const auto& v : arr) 
	{
		cout << v.as_object() << " ";
	}
	return 0;
}
```

## nlohmann/json
Особенности:

1. Минимальная версия C++: C++11, но рекомендуется C++17
2. Удобство API: 5/5
3. Поддержка потоковой обработки: не поддерживает

Типы пременных и функции:
1. `nlohmann::json` - это JSON-объект `{"id": 1}`
2. `json::parse` - переводит строку `string` в `nlohmann::json`
3. `.dump()` - переводит значение `nlohmann::json` в  `string`

Пример кода
```cpp
#include <iostream>
#include <nlohmann/json.hpp>
using namespace std;

int main()
{
	// создание объекта (корректно)
	nlohmann::json obj = {
		{"name", "Vova"},
		{"age", 20}
	};
	// перевод в строку
	string jsonStr = obj.dump();
	cout << jsonStr << endl;
	// перевод строки обратно в JSON
	nlohmann::json parsed = nlohmann::json::parse(jsonStr);
	// создание массива
	nlohmann::json arr = nlohmann::json::array();
	arr.push_back(obj);
	arr.push_back(obj);
	arr.push_back(obj);
	for (const auto& item : arr)
	{
		cout << item << "\n";
	}
	return 0;
}
``` 
## RapidJSON
Особенности:

1. Минимальная версия C++: совместима C++03, но рекомендуется использовать с C++11
2. Удобство API: 4/5
3. Поддержка потоковой обработки: поддерживает SAX + DOM (видно по потреблению RAW)

Типы пременных и функции:
1. `Document`, `Value` - основные типы
2. `.SetObject()` - задание типа "объект"
3. `.SetArray()` - задание типа "массив"
4. `.AddMember()` - добавление в объект
5. `.PushBack()` - добавление в массив
6. `.GetString()` - получение значение из типа Document
7. `.Parse()` - записать значение в тип Document
8. `.AddMember()` - добавить ключ-значения
9. `.Accept()`- обход JSON-структуру

Пример кода
```cpp
#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
using namespace std;

int main()
{
	// создание объекта (корректно)
	rapidjson::Document d;
	d.SetObject();
	rapidjson::Document::AllocatorType& allocator = d.GetAllocator(); // нужно для выделения память
	d.AddMember("name", "Vova", allocator);
	d.AddMember("age", 20, allocator);
	// перевод в строку
	rapidjson::StringBuffer buffer;
	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d.Accept(writer);
	string jsonStr = buffer.GetString();
	cout << jsonStr;
	// перевод строки обратно в JSON
	d.Parse(jsonStr.c_str());
	// создание массива
	rapidjson::Value arr(rapidjson::kArrayType);
	arr.PushBack("apple", allocator).PushBack("orange", allocator).PushBack("kiwi", allocator);
	d.AddMember("fruits", arr, allocator);
	return 0;
}
``` 

## JsonCpp
Особенности:

1. Минимальная версия C++: Старые версии поддерживали C++98, но современные версии требуют C++11
2. Удобство API: 4/5
3. Поддержка потоковой обработки: не поддерживает

Типы пременных и функции:
1. `CharReaderBuilder` - тип используемый для чтения и создание JSON файла
2. `Value` - переменная для хранение JSON-данных
3. `.asString()` - получить строку
4. `.asInt()`, `.asUInt()` - получить целое число
5. `.asFloat()`, `.asDouble()` - получить дробное число
6. `.asBool()` - получить переменную типа bool
7. `.isObject()` - получить объект

Пример кода
```cpp
#include <json/json.h>
#include <iostream>
using namespace std;

int main()
{
	// создание объекта (корректно)
	Json::Value root1;
	root1["name"] = "Vova";
	root1["age"] = 20;
	// перевод в строку	
	Json::StreamWriterBuilder writerBuilder;
	string jsonStr1 = Json::writeString(writerBuilder, root1);
	cout << jsonStr1 << endl;
	// перевод строки в JSON
	string jsonStr = R"({"name":"Vova", "age":20})";
	Json::CharReaderBuilder builder;
	Json::Value root;
	string errs;
	istringstream iss(jsonStr);
	bool success = Json::parseFromStream(builder, iss, &root, &errs);
	if (!success) 
	{
		cerr << "Ошибка парсинга: " << errs << endl;
		return 1;
	}
	cout << "Name: " << root["name"].asString() << endl;
	cout << "Age: " << root["age"].asInt() << endl;
	// создание массива
	Json::Value arr(Json::arrayValue);
	arr.append("apple");
	arr.append("orange");
	arr.append("kiwi");
	for (const auto& item : arr) {
		cout << item.asString() << endl;
	}
	return 0;
}
``` 
## Boost.PropertyTree
Особенности:

1. Минимальная версия C++: C++03
2. Удобство API: 5/5
3. Поддержка потоковой обработки: не поддерживает 

Типы пременных и функции:
1. `property_tree::ptree` - тип, представляющий JSON-структуру
2. `.put()` - вставить или заменить значение
3. `.get<>()` - получить значение
4. `.put_child()` - 	вставка вложенного объекта/массива
5. `.push_back()` - добавление элемента в массив

```cpp
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
using namespace std;

int main()
{
	// создание объекта (корректно)
	boost::property_tree::ptree p;
	p.put("name", "Vova");
	p.put("age", 20);
	// перевод в строку	
	ostringstream os;
	write_json(os, p, false);
	string jsonStr1 = os.str();
	cout << jsonStr1 << endl;
	// перевод строки в JSON
	string jsonStr = "{\"name\":\"Vova\", \"age\":20}";
	boost::property_tree::ptree root;
	stringstream is(jsonStr);
	read_json(is, root);
	cout << "Name: " << root.get<string>("name") << endl;
	cout << "Age: " << root.get<int>("age") << endl;
	// создание массива
	boost::property_tree::ptree p1, fruits, fruit1, fruit2, fruit3;
	fruit1.put("", "apple");
	fruit2.put("", "orange");
	fruit3.put("", "kiwi");
	fruits.push_back(make_pair("", fruit1));
	fruits.push_back(make_pair("", fruit2));
	fruits.push_back(make_pair("", fruit3));
	p1.put_child("fruits", fruits);
	for (const auto& item : p1.get_child("fruits")) 
	{
		cout << item.second.get_value<string>() << "\n";
	}
	return 0;
}
```
# Общий вывод
Динамика изменение скороти чтение
![график чтенияv2](https://github.com/user-attachments/assets/faba2ba0-2f80-496d-a808-9ecd3f50bc08)




Динамика изменение скороти записи
![график записиv2](https://github.com/user-attachments/assets/3f979672-c45c-4f5f-b0db-cef6619d3e6b)




## RapidJSON
Общая характеристика: 

RapidJSON показал себя как самый сбалансированный вариант среди всех библиотек. Он сочетает хорошую скорость и минимальное потребление памяти. Особенно хорошо проявил себя на больших объёмах данных и при работе с множеством файлов.

Поведение в тестах:
1. 100 КБ — 1 ГБ: стабильно хорошее время чтения и записи, использование RAM значительно ниже, чем у остальных.
2. 600 МБ – 1 ГБ: сохраняет производительность и остаётся в пределах 1 ГБ оперативной памяти.
3. Много мелких файлов: второе место по скорости, но лучшее по экономии RAM.
   
Вывод:
Это наилучший выбор для большинства практических задач, особенно если работа ведётся в условиях ограниченной оперативной памяти или высокой нагрузки.

## JsonCpp
Общая характеристика:

JsonCpp — самая быстрая библиотека по времени чтения практически на всех объёмах, однако она резко увеличивает потребление памяти, особенно при работе с большими файлами.

Поведение в тестах:
1. 100 КБ — 100 МБ: стабильно первое или второе место по скорости; потребление RAM — высокое.
2. 600 МБ — 1 ГБ: время чтения лучше всех, но RAM доходит до 5 ГБ.
3. Много мелких файлов: первое место по скорости, но RAM снова превышает 700 МБ.

Вывод:
Рекомендуется для задач, где важна максимальная скорость и некритично потребление ОЗУ. Подходит для настольных приложений или серверов с большим объёмом памяти.

## Boost.JSON
Общая характеристика:

Boost.JSON демонстрирует среднюю скорость и умеренное потребление памяти. Она работает стабильно на всех объёмах и отличается предсказуемым поведением.

Поведение в тестах:

1. На малых объёмах немного уступает по скорости RapidJSON и JsonCpp.
2. На крупных объёмах (600 МБ – 1 ГБ) использует около 1.9 ГБ RAM — разумный компромисс.
3. Много файлов: производительность на уровне RapidJSON, RAM ~345 МБ.

Вывод:
Подходит для проектов, где уже используется Boost. Хороший компромисс между производительностью и удобством интеграции в экосистему.

## nlohmann/json
Общая характеристика:

nlohmann/json — одна из самых популярных библиотек благодаря простоте синтаксиса. Однако она уступает остальным в производительности и значительно проигрывает по памяти.

Поведение в тестах:
1. 100 КБ — 10 МБ: уже ощутимо медленнее конкурентов.
2. 100 МБ – 1 ГБ: проигрывает по времени и использует до 4 ГБ RAM.
3. Много файлов: самое медленное чтение среди всех.

Вывод:
Хороший выбор для обучения, прототипирования и работы с небольшими файлами. Не рекомендуется для обработки больших объёмов данных или при ограниченных ресурсах.

## Boost.PropertyTree
Общая характеристика:
Boost.PropertyTree очень плохо работает с JSON-файлами. Её архитектура ориентирована на простые конфигурационные форматы.

Поведение в тестах:

1. На всех объёмах — худшее время чтения и записи.
2. RAM достигает 9–10 ГБ при работе с 1 ГБ JSON.
3. Даже на мелких файлах работает в 10–15 раз медленнее конкурентов.

Вывод:
Категорически не рекомендуется для работы с JSON. Использовать только для XML/INI или простых задач, где JSON — временное решение.

# Демонстрация вывода программы
![демонстрация3](https://github.com/user-attachments/assets/22ffed75-793c-4688-a4f6-9bb3ab52f331)

![демонстрация4](https://github.com/user-attachments/assets/4507bee7-141e-4611-8cdc-34b23d27c53e)
