# двоичный поиск

_Двоичный поиск_, известный также как _бинарный поиск_, классический алгоритм поиска элемента в отсортированном массиве (векторе), использующий дробление массива на половины. Является адаптацией _метода деления отрезка пополам_[^1]

Двоичный поиск можно применять только на отсортированной линейной структуре данных.

![binary search](images/binary_search.png)

```cpp
template<typename Type>
size_t binary_search(Type* array, size_t size, Type value) {
    size_t left = 0;
    size_t right = size;
    while(left +1 <= right) {
        size_t middle = (left + right) / 2;
        if(array[middle] == value) {
            return middle;
        }
        if(array[middle] < value) {
            left = middle + 1;
        }
        else {
            right = middle;
        }
    }
    return size;
}
```

[^1]: [WIKI Метод деления отрезка пополам](https://ru.wikipedia.org/wiki/Метод_бисекции)