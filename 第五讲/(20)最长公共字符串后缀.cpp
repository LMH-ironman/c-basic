#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 200;
string str[N];
int n;
int main()
{
    while (cin >> n, n)
    {
        int maxlen = 1000;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            if (maxlen > int(str[i].size()))
                maxlen = str[i].size();
        }

        while (maxlen)
        {
            bool success = true;
            for (int i = 1; i < n; i++)
            {
                bool is_same = true;
                for (int j = 1; j <= maxlen; j++)
                {
                    if (str[0][str[0].size() - j] != str[i][str[i].size() - j])
                    {
                        is_same = false;
                        break;
                    }
                }
                if (is_same == 0)
                {
                    success = false;
                    break;
                }
            }
            if (success != 0)
                break;
            maxlen--;
        }

        cout << str[0].substr(str[0].size() - maxlen) << endl;

        if (n == 0)
            break;
    }
    return 0;
}