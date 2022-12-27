#include<iostream>
#include<vector>

int main() {
    int h = 0;
    int w = 0;
    int cw = 0;

    std::cout << "h: ";
    std::cin >> h;
    std::cout << "w: ";
    std::cin >> w;
    std::vector<std::vector<int> > a(h, std::vector<int>(w));
    std::cout << "0 - cws, 1 - cwc: ";
    std::cin >> cw;
    //int d = 0;
    int x = 0;
    if (cw == 0) {
        for (int i = h - 1; i >= 0; i -= 1) {
            for (int j = w - 1; j >= 0; j -= 1) {
                a[i][j] = x + 1;
                x += 1;
            }
            /*if (j = w - 1) {
                j = 0;
                d = w 

            }*/
        }

    }
    else {
        for (int j = w - 1; j >= 0; j -= 1) {
            for (int i = h - 1; i >= 0; i -= 1) {
                a[i][j] = x + 1;
                x += 1;
            }
        }
    }
    for (int i = 0; i < h; i += 1) {
        for (int j = 0; j < w; j += 1) {
            std::cout << a[i][j] << ' ';
        }
        std::cout << '\n';
    }

}