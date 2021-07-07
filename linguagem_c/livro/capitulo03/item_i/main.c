#include<stdio.h>
#include<math.h>

int main(void)
{
    int num, quad;

    printf("Digite um valor: ");
    scanf("%i", &num);

    quad = pow(num, 2);

    printf("O quadrado de %i e %i.", num, quad);

    return 0;
}
