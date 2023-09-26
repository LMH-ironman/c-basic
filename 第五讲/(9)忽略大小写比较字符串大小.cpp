#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    for (int i = 0; s1[i]; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
    }

    for (int i = 0; s2[i]; i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }
    int t = strcmp(s1, s2);
    if (t == 0)
        puts("=");
    else if (t > 0)
        puts(">");
    else
        puts("<");
    return 0;
}