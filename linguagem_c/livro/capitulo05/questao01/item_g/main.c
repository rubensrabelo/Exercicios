#include<stdio.h>
#include<math.h>

int main(void)
{
    int cont = 0, pot = 0;

    while(cont <= 15)
    {
        pot = pow(3, cont);

        printf("3^%i = %i\n", cont, pot);

        cont++;
    }

    return 0;
}
