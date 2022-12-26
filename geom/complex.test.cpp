#include<iostream>
#include<complex/complex.hpp>



int main() {
    Rdec2d rm{ 1, 2 };
    Rdec2d aaa{ 1, 2 };
    Rdec2d bbb{ 1, 2 };
    Rdec2d rc{ 2, 3 };
    Rdec2d vm{ 5, 4 };
    Rdec2d vg{ 5, 4 };
    Rdec2d vc{ 1, 1 };
    Rpol2d xz{ 6.40312, 0.674741 };
    Rpol2d xc{ 6.40312, 0.674741 };
    auto x = norm(rm);
    auto y = dot(rc, vm);
    auto c = vc * 6;
    auto s = ToPol(vm);
    auto u = ToDec(s);
    auto xy = u + c;
    auto re = vm == vg;
    auto pr = xc == xz;
    std::cout << s << '\n';
    std::cout << u << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << -c << '\n';
    std::cout << xy << '\n';
    std::cout << re << '\n';
    std::cout << pr << '\n';
}