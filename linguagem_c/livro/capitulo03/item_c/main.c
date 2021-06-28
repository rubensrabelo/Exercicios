#include<stdio.h>
#include<math.h>

int main(void)
{
    float v;
    float r;
    float a;

    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Digite a altura: ");
    scanf("%f", &a);

    v = 3.14 * pow(r, 2) * a;

    printf("O volume e %.2f.", v);

    return 0;
}
