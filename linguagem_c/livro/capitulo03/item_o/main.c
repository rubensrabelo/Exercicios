#include<stdio.h>

int main(void)
{
    int a, b, c, d, p, s;

    printf("Valor de a: ");
    scanf("%i", &a);
    printf("Valor de b: ");
    scanf("%i", &b);
    printf("Valor de c: ");
    scanf("%i", &c);
    printf("Valor de d: ");
    scanf("%i", &d);

    p = a * c;
    s = b + d;

    printf("O produto de a = %i com c = %i e %i", a, c, p);
    printf("\nA soma de a = %i com c = %i e %i", b, d, s);

    return 0;
}
