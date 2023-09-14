#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    int t = (a + b + abs(a - b)) / 2;
    int r = (t + c + abs(t - c)) / 2;
    printf("%d eh o maior", r);
    return 0;
}
