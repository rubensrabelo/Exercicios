#include<stdio.h>

int main(void)
{
    int a, b, c, nu, br;
    float te, pv, va, vb, vc, vnu, vbr;

    printf("Votos para A: ");
    scanf("%i", &a);
    printf("Votos para B: ");
    scanf("%i", &b);
    printf("Votos para C: ");
    scanf("%i", &c);
    printf("Votos Nulos: ");
    scanf("%i", &nu);
    printf("Votos Brancos: ");
    scanf("%i", &br);

    te = a + b + c + nu + br;
    pv = ((a + b + c)/te) * 100;
    va = (a/te) * 100;
    vb = (b/te) * 100;
    vc = (c/te) * 100;
    vnu = (a/te) * 100;
    vbr = (a/te) * 100;

    printf("O numero total de eleitore e %.2f.", te);
    printf("\nO percentural de votos validos e de %.2f.", pv);
    printf("\nO percentural de votos para A e de %.2f.", va);
    printf("\nO percentural de votos para B e de %.2f.", vb);
    printf("\nO percentural de votos para C e de %.2f.", vc);
    printf("\nO percentural de votos nulos e de %.2f.", vnu);
    printf("\nO percentural de votos brancos e de %.2f.", vb);
    return 0;
}
