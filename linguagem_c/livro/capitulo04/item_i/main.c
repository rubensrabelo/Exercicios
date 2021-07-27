#include<stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("Primeiro valor: ");
    scanf("%i", &n1);
    printf("Segundo valor: ");
    scanf("%i", &n2);
    printf("Terceiro valor: ");
    scanf("%i", &n3);

    if(n1 > n2 && n2 > n3)
    {
        printf("Maior valor e %i e o menor valor e %i.", n1, n3);
    } else
    {
        if(n1 > n3 && n3 > n2)
        {
            printf("Maior valor e %i e o menor valor e %i.", n1, n2);
        } else
        {
            if(n2 > n3 && n3 > n1)
            {
                printf("Maior valor e %i e o menor valor e %i.", n2, n1);
            } else
            {
                if(n2 > n1 && n1 > n3)
                {
                    printf("Maior valor e %i e o menor valor e %i.", n2, n3);
                } else
                {
                    if(n3 > n2 && n2 > n1)
                    {
                        printf("Maior valor e %i e o menor valor e %i.", n3, n1);
                    } else
                    {
                        printf("Maior valor e %i e o menor valor e %i.", n3, n2);
                    }
                }
            }
        }
    }
    return 0;
}
