#include <iostream>


int main() {
    int t = 1;
    while (t--) {


        int n = 0;
        std::cin >> n;
        int k = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                k += 1;
            }
            n /= 2;
        }
        std::cout << k;

    }
}


