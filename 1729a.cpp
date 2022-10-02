#include<iostream>
#include<cmath>


int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int a, b, c, r = 0;
        std::cin >> a >> b >> c;
        if (a != 1) {
            r = abs(a - 1) - (abs(b - c) + abs(c - 1));
            if (r < 0) std::cout << 1 << "\n";
            if (r > 0) std::cout << 2 << "\n";
            if (r == 0) std::cout << 3 << "\n";
        }
        else std::cout << 1 << "\n";
    }
}