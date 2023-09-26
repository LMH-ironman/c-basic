#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
            cout << "Tie" << endl;
        else if (s1 == "Hunter" && s2 == "Gun" || s1 == "Bear" && s2 == "Hunter" || s1 == "Gun" && s2 == "Bear")
            cout << "Player1" << endl;
        else
            cout << "Player2" << endl;
    }
    return 0;
}