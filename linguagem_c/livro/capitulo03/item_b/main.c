#include<stdio.h>

int main(void)
{
    float f;
    float c;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 0.55556;

    printf("A temperatura em gaus Celsius e %.2f.", c);

    return 0;
}
