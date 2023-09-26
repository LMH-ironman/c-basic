#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s, a, b;
    getline(cin, s);
    cin >> a >> b;

    stringstream ssin(s);
    string str;
    while (ssin >> str)
    {
        if (str == a)
            cout << b << " ";
        else
            cout << str << " ";
    }

    return 0;
}