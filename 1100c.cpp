#include <iostream>;
#include <cmath>
int main() {
    int n, r = 0;
    std::cin >> n >> r;
    std::cout.precision(15);
    std::cout << (r * sin(atan(1) * 4 / n) / (1 - sin(atan(1) * 4 / n)));

}