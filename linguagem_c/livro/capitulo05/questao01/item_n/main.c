#include<stdio.h>

int main(void)
{
    int num, soma = 0, cont = 0;
    float media;

    while(num > 0)
    {
        printf("Digite um valor: ");
        scanf("%i", &num);

        soma += num;

        cont++;
    }

    media = soma/cont;

    printf("Soma: %i\n ", soma);
    printf("Media: %.2f\n", media);
    printf("Total de valores fornecidos: %i", cont);

    return 0;
}
