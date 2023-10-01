#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size())
        swap(a, b);

    for (int i = 0; i < a.size(); i++)
    {
        a = a.substr(1) + a[0];
        for (int j = 0; j + b.size() <= a.size(); j++)
        {
            int k = 0;
            for (; j + k < b.size(); k++)
            {
                if (a[j + k] != b[k])
                    break;
            }
            if (k == b.size())
            {
                puts("true");
                return 0;
            }
        }
    }
    puts("false");
    return 0;
}