#include<iostream>
#include<vector>
#include<algorithm>
int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i += 1) {
        int v = 0;
        std::cin >> v;
        a.push_back(v);
    }
    std::sort(a.begin(), a.end());
    int k = 0;
    for (int i = 0; i < n; i += 1) {
        if (a[i] >= k + 1) {
            k += 1;
        }
    }
    std::cout << k;
}