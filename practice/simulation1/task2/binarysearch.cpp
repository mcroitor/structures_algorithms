#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& vector, int value){
    size_t left = 0;
    size_t right = vector.size();
    while(left < right) {
        size_t middle = (left + right) / 2;
        if(vector[middle] == value) {
            return middle;
        }
        if(vector[middle] < value) {
            left = middle + 1;
        }
        else {
            right = middle;
        }
    }
    return vector.size();
}

int main() {
    std::ios::sync_with_stdio(false);
    size_t size;
    std::vector<int> vector;
    size_t index;
    int value;
    std::cin >> size;
    vector.resize(size);

    for(index = 0; index < size; ++index) {
        std::cin >> vector[index];
    }
    std::cin >> value;

    auto result = binary_search(vector, value);

    std::cout << result;
    return 0;
}