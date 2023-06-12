#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);

    int n, k;
    std::cin >> n;
    std::vector<long long> a(n);

    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());

    std::cin >> k;

    long long sum = std::accumulate(a.begin(), a.begin() + k, 0l);

    std::cout << sum;
    return 0;
}
