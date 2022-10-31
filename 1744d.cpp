#include<iostream>
#include<vector>

int func(int n) {
    int ans = 0;
    while (!(n & 1)) {
        n /= 2;
        ++ans;
    }
    return ans;
}

void f() {
    int n = 0;
    int k = 0;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        int num = 0;
        std::cin >> num;
        k += func(num);
    }
    if (k >= n) {
        std::cout << 0 << std::endl;
    }
    else {
        int ind = 0;
        int e = 0;
        int s = 1;
        for (int i = 0; i < n; i += 1) {
            if (s * 2 > n) {
                break;
            }
            s *= 2;
        }
        while (s > 1) {
            for (int i = s; i <= n; i += s) {
                if ((i / s) % 2 == 0) {
                    continue;
                }
                int number = func(i);
                if (number > 0) {
                    e += 1;
                }
                ind += func(i);
                if (k + ind >= n) {
                    std::cout << e << std::endl;
                    return;
                }
            }
            s /= 2;
        }

        std::cout << -1 << '\n';
    }
}
int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        f();
    }

}