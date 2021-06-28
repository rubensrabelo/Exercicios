#include<stdio.h>

int main(void)
{
    float t;
    float vm;
    float dist;
    float lit;

    printf("Digite o tempo de viagem [h]: ");
    scanf("%f", &t);
    printf("Digite a velocidade media [km/h]: ");
    scanf("%f", &vm);

    dist = t * vm;
    lit = dist/12;

    printf("O tempo e de %.2f h.\n", t);
    printf("A velocidade media e de %.2f km/h.\n", vm);
    printf("A distancia e de %.2f km.\n", dist);
    printf("A quantidade de litros usados e de %.2f l.", lit);

    return 0;
}
