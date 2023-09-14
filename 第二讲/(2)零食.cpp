#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    double p;
    if (x == 1)
        p = 4.00;
    else if (x == 2)
        p = 4.50;
    else if (x == 3)
        p = 5.00;
    else if (x == 4)
        p = 2.00;
    else
        p = 1.50;

    printf("Total: R$ %0.2lf", p * y);
    return 0;
}