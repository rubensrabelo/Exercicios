#include<stdio.h>

int main(void)
{
    int cont = 0, soma = 0;

    while(cont <= 100)
    {
        soma += cont;

        cont++;
    }

    printf("A soma dos cem primeiros numeros e %i.", soma);

    return 0;
}
