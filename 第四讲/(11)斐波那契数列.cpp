#include <iostream>
#include <cstdio>
using namespace std;
int main()
{

    int t;
    long a[100];
    a[0] = 0, a[1] = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 2; j <= 100; j++)
        {
            a[j] = a[j - 2] + a[j - 1];
        }
        printf("Fib(%d) = %ld\n", n, a[n]);
    }

    return 0;
}