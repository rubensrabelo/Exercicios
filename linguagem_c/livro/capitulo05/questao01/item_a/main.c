#include<stdio.h>
#include<math.h>

int main(void)
{
    int cont = 15, quad;

    while (cont <= 200)
    {
        quad = pow(cont, 2);

        printf("%i^2 = %i \n", cont, quad);

        cont++;
    }

    return 0;
}
