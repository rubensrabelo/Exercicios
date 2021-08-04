#include<stdio.h>

int main(void)
{
    int cont, fat = 1;

    cont = 4;

    while(cont > 0)
    {
        fat = fat * cont;

        cont--;
    }

    printf("fatorial: %i", fat);

    return 0;
}
