#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int n;
    cin >> n;
    printf("%d ", a);
    for (int i = 0; i < n - 1; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%d ", a);
    }
    return 0;
}