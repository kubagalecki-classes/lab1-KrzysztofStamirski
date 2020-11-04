#include <iostream>
#include <math.h>
using namespace std;

struct Wektor2D
{
    Wektor2D()
    {
        x = 5.;
        y = 6.;
    }

    Wektor2D(double X = 1, double Y = 1)
    {

        x = X;
        y = Y;
    }

    ~Wektor2D() { cout << "umieram2D" << x << ';' << y << '\n'; }
    void   printxy() { std::cout << x << ';' << y << '\n'; }
    double x, y;
    double norm() { return sqrt(x * x + y * y); }
};

int main()
{
    // Wektor2D v1;
    // v1.x = 5;
    // v1.y = 6;
    // v1.printxy();
    // cout << v1.norm();
    Wektor2D v1;
}

/*
int main()


{struct Wektor2D{Wektor2D(){x = 4;
y = 3;
std::cout << "[" << x << "; " << y << "]" << '\n';
}
double x, y;
void   norm()
{
    std::cout << sqrt(x * x + y * y) << '\n';
}
void print()
{
    std::cout << "[" << x << "; " << y << "]" << '\n';
}
}
// void printxy() { std::cout << x << ';' std::cout << y << '\n'; } sqrt(x * x + y * y)
}
;

Wektor2D v;
v.x = 1;
v.y = 3;
v.norm();
v.print();
}
*/