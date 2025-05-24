
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
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">6.673 ms</td><td valign="top">2.753 ms</td><td valign="top">528 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">6.277 ms</td><td valign="top">2.805 ms</td><td valign="top">276 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">6.313 ms</td><td valign="top">2.769 ms</td><td valign="top">260 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>6.42 ms</b></td><td><b>2.78 ms</b></td><td><b>354.67 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">19.135 ms</td><td valign="top">4.13 ms</td><td valign="top">588 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">16.491 ms</td><td valign="top">2.995 ms</td><td valign="top">684 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">18.337 ms</td><td valign="top">2.87 ms</td><td valign="top">684 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>17.99 ms</b></td><td><b>3.33 ms</b></td><td><b>652 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">4.434 ms</td><td valign="top">2.557 ms</td><td valign="top">92 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.775 ms</td><td valign="top">3.32 ms</td><td valign="top">60 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">4.835 ms</td><td valign="top">2.846 ms</td><td valign="top">60 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.68 ms</b></td><td><b>2.91 ms</b></td><td><b>70.67 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">4.333 ms</td><td valign="top">2.224 ms</td><td valign="top">852 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.056 ms</td><td valign="top">3.976 ms</td><td valign="top">664 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">5.13 ms</td><td valign="top">3.43 ms</td><td valign="top">996 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.51 ms</b></td><td><b>3.21 ms</b></td><td><b>837.33 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">65.759 ms</td><td valign="top">9.167 ms</td><td valign="top">1896 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">60.355 ms</td><td valign="top">7.758 ms</td><td valign="top">1492 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">62.82 ms</td><td valign="top">8.555 ms</td><td valign="top">1632 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>62.98 ms</b></td><td><b>8.49 ms</b></td><td><b>1673.33 KB</b></td></tr>
</table>

