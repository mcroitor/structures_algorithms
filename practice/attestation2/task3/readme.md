# деление пополам.

Даны две последовательности натуральных чисел __A__ и __B__ и максимальное число итераций __K__. Над этими последовательностями выполняются следуюшие операции:

 1. Из последовательности _A_ извлекается число _T_ с первой позиции (при этом первый элемент последовательности удаляется).
 2. Вычисляется сумма всех элементов последовательностей _A_ (S<sub>a</sub>) и _B_ (S<sub>b</sub>).
 3. Если S<sub>a</sub> > S<sub>b</sub>, то в конец последовательности _B_ добавляется число _T_, иначе это число добавляется в конец последовательности _B_.
 4. Из последовательности _B_ извлекается число _T_ с первой позиции (при этом первый элемент последовательности удаляется).
 5. Вычисляется сумма всех элементов последовательностей _A_ (S<sub>a</sub>) и _B_ (S<sub>b</sub>).
 6. Если S<sub>a</sub> > S<sub>b</sub>, то в конец последовательности _B_ добавляется число _T_, иначе это число добавляется в конец последовательности _B_.
 7. Шаги 1-6 повторяются до тех пор, пока суммы всех элементов последовательностей _A_ и _B_ не станут равны между собой, но не более _K_ раз.

Выведите последовательности _A_ и _B_ после завершения вычислений.

## Входные данные

Первая линия входных данных содержит целое число _M_ - размер последовательности _A_.
Вторая линия содержит _M_ целых чисел - последовательность _A_.
Третья линия содержит целое число _N_ - размер последовательности _B_.
Четвёртая линия содержит _N_ целых чисел - последовательность _B_.
Последняя линия входных данных содержит целое число _K_ - максимальное число итераций.

## Выходные данные

Первая линия выходных данных должна содержать разделённые пробелом элементы новой последовательности _A_, полученной в результате выполнения алгоритма.
Первая линия выходных данных должна содержать разделённые пробелом элементы новой последовательности _B_, полученной в результате выполнения алгоритма.

## Пример

| INPUT | OUTPUT |
| ------| :----: |
| 5<br />9 3 2 6 5<br />3<br />1 2 3<br />10 |  |