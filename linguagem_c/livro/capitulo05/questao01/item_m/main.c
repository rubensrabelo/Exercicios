#include<stdio.h>

int main(void)
{
    int num, soma = 0, cont = 0;
    float media = 0;

    while(cont < 10)
    {
        printf("Digite um numero: ");
        scanf("%i", &num);

        soma += num;

        cont++;
    }

    media = soma/cont;

    printf("Soma: %i\n", soma);
    printf("Media: %.2f", media);

    return 0;
}
