#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double a[100];
    for (int i = 0; i < 100; i++)
        cin >> a[i];
    for (int i = 0, k = 0; i < 100; i++)
    {
        if (a[i] <= 10)
        {
            k = i;
            printf("A[%d] = %0.1lf\n", k, a[k]);
        }
    }
    return 0;
}