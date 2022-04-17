#include <iostream>
#include <vector>
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

float distance(float a, float b, float k)
{
    return k - (a / b);
}

// solution: complexity O(n*log(n)) because of sorting
int main()
{
    int n1, n2;
    float k;
    std::vector<int> a, b;
    std::cin >> n1;
    a.resize(n1);
    for (int i = 0; i < n1; ++i)
    {
        scanf("%d", &a[i]);
    }
    std::cin >> n2;
    b.resize(n2);
    for (int i = 0; i < n2; ++i)
    {
        scanf("%d", &b[i]);
    }

    std::cin >> k;

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        float dist = distance(a[i], b[j], k);
        if (fabs(dist) <= eps)
        {
            std::cout << a[i] << " " << b[j] << std::endl;
            return 0;
        }
        (dist > 0) ? ++i : ++j;
    }
    std::cout << "no solution" << std::endl;
    return 0;
}