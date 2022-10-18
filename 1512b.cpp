#include<iostream>
#include<vector>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        int f = 0;
        char fi, fj, si, sj;
        std::cin >> n;
        std::vector<std::vector<char> > a(n, std::vector<char>(n));
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < n; j += 1) {
                std::cin >> a[i][j];
                if (a[i][j] == '*') {
                    if (f == 0) {
                        fi = i;
                        fj = j;
                        f = 1;
                    }
                    else {
                        si = i;
                        sj = j;
                    }
                }
            }
        }
        if (fi == si) {
            int x = (1 + fi) % n;
            a[x][fj] = '*';
            a[x][sj] = '*';
        }
        else if (fj == sj) {
            int y = (1 + fj) % n;
            a[fi][y] = '*';
            a[si][y] = '*';
        }

        else {
            a[fi][sj] = '*';
            a[si][fj] = '*';
        }
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < n; j += 1) {
                std::cout << a[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
}
