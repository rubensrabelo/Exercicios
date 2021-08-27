#include<stdio.h>
#include<math.h>

int main(void)
{
    int cont = 0, base = 0, exp = 0;
    float pot = 0;

    printf("Valor da base: ");
    scanf("%i", &base);
    printf("Valor do expoente: ");
    scanf("%i", &exp);

    while(cont <= exp)
    {
        pot = pow(base, cont);

        printf("%i^%i = %.0f\n", base, cont, pot);

        cont++;
    }

    return 0;
}
