# сортировка вставками

Сортировка вставками (англ. Insertion sort) — алгоритм сортировки, в котором элементы входной последовательности просматриваются по одному, и каждый новый поступивший элемент размещается в подходящее место среди ранее упорядоченных элементов. Вычислительная сложность — _$O(n^2)$_.

```cpp
template<typename Type>
void insertion_sort(Type * array, size_t size) {
    for(size_t i = 2; i <= size; ++i) {
        Type value = array[i];
        size_t j = i;
        for(; array[j] > value && j > 1; --j){
            array[j] = array[j - 1];
        }
        array[j] = value;
    }
}
```
