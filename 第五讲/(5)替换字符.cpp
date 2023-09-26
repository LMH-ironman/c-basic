#include <iostream>
using namespace std;

int main()
{
    char str[35];
    char c;
    cin >> str >> c;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == c)
            str[i] = '#';
    }
    cout << str;
    return 0;
}