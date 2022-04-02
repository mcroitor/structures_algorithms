#include <iostream>
#include <cstdio>
#include <algorithm>
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

const int MAX_N = 1'000'000;
int a[MAX_N + 1] = {0};
int b[MAX_N + 1] = {0};

// best solution: complexity O(n), but more memory
int main() {
    int n1, n2;
    float k;
    int x;

    std::cin >> n1;
    for (int i = 1; i <= n1; ++i) {
        scanf("%d", &x);
        a[x] = x;
    }
    std::cin >> n2;
    for (int i = 1; i <= n2; ++i) {
        scanf("%d", &x);
        b[x] = x;
    }

    std::cin >> k;
    for(int i = 1; i <= MAX_N; ++i) {
        if(a[i] == 0) {
            continue;
        }
        int index = round(i / k);
        if(index < MAX_N && b[index] != 0 && distance(i, index, k) < eps) {
            std::cout << i << " " << index << std::endl;
            return 0;
        }
    }

    std::cout << "no solution" << std::endl;
    return 0;
}