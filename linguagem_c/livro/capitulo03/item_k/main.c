#include<stdio.h>

int main(void)
{
    float dolar, cot, real;

    printf("Quantidade de dolar disponivel: ");
    scanf("%f", &dolar);
    printf("Cotacao atual do dolar: ");
    scanf("%f", &cot);

    real = dolar/cot;

    printf("A quantidade em real e R$ %.2f.", real);

    return 0;
}
