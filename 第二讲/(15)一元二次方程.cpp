#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c < 0 || a == 0)
        printf("Impossivel calcular");
    else
        printf("R1 = %0.5lf\nR2 = %0.5lf", (-b + sqrt(b * b - 4 * a * c)) / (2 * a), (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
    return 0;
}