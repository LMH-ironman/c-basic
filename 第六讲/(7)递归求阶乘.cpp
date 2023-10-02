#include <iostream>
using namespace std;

int digui(int n)
{
    int res;
    if (n == 1)
        return res = 1;
    return n * digui(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << digui(n) << endl;
    return 0;
}