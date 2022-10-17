#include <iostream>
#include<vector>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n, v, s = 0;
        std::vector<int> a;
        std::cin >> n;
        for (int i = 0; i < n; i += 1) {
            std::cin >> v;
            a.push_back(v);
        }
        for (int i = 1; i < n; i += 1) {
            if (a[i - 1] == 1 && a[i] == 0) {
                s += 2;
            }
            if (a[i - 1] == 0 && a[i] == 0) {
                s += 1;
            }
        }
        std::cout << s << std::endl;
    }
}