#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    char c;
    int n = 0;
    cin >> c;
    double M[12][12], s = 0;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> M[i][j];

    for (int i = 7; i < 12; i++)
    {
        for (int j = 12 - i; j <= i - 1; j++)
        {
            n++;
            s += M[i][j];
        }
    }
    if (c == 'S')
        printf("%.1lf", s);
    else
        printf("%.1lf", s / n);
    return 0;
}