#include <iostream>

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

int main() {
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    std::cout << binary_search(a, 20, 5) << std::endl;
    std::cout << binary_search(a, 20, 1) << std::endl;
    std::cout << binary_search(a, 20, 33) << std::endl;
    std::cout << binary_search(a, 20, 20) << std::endl;
    std::cout << binary_search(a, 19, 17) << std::endl;
    return 0;
}