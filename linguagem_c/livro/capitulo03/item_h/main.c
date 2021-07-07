#include<stdio.h>

int main(void)
{
    float vol, comp, lar, alt;

    printf("Digite o comprimento: ");
    scanf("%f", &comp);
    printf("Digite a largura: ");
    scanf("%f", &lar);
    printf("Digite a altura: ");
    scanf("%f", &alt);

    vol = comp * lar * alt;

    printf("O volume e %.2f.", vol);

    return 0;
}
