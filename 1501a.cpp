#include<iostream>
#include<vector>

int main() {
    int t, n, v1, v2 = 0;
    std::vector<int>a;
    std::vector<int>b;
    std::vector<int>tm;
    int time = 0;
    int x = 0;
    //std::cin >> t;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::cin >> v1 >> v2;
        a.push_back(v1);
        b.push_back(v2);
    }
    for (int i = 0; i < n; i += 1) {
        std::cin >> v1;
        tm.push_back(v1);
    }
    for (int i = 0; i < n; i += 1) {
        std::cout << a[i] << " " << b[i];
    }
    for (int i = 0; i < n; i += 1) {
        time += (a[i] - x + tm[i]);
        int pause = (b[i] - a[i]) / 2;
        if (i < n - 1) {

            time += pause;
        }
        if (time < b[i] && i < n - 1) {
            pause = b[i];
        }
        x = b[i];
    }
    std::cout << time << '\n';
    


}