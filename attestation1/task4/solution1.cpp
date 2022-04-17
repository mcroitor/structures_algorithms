#include <iostream>
#include <vector>
#include <cmath>

// input: n1 - number of elements in the first array
//        a  - first array
//        n2 - number of elements in the second array
//        b  - second array
//        k  - test number
// output: a_i / b_i is equal to k (eps = 0.001)
//         a_i is minimal satisfied element

const double eps = 0.001;

float distance(float a, float b, float k) {
    return fabs(k - (a / b));
}

// bad solution: complexity O(n^2)
int main() {
    int n1, n2;
    float k;
    std::vector<int> a, b;

    // read vector a
    std::cin >> n1;
    a.resize(n1);
    for (int i = 0; i < n1; ++i) {
        scanf("%d", &a[i]);
    }

    // read vector b
    std::cin >> n2;
    b.resize(n2);
    for (int i = 0; i < n2; ++i) {
        scanf("%d", &b[i]); 
    }

    // read k
    std::cin >> k;
    
    // set indices of minimal elements = -1, because we don't know them yet
    int min_a_index = -1;
    int min_b_index = -1;
    for(int i = 0; i < n1; ++i) {
        for(int j = 0; j < n2; ++j) {
            double dist = distance(a[i], b[j], k);
            if(fabs(dist) <= eps) {
                if(min_a_index == -1 || a[i] < a[min_a_index]) {
                    min_a_index = i;
                    min_b_index = j;
                }
            }
        }
    }

    if(min_a_index == -1) {
        std::cout << "no solution" << std::endl;
    } else {
        std::cout << a[min_a_index] << " " << b[min_b_index] << std::endl;
    }
    return 0;
}