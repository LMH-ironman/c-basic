#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);
    printf("%0.4lf", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

    return 0;
}
