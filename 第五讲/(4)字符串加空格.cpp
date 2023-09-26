#include <iostream>

using namespace std;

int main()
{
    char a[101];
    cin.getline(a, 101);
    for (int i = 0; a[i]; i++)
        cout << a[i] << " ";
    return 0;
}