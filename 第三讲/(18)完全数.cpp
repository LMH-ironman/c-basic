#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int sum = 0;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                if (i < x)
                    sum += i;
                if (i != x / i && x / i < x)
                    sum += x / i;
            }
        }
        if (sum == x)
            cout << x << " is perfect" << endl;
        else
            cout << x << " is not perfect" << endl;
    }
    return 0;
}