#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    for (int i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
    return -1;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}