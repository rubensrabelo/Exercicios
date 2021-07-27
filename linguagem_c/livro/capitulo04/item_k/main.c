#include<stdio.h>

int main(void)
{
    int num;

    printf("Digite um valor: ");
    scanf("%i", &num);

    if (num > 1 && num < 9)
    {
        printf("O valor esta na faixa permitida.");
    }else
    {
        printf("O valor esta fora da faixa permitida.");
    }

    return 0;
}
