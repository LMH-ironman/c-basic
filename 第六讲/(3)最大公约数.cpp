#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int max = 0;
    for (int i = 1; i < 1001; i++)
    {
        if (a % i == 0 && b % i == 0)
            max = i;
    }
    return max;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}