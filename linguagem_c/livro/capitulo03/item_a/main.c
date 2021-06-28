#include<stdio.h>

int main(void)
{
    float c;
    float f;

    printf("Qual a temperatura em grau Celsius? ");
    scanf("%f", &c);

    f = (9 * c + 160)/5;

    printf("A temperatura em fahrenheit e %.2f.", f);

    return 0;
}
