#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v;
    int size, index;
    std::cin >> size >> index;
    v.resize(size);
    for(int i = 0; i < size; i++){
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());
    std::cout << v[index] << std::endl;
    return 0;
}
