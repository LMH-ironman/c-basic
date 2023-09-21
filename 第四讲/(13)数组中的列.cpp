#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    double s = 0;
    double M[12][12];
    char l;
    cin >> n >> l;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> M[i][j];

    for (int i = 0; i < 12; i++)
        s += M[i][n];
    if (l == 'S')
        printf("%0.1lf", s);
    else
        printf("%0.1lf", s / 12);

    return 0;
}