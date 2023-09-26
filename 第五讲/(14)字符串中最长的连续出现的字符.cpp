#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        char c;
        for (int i = 0; i < s.size(); i++)
        {
            int j = i;
            while (s[j] == s[i] && j < s.size())
                j++;
            if (j - i > cnt)
                cnt = j - i, c = s[i];
            i = j - 1;
        }
        cout << c << ' ' << cnt << endl;
    }

    return 0;
}