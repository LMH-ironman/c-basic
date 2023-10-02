#include <iostream>
using namespace std;

void print(int a[], int size)
{
    for (int j = 0; j < size; j++)
        cout << a[j] << " ";
}

int main()
{
    int n, size;
    cin >> n >> size;
    int a[n];
    for (int i = 0; i <= n; i++)
        cin >> a[i];
    print(a, size);

    return 0;
}