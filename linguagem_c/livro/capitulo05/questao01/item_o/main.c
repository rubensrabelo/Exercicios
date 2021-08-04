#include<stdio.h>

int main(void)
{
    int num, n, fat = 1, cont = 0;

    while(cont < 10)
    {
        if(cont % 2 == 1)
        {
            num = cont;
            n = cont;

            while(num > 0)
                {
                    fat = fat * num;

                    num--;
                }

                printf("O fatorial de %i e %i.\n", n, fat);
        }

        cont ++;
    }

    return 0;
}
