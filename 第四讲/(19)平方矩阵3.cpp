#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[100][100];
    a[0][0] = 1;
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j + 1] = a[i][j] * 2;
                a[i + 1][j] = a[i][j] * 2;
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}