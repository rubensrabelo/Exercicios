#include<stdio.h>
#include<math.h>

int main(void)
{
    int a, b, c, r;

    printf("Valor de a: ");
    scanf("%i", &a);
    printf("Valor de b: ");
    scanf("%i", &b);
    printf("Valor de c: ");
    scanf("%i", &c);

    r = pow(a, 2) + pow(b, 2) + pow(c, 2);

    printf("O resultado e %i.", r);

    return 0;
}
