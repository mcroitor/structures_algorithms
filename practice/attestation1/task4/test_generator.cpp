#include <iostream>
#include <random>
#include <chrono>

int seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);
const float eps = 0.001;

void write_array(std::ostream& out, int array_size, int max_number){
    out << array_size << std::endl;
    for(int i = 0; i < array_size; ++i){
        out << (generator() % max_number + 1) << " ";
    }
    out << std::endl;
}

int main(int argc, char** argv){
    if (argc != 3){
        std::cout << "usage: " << argv[0] << " <array_size> <max_number>" << std::endl;
        return 1;
    }

    int array_size = atoi(argv[1]);
    int max_number = atoi(argv[2]);

    int a_size = generator() % array_size + 1;
    int b_size = generator() % array_size + 1;

    write_array(std::cout, a_size, max_number);
    write_array(std::cout, b_size, max_number);
    std::cout << (generator() % max_number) * eps;
    return 0;
}