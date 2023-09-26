#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    double k, n = 0;
    string a, b;
    cin >> k >> a >> b;
    int len = a.size();
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (a[i] == b[j] && i == j)
                n++;
        }
    }
    if (n / len >= k)
        puts("yes");
    else
        puts("no");

    return 0;
}