#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else
    {
        if (a > b)
            printf("O JOGO DUROU %d HORA(S)", 24 - a + b);
        else if (a < b && a != 0)
            printf("O JOGO DUROU %d HORA(S)", b - a);
        else
            printf("O JOGO DUROU %d HORA(S)", b);
    }
    return 0;
}