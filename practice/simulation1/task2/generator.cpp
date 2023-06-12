#include <iostream>
#include <random>
#include <chrono>

const int DELTA = 5;

int main(int argc, char* argv[]){
    if(argc != 2){
        std::cout << "Usage: " << argv[0] << " <size>" << std::endl;
        return 1;
    }

    int size = atoi(argv[1]);
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    int number = 0;

    std::cout << size << std::endl;
    // generate array
    for(int i = 0; i < size; i++){
        number += generator() % DELTA;
        std::cout << number << " ";
    }

    std::cout << std::endl << generator() % 5000000 << std::endl;
    return 0;
}
