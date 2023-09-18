#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, k1 = 0, k2 = 0;
    cin >> n;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if (x >= 10 && x <= 20)
            k1++;
        else
            k2++;
    }
    cout << k1 << " in" << endl
         << k2 << " out" << endl;
    return 0;
}