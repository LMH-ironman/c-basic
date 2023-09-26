#include <iostream>

using namespace std;
int main()
{
    string a, s;
    while (cin >> s)
    {
        if (s.back() == '.')
            s.pop_back();
        if (s.size() > a.size())
            a = s;
    }
    cout << a;
    return 0;
}