#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int a, n;
    cin >> a;
    while (cin >> n, n <= 0)
        ;

    for (int i = a; i >= a && i <= a + n - 1; i++)
        sum += i;
    cout << sum << endl;
    return 0;
}