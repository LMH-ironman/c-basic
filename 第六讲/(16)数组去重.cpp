#include <iostream>
#include <algorithm>
using namespace std;
int get_unique_count(int a[], int n)
{
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[k - 1])
            a[k] = a[i], k++;
    }
    return k;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << get_unique_count(a, n);
    return 0;
}