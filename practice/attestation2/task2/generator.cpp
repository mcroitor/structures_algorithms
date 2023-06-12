#include <iostream>
#include <random>
#include <chrono>

int main(int argc, char* argv[]){
    if(argc != 2){
        std::cout << "Usage: " << argv[0] << " <size>" << std::endl;
        return 1;
    }

    int size = atoi(argv[1]);
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // generate value
    int value = generator() % size;
    // generate number of iterations
    int iterations = generator() % size;

    std::cout << size << std::endl;
    // generate array
    for(int i = 0; i < size; i++){
        std::cout << rand() % size << " ";
    }
    std::cout << std::endl << value << " " << iterations << std::endl;
    return 0;
}
