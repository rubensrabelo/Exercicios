#include<stdio.h>

int main(void)
{
    int num, cont = 0, mult;

    printf("Digite o valor: ");
    scanf("%i", &num);

    while(cont <= 10)
    {
        mult = num * cont;

        printf("%i * %i = %i\n", num, cont, mult);

        cont++;
    }

    return 0;
}
