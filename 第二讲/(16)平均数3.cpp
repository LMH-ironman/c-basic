#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    x = (2 * a + 3 * b + 4 * c + d * 1) / 10;
    printf("Media: %0.1lf\n", x);
    if (x >= 7.0)
        printf("Aluno aprovado.\n");
    if (x < 5.0)
        printf("Aluno reprovado.\n");
    else if (x >= 5.0 && x < 7.0)
    {
        printf("Aluno em exame.\n");
        cin >> y;
        printf("Nota do exame: %0.1lf\n", y);
        double z;
        z = (x + y) / 2;
        if (z >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf", z);
    }

    return 0;
}