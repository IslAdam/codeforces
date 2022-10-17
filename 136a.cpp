#include<iostream>
#include<vector>

int main() {
    int n, pi = 0;
    std::vector<int> a(101);
    std::cin >> n;
    for (int i = 1; i <= n; i += 1) {
        std::cin >> pi;
        a[pi] = i;
    }
    for (int i = 1; i <= n; i += 1) {
        std::cout << a[i] << " ";
    }
}