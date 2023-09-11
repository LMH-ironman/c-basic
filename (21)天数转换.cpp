#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", n / 365, n % 365 / 30, n % 365 % 30 / 1);
    return 0;
}