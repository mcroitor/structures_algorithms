#include <iostream>
#include <vector>

size_t linear_search(const std::vector<int>& vector, int value) {
    size_t index = 0;
    for(index = 0; index < vector.size(); ++index) {
        if(vector[index] == value) {
            return index;
        }
    }
    return index;
}

int main() {
    std::ios::sync_with_stdio(false);
    size_t size = 0;
    int number = 0;
    size_t index = 0;
    std::vector<int> data;

    std::cin >> size;
    data.resize(size);

    for(index = 0; index < size; ++index) {
        std::cin >> data[index];
    }
    std::cin >> number;

    std::cout << linear_search(data, number);
    return 0;
}