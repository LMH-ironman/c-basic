#include <cstdio>

using namespace std;

int main()
{
    int x;
    double y;
    scanf("%d\n%lf", &x, &y);
    printf("%0.3lf km/l", x / y);

    return 0;
}