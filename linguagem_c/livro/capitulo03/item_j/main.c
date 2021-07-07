#include<stdio.h>
#include<math.h>

int main(void)
{
    int n1, n2, qd;

    printf("Primeiro valor: ");
    scanf("%i", &n1);
    printf("Segundo valor: ");
    scanf("%i", &n2);

    qd = pow(n1, 2) - pow(n2, 2);

    printf("O quadrado da diferenca entre %i e %i e %i.", n1, n2, qd);

    return 0;
}
