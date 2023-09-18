#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int t;
    if (a > b)
    {
        t = b;
        b = a;
        a = t;
    }
    for (int i = a + 1; i > a && i < b; i++)
    {
        if (i % 2 == 0)
            continue;
        sum += i;
    }

    cout << sum << endl;

    return 0;
}