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
        bool bool_math = true;
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                bool_math = false;
                break;
            }
        }
        if (bool_math == true)
            cout << x << " is prime" << endl;
        else
            cout << x << " is not prime" << endl;
    }
    return 0;
}