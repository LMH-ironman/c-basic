#include <iostream>
using namespace std;

int array(int n)
{
    int res;
    if (n == 1)
        return res = 1;
    else if (n == 2)
        return res = 1;
    else
        return array(n - 1) + array(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << array(n);
    return 0;
}