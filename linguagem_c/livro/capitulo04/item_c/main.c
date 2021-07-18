#include<stdio.h>

int main(void)
{
    float n1, n2, n3, n4, media;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Terceira nota: ");
    scanf("%f", &n3);
    printf("Quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/5;

    if(media >= 5)
    {
        printf("APROVADO!!!");
    }else
    {
        printf("REPROVADO!!!");
    }

    return 0;
}
