#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double a, b;
    int p;
    cin >> a;
    if (a >= 0 && a <= 400.00)
        p = 15;
    else if (a >= 400.01 && a <= 800.00)
        p = 12;
    else if (a >= 800.001 && a <= 1200.00)
        p = 10;
    else if (a >= 1200.01 && a <= 2000.00)
        p = 7;
    else
        p = 4;

    printf("Novo salario: %0.2lf\n", a + a * p * 0.01);
    printf("Reajuste ganho: %0.2lf\n", a * p * 0.01);
    printf("Em percentual: %d %\n", p);

    return 0;
}