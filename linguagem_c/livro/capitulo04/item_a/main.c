#include<stdio.h>

int main(void)
{
    int n1, n2, sub;

    printf("Primeiro valor: ");
    scanf("%i", &n1);
    printf("Segundo valor: ");
    scanf("%i", &n2);

    if (n1>n2)
    {
        sub = n1 - n2;
        printf("A subratacao de %i e %i e %i", n1, n2, sub);
    } else
    {
        sub = n2 - n1;
        printf("A subratacao de %i e %i e %i", n1, n2, sub);
    }

    return 0;
}
