#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int cnt[26];
char str[100001];
int main()
{
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        cnt[str[i] - 'a']++;

    for (int i = 0; i < len; i++)
    {
        if (cnt[str[i] - 'a'] == 1)
        {
            cout << str[i];
            return 0;
        }
    }
    puts("no");
    return 0;
}