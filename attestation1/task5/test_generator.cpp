#include <iostream>
#include <random>
#include <chrono>
#include <vector>
#include <algorithm>

int seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "usage: " << argv[0] << " <array_size>" << std::endl;
        return 1;
    }

    int n = atoi(argv[1]);

    std::vector<int> v(n, 0);
    std::generate(v.begin(), v.end(), [n]() { return generator() % n; });
    // echo vector
    std::cout << v.size() << std::endl;
    for (auto a : v)
    {
        std::cout << a << " ";
    }
    std::cout<< std::endl << generator() % n + 1 << std::endl;
    return 0;
}
