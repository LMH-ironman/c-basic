#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10001;

struct date
{
    int x;
    double y;
    string z;
    bool operator<(const date &t) const
    {
        return x < t.x;
    }
} a[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y >> a[i].z;
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d %0.2lf %s\n", a[i].x, a[i].y, a[i].z.c_str());
    }

    return 0;
}