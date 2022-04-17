#include <iostream>
#include <random>
#include <chrono>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <size>" << std::endl;
        return 1;
    }

    int size = atoi(argv[1]);
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // generate value
    int value = generator() % size;

    std::cout << size << std::endl;
    // generate array
    for (int i = 0; i < size; i++)
    {
        std::cout << "ADD " << generator() % size << std::endl;
    }
    return 0;
}
