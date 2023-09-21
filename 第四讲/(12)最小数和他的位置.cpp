#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int index = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    cout << "Minimum value: " << min << endl
         << "Position: " << index;
    return 0;
}