#include<stdio.h>

int main(void)
{
    float a, b, c, aux;

    printf("Primeiro valor: ");
    scanf("%f", &a);
    printf("Segundo valor: ");
    scanf("%f", &b);
    printf("Terceiro valor: ");
    scanf("%f", &c);

    if (a>b && b>c)
    {
        printf("A ordem e: %.2f, %.2f e %.2f.", c, b, a);
    }else
    {
        if(b>a && a>c)
        {
            aux = a;
            a = b;
            b = aux;

            printf("A ordem e: %.2f, %.2f e %.2f.", c, b, a);
        }else
        {
            if(c>a && a>b)
            {
                aux = a;
                a = c;
                c = b;
                b = aux;

                printf("A ordem e: %.2f, %.2f e %.2f.", c, b, a);
            }
        }
    }
    return 0;
}
