#include<stdio.h>

int main(void)
{
    int num;

    printf("Digite um valor: ");
    scanf("%i", &num);

    if(num < 0)
    {
        num *= (-1);
        printf("O valor digitado foi %i.", num);
    } else
    {
        printf("O valor digitado foi %i.", num);
    }

    return 0;
}
