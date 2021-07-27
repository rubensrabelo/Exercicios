#include<stdio.h>

int main(void)
{
    int cont = 0, soma = 0;

    while(cont <= 100)
    {
        soma = soma + cont;

        cont++;
    }

    printf("A soma de 1 a 100 e %i.", soma);

    return 0;
}
