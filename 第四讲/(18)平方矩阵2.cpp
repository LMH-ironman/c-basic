#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1, z; j <= n; j++)
            {
                z = abs(i - j) + 1;
                cout << z << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}