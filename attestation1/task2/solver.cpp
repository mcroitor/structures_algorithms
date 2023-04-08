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

    line oops = {"", "", phone};

    auto result = std::lower_bound(v.begin(), v.end(), oops, [](line el, line val){ return el.phone < val.phone; });

    std::cout << *result << std::endl;
    return 0;
}