#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v;
    int size, index;
    scanf("%d %d", &size, &index);
    v.resize(size);
    for(int i = 0; i < size; i++){
        scanf("%d", &v[i]);
    }

    std::sort(v.begin(), v.end());
    printf("%d", v[index]);
    return 0;
}
