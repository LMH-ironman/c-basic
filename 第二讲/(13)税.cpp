#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double a, p;
    cin >> a;
    if (a >= 0 && a <= 2000.00)
    {
        printf("Isento");
    }
    else if (a >= 2000.01 && a <= 3000.00)
    {
        p = 0.08;
        printf("R$ %0.2lf", (a - 2000) * p);
    }
    else if (a >= 3000.01 && a <= 4500.00)
    {
        p = 0.18;
        printf("R$ %0.2lf", 80 + (a - 3000) * p);
    }
    else
    {
        p = 0.28;
        printf("R$ %0.2lf", 350 + (a - 4500) * p);
    }
    return 0;
}