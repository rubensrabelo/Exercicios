#include<stdio.h>

int main(void)
{
    float prest;
    float valor;
    float taxa;
    float tempo;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite a taxa: ");
    scanf("%f", &taxa);
    printf("Digite o tempo: ");
    scanf("%f", &tempo);

    prest = valor + (valor * (taxa/100) * tempo);

    printf("A prestacao e de R$ %.2f.", prest);

    return 0;
}
