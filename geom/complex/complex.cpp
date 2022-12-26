#include<iostream>
#include "complex.hpp"
#include<cmath>
#include<limits>


Rdec2d operator+=(Rdec2d& lhs, const Rdec2d& rhs) {
    Rdec2d res = { 0, 0 };
    res = { lhs.x + rhs.x , lhs.y + rhs.y };
    return res;
}
Rdec2d operator+(const Rdec2d& lhs, const Rdec2d& rhs) {
    Rdec2d res = { 0,0 };
    res = { lhs.x + rhs.x , lhs.y + rhs.y };
    return res;
}
Rdec2d operator-(const Rdec2d& lhs, const Rdec2d& rhs) {
    Rdec2d res = { 0,0 };
    res = { lhs.x - rhs.x , lhs.y - rhs.y };
    return res;
}
Rdec2d operator-(const Rdec2d& p) {
    Rdec2d res = { 0,0 };
    res = { -p.x,-p.y };
    return res;
}
Rdec2d operator*(const Rdec2d& p, const double m) {
    Rdec2d res = { 0,0 };
    res = { p.x * m, p.y * m };
    return res;
}
Rdec2d operator/(const Rdec2d& p, double m) {
    Rdec2d res = { 0,0 };
    res = { p.x / m, p.y / m };
    return res;
}

bool operator==(const Rdec2d& lhs, const Rdec2d& rhs) {
    return ((std::abs(lhs.x - rhs.x) < kEps) && (std::abs(lhs.y - rhs.y) < kEps));
}
bool operator==(const Rpol2d& lhs, const Rpol2d& rhs) {
    return ((std::abs(lhs.z - rhs.z) < kEps) && (std::abs(lhs.z - rhs.ph) < kEps));
}


Rpol2d ToPol(const Rdec2d& p) {
    double z = norm(p);
    double ph = atan(p.y / p.x);
    Rpol2d res{ z, ph };
    return res;
}

Rdec2d ToDec(const Rpol2d& p) {
    double x = p.z * cos(p.ph);
    double y = p.z * sin(p.ph);
    Rdec2d res{ x, y };
    return res;
}


std::ostream& operator<<(std::ostream& ostrm, const Rdec2d& p) {
    return ostrm << '(' << p.x << ", " << p.y << ')';
}
std::ostream& operator<<(std::ostream& ostrm, const Rpol2d& p) {
    return ostrm << '(' << p.z << ", " << p.ph << ')';
}

double norm(const Rdec2d& p) {
    double res = 0.0;
    res = sqrt(p.x * p.x + p.y * p.y);
    return res;
}
double dot(const Rdec2d& lhs, const Rdec2d& rhs) {
    double res = 0.0;
    res = lhs.x * rhs.x + lhs.y * rhs.y;
    return res;
}