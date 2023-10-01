#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string s, s1, s2;
    char c;
    while (cin >> c, c != ',')
        s += c;
    while (cin >> c, c != ',')
        s1 += c;
    while (cin >> c)
        s2 += c;

    if (s.size() <= s1.size() || s.size() <= s2.size())
        puts("-1");
    else
    {
        int l = 0;
        for (; l < s.size() - s1.size(); l++)
        {
            int k = 0;
            for (; k < s1.size(); k++)
            {
                if (s[l + k] != s1[k])
                    break;
            }
            if (k == s1.size())
                break;
        }
        l += s1.size() - 1;

        int r = s.size() - s2.size();
        for (; r >= 0; r--)
        {
            int k = 0;
            for (; k < s2.size(); k++)
            {
                if (s[r + k] != s2[k])
                    break;
            }
            if (k == s2.size())
                break;
        }

        if (r - l - 1 >= 0)
            printf("%d", r - l - 1);
        else
            puts("-1");
    }
    return 0;
}