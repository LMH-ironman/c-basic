#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cx, cy;
    cx = n / 2 + 1, cy = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (abs(i - cx) + abs(j - cy) <= n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}