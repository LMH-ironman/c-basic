#include <cstdio>

using namespace std;

int main()
{
    int n, t;
    double s;
    scanf("%d\n%d\n%lf", &n, &t, &s);
    printf("NUMBER = %d\nSALARY = U$ %0.2lf", n, t * s);

    return 0;
}