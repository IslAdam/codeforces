#include<iostream>
#include<vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n, v, s = 1;
        std::vector<int>a;
        std::cin >> n;
        for (int i = 0; i < n; i += 1) {
            std::cin >> v;
            a.push_back(v);
        }
        for (int i = 1; i < n; i += 1) {
            if (a[i] == 0 && a[i - 1] == 0) {
                s = -1;
                break;
            }
            if (a[i] == a[i - 1]) {
                s += 5;
            }
            if ((a[i] == 1 && a[i - 1] == 0) || (a[i] == 0 && a[i - 1] == 1)) {
                s += 1;
            }
            
        }
        if (n == 1) {
            if (a[0] == 1) {
                s = 2;
            }
        }
        std::cout << s << std::endl;
    }
}