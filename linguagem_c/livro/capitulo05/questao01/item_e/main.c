#include<stdio.h>

int main(void)
{
    int cont = 0;

    while (cont <= 20)
    {
        if(cont % 2 == 1)
        {
            printf("O numero %i e impar.\n", cont);
        }
        cont++;
    }

    return 0;
}
