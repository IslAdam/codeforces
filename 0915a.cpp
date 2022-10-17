#include<iostream>
#include<vector>
#include<cmath>

int main() {
    int n, k, v = 0;
    int m = 10000;
    std::cin >> n >> k;
    std::vector<int> a;
    for (int i = 0; i < n; i += 1) {
        std::cin >> v;
        a.push_back(v);
    }
    for (int i = 0; i < n; i += 1) {
        if (k % a[i] == 0) {
            m = std::min(m, k / a[i]);
        }
    }
    std::cout << m << std::endl;

}