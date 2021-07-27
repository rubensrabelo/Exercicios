#include<stdio.h>

int main(void)
{
    int cont = 0, soma = 0;

    while(cont <= 500)
    {
        if(cont % 2 == 0)
        {
            soma = soma + cont;
        }
        cont++;
    }

    printf("A soma entre os numeros pares de 1 a 500 e %i.", soma);

    return 0;
}
