#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int l;
    char c;
    double M[12][12];
    double s = 0, v = 0;
    cin >> l >> c;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> M[i][j];

    for (int j = 0; j < 12; j++)
    {
        if (c == 'S')
            s += M[l][j];
        else
            v += M[l][j];
    }
    if (c == 'S')
        s = s;
    else
        s = v / 12;
    printf("%0.1lf", s);
    return 0;
}