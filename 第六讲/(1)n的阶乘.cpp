#include <iostream>
using namespace std;
int fact(int n)
{
    int res;
    if (n == 1)
        return res = 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}