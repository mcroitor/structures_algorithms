#include <iostream>

void write_array(std::ostream& out, int array_size, int max_number){
    out << array_size << std::endl;
    for(int i = 0; i < array_size; ++i){
        out << array_size - i << " ";
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

    int a_size = array_size;
    int b_size = array_size;

    write_array(std::cout, a_size, max_number);
    write_array(std::cout, b_size, max_number);
    std::cout << 0.1;
    return 0;
}