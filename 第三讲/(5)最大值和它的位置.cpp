#include <iostream>

using namespace std;

int main()
{
    int max_value = 0, p;
    for (int i = 1; i <= 100; i++)
    {
        int x;
        cin >> x;
        if (x > max_value)
        {
            max_value = x;
            p = i;
        }
    }

    cout << max_value << endl
         << p << endl;
    return 0;
}