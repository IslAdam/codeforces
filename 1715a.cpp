#include<iostream>

int main() {
    int t = 0;
    std::cin >> t;
    int n, m, x = 0;
    for (int i = 0; i < t; i += 1) {
        std::cin >> n >> m;
        if ((n == 1) && (n == m)) {
            std::cout << 0 << std::endl;
        }
        if (m > n) {
            x = n;
        }
        else {
            x = m;
        }
        std::cout << n + m - 2 + x << std::endl;
    }
}