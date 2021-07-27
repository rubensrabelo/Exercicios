#include<stdio.h>

int main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if(num % 2 == 0)
    {
        printf("O numero %i e par.", num);
    }else
    {
        printf("O numero %i e impar", num);
    }

    return 0;
}
