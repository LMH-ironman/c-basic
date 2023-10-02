#include <iostream>
using namespace std;

int abs(int x)
{
    if (x <= 0)
        return x = -x;
    else
        return x = x;
}

int main()
{
    int x;
    cin >> x;
    cout << abs(x);
    return 0;
}