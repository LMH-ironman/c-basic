// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main()
// {
//     int n;
//     scanf("%d\n", &n);
//     // int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int x, y, t;
//         scanf("%d %d\n", &x, &y);
//         if (x > y)
//         {
//             t = x;
//             x = y;
//             y = t;
//         }
//         if (x == y)
//             cout << 0 << endl;
//         else if (y - x == 2 && x % 2 != 0)
//             cout << 0 << endl;
//         else
//         {
//             int sum = 0;
//             for (int j = x + 1; j > x && j < y; j++)
//             {
//                 if (j % 2 == 0)
//                     continue;
//                 sum += j;
//             }
//             cout << sum << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            swap(x, y);

        int sum = 0;
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 == 0)
                continue;
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}