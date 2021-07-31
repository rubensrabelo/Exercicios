#include<stdio.h>

int main(void)
{
    int t1 = 0, t2 = 1, cont, t3;

    printf("%i %i ", t1, t2);

    while(cont <= 10)
    {
        t3 = t1 + t2;

        printf("%i ", t3);

        t1 = t2;
        t2 = t3;

        cont++;
    }

    return 0;
}
