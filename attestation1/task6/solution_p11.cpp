#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);

    int n, k;
    std::cin >> n;
    std::vector<long long> a(n);

    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cin >> k;

    long long sum = 0;
    for(int i = 0; i < k; ++i) {
        sum += a[i];
    }
    
    long long acc = sum;

    for(int i = 0; i < n - k + 1; ++i) {
        acc = acc - a[i] + a[i + k];
        if (sum > acc) {
            sum = acc;
        }
    }
    std::cout << sum;
    return 0;
}