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

    // generate index
    int index = generator() % size;
    int fixedNumber, generatedNumber;

    std::cout << size << std::endl;
    // generate array
    for(int i = 0; i < size; i++){
        generatedNumber = generator() % (2 * size);
        std::cout << generatedNumber << " ";
        if(i == index) {
            fixedNumber = generatedNumber;
        }
    }
    std::cout << std::endl << fixedNumber << std::endl;
    return 0;
}
