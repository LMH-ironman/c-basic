#include <iostream>
#include <cstdio>
using namespace std;
int main()
{

    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int j = 0; j < 10; j++)
    {
        if (a[j] <= 0)
            a[j] = 1;
        printf("X[%d] = %d\n", j, a[j]);
    }
    return 0;
}