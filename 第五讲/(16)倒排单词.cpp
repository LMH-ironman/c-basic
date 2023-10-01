#include <iostream>

using namespace std;
int main()
{
    string s[100];

    int n = 0;
    while (cin >> s[n])
        n++;
    for (int i = n - 1; i >= 0; i--)
        cout << s[i] << " ";
    return 0;
}