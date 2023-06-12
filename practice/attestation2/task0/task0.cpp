#include <iostream>
#include <string>

// input: natural number N
// output: binary representation of N

int main(){
    int N;
    std::string binary;

    std::cin >> N;
    
    while(N != 0){
        binary = (N % 2 == 0) ? "0" + binary : "1" + binary;
        N /= 2;
    }

    std::cout << binary << std::endl;
    
    return 0;
}