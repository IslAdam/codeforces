#include<iostream>
#include<queue>

int main() {
    int v = 0;
    long long n, k = 0;
    std::cin >> n >> k;
    std::queue <int> a;
    int p = 0;
    for (int i = 0; i < n; i += 1) {
        std::cin >> v;
        a.push(v);
    }
    int count = 0;
    p = a.front();
    a.pop();
    while (count < k) {
        int w = a.front();
        a.pop();
        if (p > w) {
            a.push(w);
            count += 1;
        }
        if (p <= w) {
            a.push(p);
            p = w;
            count = 1;
        }
        if (count > n + 1) {
            break;
        }
    }
    std::cout << p;
}