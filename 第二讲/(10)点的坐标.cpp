#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
        printf("Origem");
    else if (x == 0 && y != 0)
        printf("Eixo Y");
    else if (x != 0 && y == 0)
        printf("Eixo X");
    else if (x > 0 && y > 0)
        printf("Q1");
    else if (x < 0 && y > 0)
        printf("Q2");
    else if (x < 0 && y < 0)
        printf("Q3");
    else
        printf("Q4");
    return 0;
}