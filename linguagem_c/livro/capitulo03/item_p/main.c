#include<stdio.h>

int main(void)
{
    float sm, pr, ns;

    printf("Digite o salario mensal: ");
    scanf("%f", &sm);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &pr);

    ns = sm + (sm * (pr/100));

    printf("O novo salario e R$ %.2f", ns);

    return 0;
}
