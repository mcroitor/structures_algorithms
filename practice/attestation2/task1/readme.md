# постфиксное выражение

Любое арифметическое выражение может быть представлено в постфиксной форме, в которой сначала идут операнды (числа), после указывается операция. Например:

 + `12 43 +` эквивалентно `43 + 12`
 + `5 6 + 3 *` эквивалентно `(6 + 5) * 3`

## Входные данные

Первая линия входных данных арифметическое выражение в постфиксной форме, элементы выражения разделены пробелом. Допустимые операции: +, -, *, /, операнды являются целыми числами.

## Выходные данные

Число, представляющее собой результат вычисления арифметического выражения. Результат выводить с округлением до 5 знака после запятой.

## Пример

| INPUT | OUTPUT |
| ------| :----: |
| 2 1 + | 3 |
| 1 2 - | -1 |
| 2 2 + 4 * | 16 |
| 1 2 3 4 5 4 + + + + + 6 / | 3.16667 |

## Рекомендации по решению

Удобнее всего воспользоваться стеком. В этом случае алгоритм вычислений будет следующим:

 1. Создать пустой стек.
 2. Считать элемент из входного потока.
 3. Если это число, то положить его в стек.
 4. Если это операция, то 
    1. извлечь элемент а из стека
    2. извлечь элемент b из стека
    3. выполнить операцию `b <op> a`
    4. положить результат в стек.
 5. Повторять шаги 2-4 до тех пор, пока входной поток не закончится.