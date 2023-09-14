#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (b > a)
    {
        double t = a;
        a = b;
        b = t;
    }
    if (c > a)
    {
        double t = a;
        a = c;
        c = t;
    }
    if (c > b)
    {
        double t = b;
        b = c;
        c = t;
    }
    if (a >= b + c)
        printf("NAO FORMA TRIANGULO");
    else
    {
        if (a * a == b * b + c * c)
            printf("TRIANGULO RETANGULO\n");
        if (a * a > b * b + c * c)
            printf("TRIANGULO OBTUSANGULO\n");
        if (a * a < b * b + c * c)
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && a == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || a == c || b == c)
            printf("TRIANGULO ISOSCELES");
    }
    return 0;
}