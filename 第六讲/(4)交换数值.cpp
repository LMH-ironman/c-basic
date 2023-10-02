#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int t = y;
    y = x;
    x = t;
}

int main()
{
    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << " " << y;
    return 0;
}