#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, e, f, g;
    cin >> a >> b >> c;
    e = a, f = b, g = c;
    if (a > c)
    {
        int t = c;
        c = a;
        a = t;
    }
    if (a > b)
    {
        int t = b;
        b = a;
        a = t;
    }
    if (b > c)
    {
        int t = c;
        c = b;
        b = t;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d", a, b, c, e, f, g);
    return 0;
}