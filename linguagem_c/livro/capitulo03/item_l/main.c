#include<stdio.h>

int main(void)
{
    float cotacao, dolar, real;

    printf("Quantidade de reais disponiveis: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolar = real/cotacao;

    printf("Voce tem U$ %.2f.", dolar);

    return 0;
}
