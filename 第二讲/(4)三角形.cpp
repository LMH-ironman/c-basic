#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        printf("Perimetro = %0.1lf", a + b + c);
    else
        printf("Area = %0.1lf", (a + b) * c / 2);
    return 0;
}