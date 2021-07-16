#include<stdio.h>
#include<math.h>

int main(void)
{
    float a, r;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    a = 3.14 * pow(r, 2);

    printf("O valor da area e %.2f.", a);

    return 0;
}
