#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n[20];
    for (int i = 0; i < 20; i++)
        cin >> n[i];

    reverse(n, n + 20);
    for (int j = 0; j < 20; j++)
        printf("N[%d] = %d\n", j, n[j]);
    return 0;
}