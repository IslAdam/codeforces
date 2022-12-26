#include<iosfwd>

struct Rdec2d {
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2d {
    double z = 0.0;
    double ph = 0.0;
};

const double kEps = std::numeric_limits<double>::epsilon() * 2;

Rdec2d operator+=(Rdec2d& lhs, const Rdec2d& rhs);
Rdec2d operator+(const Rdec2d& lhs, const Rdec2d& rhs);
Rdec2d operator-(const Rdec2d& lhs, const Rdec2d& rhs);
Rdec2d operator-(const Rdec2d& p);
Rdec2d operator*(const Rdec2d& p, const double m);
Rdec2d operator/(const Rdec2d& p, double m);

bool operator==(const Rdec2d& lhs, const Rdec2d& rhs);
bool operator==(const Rpol2d& lhs, const Rpol2d& rhs);

Rpol2d ToPol(const Rdec2d& p);
Rdec2d ToDec(const Rpol2d& p);

double norm(const Rdec2d& p);
double dot(const Rdec2d& lhs, const Rdec2d& rhs);

std::ostream& operator<<(std::ostream& ostrm, const Rdec2d& p);
std::ostream& operator<<(std::ostream& ostrm, const Rpol2d& p);