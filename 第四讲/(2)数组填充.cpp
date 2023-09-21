#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int v;
    cin >> v;
    int a[10];
    a[0] = v;
    for (int i = 0; i < 10; i++)
    {
        a[i + 1] = a[i] * 2;
        printf("N[%d] = %d\n", i, a[i]);
    }
    return 0;
}