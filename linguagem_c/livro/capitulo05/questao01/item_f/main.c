#include<stdio.h>

int main(void)
{
    int cont = 0;

    while(cont <= 200)
    {
        if(cont % 4 == 0)
        {
            printf("O numero %i e divisivel por 4!\n", cont);
        }

        cont++;
    }

    return 0;
}
