#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 1; i <= 6; i++)
    {
        double n;
        cin >> n;
        if (n > 0)
            count++;
    }
    cout << count << " positive numbers" << endl;
    return 0;
}