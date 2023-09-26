#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int p = 0;
        for (int i = 1; i < s1.size(); i++)
            if (s1[i] > s1[p])
                p = i;
        cout << s1.substr(0, p + 1) + s2 + s1.substr(p + 1) << endl;
    }
    return 0;
}