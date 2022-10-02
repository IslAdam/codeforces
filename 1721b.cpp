#include<iostream>
#include<cmath>
bool isDes(
    const int iRow, const int iCol,
    const int sx, const int sy, const int d) {
    return std::abs(iRow - sx) + std::abs(iCol - sy) <= d;
    }
int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n, m, sx, sy, d = 0;
        std::cin >> n >> m >> sx >> sy >> d;
        bool canget = !isDes(n, m, sx, sy, d);
        bool hasPath = !isDes(1, sy, sx, sy, d) && !isDes(sx, m, sx, sy, d);
        hasPath = hasPath || !isDes(sx, 1, sx, sy, d) && !isDes(n, sy, sx, sy, d);
        canget = canget && hasPath;
        std::cout << (canget ? n + m - 2 : -1) << std::endl;
    }
}