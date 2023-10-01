#include <iostream>

using namespace std;
int main()
{
    string str;
    while (cin >> str, str != ".")
    {
        int len = str.size();
        for (int n = str.size(); n; n--)
        {
            if (len % n == 0)
            {
                int m = len / n;
                string s = str.substr(0, m);
                string r;
                for (int i = 0; i < n; i++)
                    r += s;
                if (r == str)
                {
                    cout << n << endl;
                    break;
                }
            }
        }
    }
    return 0;
}