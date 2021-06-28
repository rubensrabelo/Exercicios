#include<stdio.h>

int main(void)
{
    int a;
    int b;
    int aux;

    printf("digite o valor de a: ");
    scanf("%i", &a);
    printf("Digite o valor de b: ");
    scanf("%i", &b);

    aux = a;
    a = b;
    b = aux;

    printf("O valor de a = %i e b = %i", a, b);

    return 0;
}
