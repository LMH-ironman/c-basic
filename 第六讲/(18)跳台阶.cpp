#include <iostream>

using namespace std;
int n;
int res = 0;
int fact(int x)
{
    if (x == n)
        res++;
    else if (x < n)
    {
        fact(x + 1);
        fact(x + 2);
    }
}
int main()
{
    cin >> n;
    fact(0);
    cout << res;
    return 0;
}