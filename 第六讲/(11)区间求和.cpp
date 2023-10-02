#include <iostream>
using namespace std;

int sum(int l, int r)
{
    int s = 0;
    for (int i = l; i <= r; i++)
        s += i;
    return s;
}

int main()
{
    int l, r;
    cin >> l >> r;
    cout << sum(l, r);
    return 0;
}