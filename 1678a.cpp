#include<iostream>
#include<vector>
#include<cmath>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n, v = 0;
        int f = 1;
        int k = 0;
        std::vector<int> a;
        std::cin >> n;
        for (int i = 0; i < n; i += 1) {
            std::cin >> v;
            a.push_back(v);
        }

        while (f == 1) {
            for (int i = 0; i < n; i += 1) {
                if (a[i] != 0) {
                    f = 1;
                    break;
                }
                else {
                    f = 0;
                }
            }
            for (int i = 1; i < n; i += 1) {
                if (a[i] == a[i - 1] && a[i] + a[i - 1] != 0) {
                    a[i] = 0;
                    k += 1;
                }
            }

            for (int i = 1; i < n; i += 1) {
                if (a[i] != a[i - 1]) {
                    a[i] = std::min(a[i], a[i - 1]);
                    a[i - 1] = std::min(a[i], a[i - 1]);
                    k += 1;
                }
            }
        }
        std::cout << k - 1 << std::endl;
    }
}