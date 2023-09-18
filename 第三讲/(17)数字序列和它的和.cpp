#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    while (true)
    {
        int n, m;
        cin >> n >> m;
        if (n <= 0 || m <= 0)
            break;
        else
        {
            if (n > m)
                swap(n, m);
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
            }
            cout << "Sum=" << (n + m) * (m - n + 1) / 2 << endl;
        }
    }
    return 0;
}