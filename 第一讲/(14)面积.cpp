#include <cstdio>
using namespace std;
int main()
{
    double a, b, c;
    double pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %0.3lf\n", a * c / 2);
    printf("CIRCULO: %0.3lf\n", pi * c * c);
    printf("TRAPEZIO: %0.3lf\n", (a + b) * c / 2);
    printf("QUADRADO: %0.3lf\n", b * b);
    printf("RETANGULO: %0.3lf\n", a * b);
    return 0;
}