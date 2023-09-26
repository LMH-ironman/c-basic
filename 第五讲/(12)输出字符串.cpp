#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        char b;
        if ((i + 1) < l)
            b = int(s[i]) + int(s[i + 1]);
        else
            b = int(s[i]) + int(s[0]);
        cout << b;
    }
}