**Гистограмма:** 
![Гистограмма](https://github.com/user-attachments/assets/38585e17-3fcd-483e-9cda-1b63c5936b41)

**Вывод:** RapidJSON продемонстрировала самое быстрое время чтения 4.68 мс и минимальное использование оперативной памяти 71 КБ, Boost.JSON быстее всего записывает JSON-формат  

## Файлы объемом 1 МБ
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">40.374 ms</td><td valign="top">16.017 ms</td><td valign="top">1688 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">37.127 ms</td><td valign="top">17.153 ms</td><td valign="top">1648 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">38.08 ms</td><td valign="top">16.54 ms</td><td valign="top">2152 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>38.53 ms</b></td><td><b>16.57 ms</b></td><td><b>1829.33 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">112.243 ms</td><td valign="top">24.408 ms</td><td valign="top">3652 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">131.454 ms</td><td valign="top">19.31 ms</td><td valign="top">3476 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">119.581 ms</td><td valign="top">21.985 ms</td><td valign="top">3496 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>121.09 ms</b></td><td><b>21.9 ms</b></td><td><b>3541.33 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">26.355 ms</td><td valign="top">24.518 ms</td><td valign="top">540 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">34.542 ms</td><td valign="top">19.89 ms</td><td valign="top">508 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">27.495 ms</td><td valign="top">25.031 ms</td><td valign="top">508 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>29.46 ms</b></td><td><b>23.15 ms</b></td><td><b>518.67 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">19.296 ms</td><td valign="top">17.557 ms</td><td valign="top">5112 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">23.998 ms</td><td valign="top">16.495 ms</td><td valign="top">5480 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">19.846 ms</td><td valign="top">15.854 ms</td><td valign="top">5236 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>21.05 ms</b></td><td><b>16.64 ms</b></td><td><b>5276 KB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">457.976 ms</td><td valign="top">50.697 ms</td><td valign="top">10232 KB</td></tr>
<tr><td valign="top">2</td><td valign="top">493.723 ms</td><td valign="top">54.366 ms</td><td valign="top">10800 KB</td></tr>
<tr><td valign="top">3</td><td valign="top">436.042 ms</td><td valign="top">46.675 ms</td><td valign="top">10316 KB</td></tr>
<tr><td valign="top">Среднее</td><td><b>462.58 ms</b></td><td><b>50.58 ms</b></td><td><b>10449.33 KB</b></td></tr>
</table>

**Гистограмма:** 
![Гистограмма2](https://github.com/user-attachments/assets/257a2be5-af2c-4e58-97a5-0eebf2886958)

**Вывод:** JsonCpp показала лучшее среднее время чтения — 21.05 мс, RapidJSON заняла первое место по экономии памяти 519 КБ, Boost.JSON продемонстрировала хорошие результаты в категории: время записи — 16.57 мс
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

**Гистограмма:** 
![Гистограмма3](https://github.com/user-attachments/assets/e0263c27-a33c-42bb-ba1b-5ee23427eb83)


**Вывод:** RapidJSON осталась самой экономичной по оперативной памяти — 12 МБ, JsonCpp заняла первое место по скорости чтения 268.84 мс, Boost.JSON остается первым среди записи JSON-файлов
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

**Гистограмма:** 
![Гистограмма4](https://github.com/user-attachments/assets/7f58381a-af90-4775-a534-f00a0365b666)

**Вывод:** JsonCpp показала лучшее среднее время чтения — 2.71 секунды, RapidJSON использовала всего 110 МБ оперативной памяти, Boost.JSON оказалась на первом месте среди записи 1.57 секунд
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

**Гистограмма:** 
![Гистограмма5](https://github.com/user-attachments/assets/1447cfac-7a90-4a80-be29-6390bbbcab58)

**Вывод:** JsonCpp показала самое быстрое среднее время чтения — 17.04 с,RapidJSON продемонстрировала хорошую экономию памяти — в среднем 558.67 МБ, Boost.JSON справилась с задачей за 25.98 с на чтение и 12.25 с на запись.

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

**Гистограмма:** 
![Гистограмма6](https://github.com/user-attachments/assets/ba460daf-6b28-4c36-bb8f-7866087da81d)

**Вывод:** JsonCpp снова продемонстрировала лучшее среднее время чтения — 28.6 секунды, RapidJSON показала отличные результаты: чтение — 34.95 секунды, запись — 23.36 секунды, а использование оперативной памяти — в среднем менее 1 ГБ, что делает её наиболее сбалансированной среди всех протестированных библиотек. Boost.JSON выдала среднее время чтения — 43.81 секунды и время записи — 17.01 секунды, потребляя при этом около 1.9 ГБ памяти. 
## Много маленьких файлов (размер 1 файла ~238КБ, элементов 474,  общий вес ~111 МБ)
Тестирование:
<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время чтения</th><th valign="top">Время записи</th><th valign="top">Приблиз. использование памяти (RAM)</th></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.JSON</b></p></td><td valign="top">1</td><td valign="top">5.47369 s</td><td valign="top">2.66735 s</td><td valign="top">346 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">5.43559 s</td><td valign="top">2.27795 s</td><td valign="top">345 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">5.42531 s</td><td valign="top">2.40959 s</td><td valign="top">344 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>5.44 s</b></td><td><b>2.45 s</b></td><td><b>345 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>nlohmann/json</b></p></td><td valign="top">1</td><td valign="top">17.1532 s</td><td valign="top">3.74216 s</td><td valign="top">695 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">17.4249 s</td><td valign="top">3.76482 s</td><td valign="top">693 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">17.2868 s</td><td valign="top">3.76755 s</td><td valign="top">695 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>17.29 s</b></td><td><b>3.76 s</b></td><td><b>694.33 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>RapidJSON</b></p></td><td valign="top">1</td><td valign="top">4.33146 s</td><td valign="top">3.33572 s</td><td valign="top">76 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">4.29226 s</td><td valign="top">3.32748 s</td><td valign="top">72 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">4.29556 s</td><td valign="top">3.27255 s</td><td valign="top">193 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>4.31 s</b></td><td><b>3.31 s</b></td><td><b>113.67 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>JsonCpp</b></p></td><td valign="top">1</td><td valign="top">3.69359 s</td><td valign="top">2.6281 s</td><td valign="top">735 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">3.69702 s</td><td valign="top">2.69284 s</td><td valign="top">708 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">3.56635 s</td><td valign="top">2.73653 s</td><td valign="top">678 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>3.65 s</b></td><td><b>2.69 s</b></td><td><b>707 МB</b></td></tr>
<tr><td rowspan="4" valign="top"><p></p><p><b>Boost.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">65.6019 s</td><td valign="top">8.00069 s</td><td valign="top">1476 МB</td></tr>
<tr><td valign="top">2</td><td valign="top">66.6822 s</td><td valign="top">8.04298 s</td><td valign="top">1678 МB</td></tr>
<tr><td valign="top">3</td><td valign="top">65.7737 s</td><td valign="top">7.86118 s</td><td valign="top">1308 МB</td></tr>
<tr><td valign="top">Среднее</td><td><b>66.02 s</b></td><td><b>7.97 s</b></td><td><b>1487.33 МB</b></td></tr>
</table>

**Гистограмма:** 
![Гистограмма7](https://github.com/user-attachments/assets/fa32b31e-90da-47ab-b776-0e3b005d47b7)

**Вывод:** JsonCpp показала лучшее среднее время чтения — 3.65 с, RapidJSON занимает первое место среди экономии потребления RAW памяти, Boost.JSON показала устойчивые результаты: время чтения — 5.44 с, время записи — 2.45 с, и умеренное использование памяти — 345 МБ.


## Тест на построчное чтение/запись
Тестирование:

<table><tr><th valign="top">Библиотека</th><th valign="top">Попытка</th><th valign="top">Время построчной записи в библиотеку (ДЛЯ ФАЙЛА input.json)</th><th valign="top">Время построчного чтение в библиотеку (ДЛЯ ФАЙЛА input.json)</th></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>Boot.JON</b></p></td><td valign="top">1</td><td valign="top">14.356 s</td><td valign="top">44.2913 s</td></tr>
<tr><td valign="top">2</td><td valign="top">15.82 s</td><td valign="top">44.2063 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>15.09</b> s</td><td><b>44.25</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>nlohmann/jon</b></p></td><td valign="top">1</td><td valign="top">34.9701 s</td><td valign="top">412.203 s</td></tr>
<tr><td valign="top">2</td><td valign="top">33.2896 s</td><td valign="top">412.168 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>34.13</b> s</td><td><b>412.19</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>RapidJON</b></p></td><td valign="top">1</td><td valign="top">9.21524 s</td><td valign="top">161.161 s</td></tr>
<tr><td valign="top">2</td><td valign="top">6.74549 s</td><td valign="top">160.572 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>7.98</b> s</td><td><b>160.87</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>JonCpp</b></p></td><td valign="top">1</td><td valign="top">17.9176 s</td><td valign="top">31.8024 s</td></tr>
<tr><td valign="top">2</td><td valign="top">13.5229 s</td><td valign="top">30.7965 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>15.72</b> s</td><td><b>31.3</b> s</td></tr>
<tr><td rowspan="3" valign="top"><p></p><p><b>Boot.PropertyTree</b></p></td><td valign="top">1</td><td valign="top">76.4056 s</td><td valign="top">976.946 s</td></tr>
<tr><td valign="top">2</td><td valign="top">91.6617 s</td><td valign="top">1120.77 s</td></tr>
<tr><td valign="top">Среднее</td><td><b>84.03</b> s</td><td><b>1048.86</b> s</td></tr>
</table>

**Гистограмма:**

![Гистограмма9](https://github.com/user-attachments/assets/78bb7c47-7d67-4e8e-abd5-81e3cb83f424)


**Вывод:** Boost.JSON и JsonCpp показали лучшие результаты по балансу между скоростью записи и чтения. RapidJSON лидирует по скорости записи, но проигрывает Boost.JSON в чтении.
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
![график чтения](https://github.com/user-attachments/assets/ccb9fd1b-b665-4f6b-bd6c-367a2113696d)


Динамика изменение скороти записи
![график записи](https://github.com/user-attachments/assets/52d36c0e-ffdc-4a96-a6ac-71296b46cef9)


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
![демонстрация3](https://github.com/user-attachments/assets/bd45af0a-943c-4b36-9751-e514e14d7025)

![демонстрация4](https://github.com/user-attachments/assets/44dfd041-a8cd-48d9-a486-9637a8958c80)
