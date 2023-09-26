#include <iostream>

using namespace std;
int main()
{
    string s;
    int len;
    getline(cin, s);
    for (char &c : s)
    {
        if (c >= '0' && c <= '9')
            len++;
    }
    cout << len;
    return 0;
}