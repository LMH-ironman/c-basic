#include <iostream>
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
            for (int j = 1; j <= n; j++)
            {
                int up = i, down = n - i + 1, left = j, right = n - j + 1;
                cout << min(min(up, down), min(left, right)) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}