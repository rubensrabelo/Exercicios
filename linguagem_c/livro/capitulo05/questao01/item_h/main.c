#include<stdio.h>
#include<math.h>

int main(void)
{
    int base, exp, cont = 0, pot;

    printf("Digite o valor da base: ");
    scanf("%i", &base);
    printf("Digite o valor do expoente: ");
    scanf("%i", &exp);

    while (cont <= exp)
    {
        pot = pow(base, exp);

        cont++;
    }

    printf("%i^%i = %i", base, exp, pot);

    return 0;
}
