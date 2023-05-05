#include <iostream>
#include <string>

// input: natural number N, base M
// output: M-base representation of N

int main(){
    int N, base;
    std::string result;

    std::cin >> N >> base;
    
    while(N != 0){
        result = std::to_string(N % base) + result;
        N /= base;
    }

    std::cout << result << std::endl;
    
    return 0;
}