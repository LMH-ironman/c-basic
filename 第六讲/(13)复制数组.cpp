#include <iostream>
using namespace std;
void copy(int a[100], int b[100], int size)
{
    for (int i = 0; i < size; i++)
        b[i] = a[i];
}

int main()
{
    int n, m, size;
    cin >> n >> m >> size;
    int a[100], b[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    copy(a, b, size);
    for (int i = 0; i < m; i++)
        cout << b[i] << " ";
    return 0;
}