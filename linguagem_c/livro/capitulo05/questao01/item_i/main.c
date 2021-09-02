#include<stdio.h>

int main(void)
{
    int t1 = 0, t2 = 1, aux = 0, cont = 0;

    printf("%i --> %i -->", t1, t2);

    while(cont <= 15)
    {
        aux = t1;
        t1 = t2;
        t2 = aux + t1;

        printf(" %i -->", t2);

        cont++;
    }

    printf(" FIM");

    return 0;
}
