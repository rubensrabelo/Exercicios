#include<stdio.h>

int main(void)
{
    int n1, n2, n3, n4;

    printf("Primeiro valor: ");
    scanf("%i", &n1);
    printf("Segundo valor: ");
    scanf("%i", &n2);
    printf("Terceiro valor: ");
    scanf("%i", &n3);
    printf("Quarto valor: ");
    scanf("%i", &n4);

    printf("%i + %i = %i", n1, n2, n1+n2);
    printf("\n%i + %i = %i", n1, n3, n1+n3);
    printf("\n%i + %i = %i", n1, n4, n1+n4);
    printf("\n%i + %i = %i", n2, n3, n2+n3);
    printf("\n%i + %i = %i", n2, n4, n2+n4);
    printf("\n%i + %i = %i", n3, n4, n3+n4);

    printf("\n%i x %i = %i", n1, n2, n1*n2);
    printf("\n%i x %i = %i", n1, n3, n1*n3);
    printf("\n%i x %i = %i", n1, n4, n1*n4);
    printf("\n%i x %i = %i", n2, n3, n2*n3);
    printf("\n%i x %i = %i", n2, n4, n2*n4);
    printf("\n%i x %i = %i", n3, n4, n3*n4);
    return 0;
}
