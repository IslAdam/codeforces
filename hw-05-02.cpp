#include<iostream>
#include<cmath>



double s(double x) {
    double pi = acos(-1.0);
    double e = pow(10, -3);
    double sum = 0.0;
    double el = 0;
    for (int i = 1; i < 100000000; i += 1) {
        el = pow(x, i) * sin(i * pi / 4);
        if (abs(el) < e) {
            sum += el;
            return sum;
        }
        else {
            sum += el;
        }
    }
}
double f(double x) {
    double pi = acos(-1.0);
    return x*sin(pi/4)/(1-2*x*cos(pi/4));
}

int main() {
    double a = 0.0;
    double b = 1.0;
    double q = 0.05;

    for (double x = a; x <= b; x += 0.05) {
        std::cout << x << ' ' << s(x) << ' ' << f(x) << '\n';
    }
}