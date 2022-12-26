#include<iostream>
#include<cmath>
#include<complex/complex.hpp>

struct pendulum {
    const double dt = 0.1;
    double k = 6.0;
    double mu = 25.0;
    Rdec2d r_balance = { 3.0,0.0 }, r = { 8.0,0.0 }, v = { 6.0, 0.0 }, f = { 0.0, 0.0 }, a = { 0.0, 0.0 };
    double t = 0.0;
};

void move(pendulum& model) {
    pendulum mod = model;
    model.t += mod.dt;
    model.r = model.r + mod.v * mod.dt;
    model.v = model.v + mod.a * mod.dt;
    model.a = mod.f;
    model.f = (mod.r_balance - mod.r) * mod.k - mod.v / norm(mod.v) * mod.mu;
    std::cout << model.t << " " << model.r.x << " " << model.r.y << " " << model.f << std::endl;
}

void out(pendulum model) {
    std::cout << "td x y  " << std::endl;
    while (model.t <= 500) {
        for (int i = 0; i < 15; i+=1) {
            move(model);
        }
    }
}

int main() {
    pendulum model;
    out(model);
}