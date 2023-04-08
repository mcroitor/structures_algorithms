#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct line{
    std::string firstname, lastname, phone;
};

std::istream& operator >> (std::istream& in, line& l){
    in >> l.firstname >> l.lastname >> l.phone;
    return in;
}

std::ostream& operator << (std::ostream& out, const line& l){
    out << l.firstname << " " << l.lastname << " " << l.phone;
    return out;
}

int main(){
    int size;
    std::cin >> size;

    std::vector<line> v(size);
    for(int i = 0; i < size; i++){
        std::cin >> v[i];
    }
    std::string phone;
    std::cin >> phone;

    std::sort(v.begin(), v.end(), [](line left, line right){ return left.phone < right.phone; });

    std::cout << size << std::endl;
    for(const line& el: v) {
        std::cout << el << std::endl;
    }
    std::cout << phone;
    return 0;
}