#include <cstdio>

using namespace std;

int main()
{
    char a;
    double b, c;
    scanf("%s\n%lf\n%lf", &a, &b, &c);
    printf("TOTAL = R$ %0.2lf", b + 0.15 * c);
    return 0;
}