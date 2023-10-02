#include <iostream>
#include <cstdio>
using namespace std;

double add(double x, double y)
{
    double d;
    return d = x + y;
}
int main()
{
    double x, y;
    cin >> x >> y;
    printf("%0.2lf", add(x, y));
    return 0;
}