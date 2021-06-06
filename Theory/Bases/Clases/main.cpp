#include <bits/stdc++.h>
using namespace std;

struct Suma
{
    int a, b;
    Suma(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

Suma operator+(const Suma &p1, const Suma &p2)
{
    Suma res(p1.a + p2.a, p1.b + p2.b);
    return res;
}

int main()
{
    Suma A(10, 4);
    Suma B(5, 10);
    Suma C = A + B;
    cout << C.a << " " << C.b << "\n";
}