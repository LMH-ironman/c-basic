#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k1 = 0, k2 = 0, k3 = 0;
    int sum;
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        char m;
        scanf("%d %c\n", &x, &m);
        if (m == 'C')
            k1 += x;

        else if (m == 'R')
            k2 += x;

        else
            k3 += x;

        sum += x;
    }

    printf("Total: %d animals\n", sum);
    printf("Total coneys: %d\n", k1);
    printf("Total rats: %d\n", k2);
    printf("Total frogs: %d\n", k3);
    printf("Percentage of coneys: %0.2lf %\n", (double(k1) / double(sum)) * 100);
    printf("Percentage of rats: %0.2lf %\n", (double(k2) / double(sum)) * 100);
    printf("Percentage of frogs: %0.2lf %\n", (double(k3) / double(sum)) * 100);
    return 0;
}