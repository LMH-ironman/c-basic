#include <cstdio>
using namespace std;
void print(char str[])
{
    printf("%s", str);
}

int main()
{
    char str[110];
    fgets(str, 101, stdin);
    print(str);
    return 0;
}