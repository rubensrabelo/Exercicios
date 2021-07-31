#include<stdio.h>
#include<math.h>

int main(void)
{
    float sn, a1 = 1, q = 2, cont = 1;

    while(cont <= 64)
    {
        sn = (a1*(pow(q, 64) - 1))/(q - 1);

        cont++;
    }

    printf("O somatorio no final dos 64 quadros e %.0f.", sn);

    return 0;
}
