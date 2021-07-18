#include<stdio.h>

int main(void)
{
    float n1, n2, n3, n4, media, n5, media2;

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
        printf("Digite a nota de recuperacao: ");
        scanf("%f", &n5);

        media2 = (media + n5)/2;

        if(media2 >= 5)
        {
            printf("APROVADO!!!");
        } else
        {
            printf("REPROVADO!!!");
        }
    }

    return 0;
}
