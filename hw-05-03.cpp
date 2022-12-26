#include<iostream>
#include<queue>
#include<cmath>


int fact(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
double s(double x) {
    double e = pow(10, -4);
    double sum = 0.0;
    double el = 0;
    for (int i = 0; i < 10000000000; i += 1) {
        el = pow(2*x, i) / fact(i);
        if (abs(el) < e) {
            sum += el;
            //std::cout << "red" << '\n';
            return sum;
        }
        else {
            sum += el;
            //std::cout << 'p' << '\n';
        }
    }
}
double f(double x) {
    return exp(2 * x);
}

int main() {
    double a = 0.0;
    double b = 1.0;
    double q = 0.1;

    for (double x = a; x <= b; x += 0.1) {
        std::cout << x << ' ' << s(x) << ' ' << f(x) << '\n';
    }
    
}

