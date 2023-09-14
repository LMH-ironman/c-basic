#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        if (b > d)
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)", 60 - (b - d));
        else if (b < d)
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)", d - b);
        else
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }
    else if (a < c)
    {
        if (b <= d)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a, d - b);
        else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a - 1, 60 - b + d);
    }
    else
    {
        if (b <= d)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", 24 - a + c, d - b);
        else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", 24 - a + c - 1, 60 - b + d);
    }
    return 0;
}