#include <cstdio>

using namespace std;

int main()
{
    double a, b, c;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    printf("MEDIA = %0.1lf", (a * 2 + b * 3 + c * 5) / 10);
    return 0;
}
