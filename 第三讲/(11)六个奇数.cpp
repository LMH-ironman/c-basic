#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = x, k = 0; i >= x; i++)
    {
        if (i % 2 == 0)
            continue;
        k++;
        if (k == 7)
            break;
        cout << i << endl;
    }
    return 0;
}