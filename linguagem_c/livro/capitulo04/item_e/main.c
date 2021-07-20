#include<stdio.h>
#include<math.h>

int main(void)
{
    float a, b, c, delta, x1, x2;

    printf("Valor de a: ");
    scanf("%f", &a);
    printf("Valor de b: ");
    scanf("%f", &b);
    printf("Valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

        printf("O valor de delta e %.2f.", delta);
        printf("\nO valor de x' = %.2f e x'' = %.2f.", x1, x2);
    } else
    {
        if(delta == 0)
        {
            x1 = (-b)/(2*a);

            printf("O valor de delta e %.2f.", delta);
            printf("\nO valor de x' = %.2f e x'' = %.2f.", x1, x2);
        } else
        {
            printf("Nao existe valores reais.");
        }
    }
    return 0;
}
