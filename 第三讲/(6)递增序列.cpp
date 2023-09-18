#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x;
    while (true)
    {
        cin >> x;
        if (x == 0)
            break;
        for (int i = 1; i <= x; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}