#include<stdio.h>

int main(void)
{
    char nome[10];
    int sexo;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu sexo [1] Masculino / [2] Feminino: ");
    scanf("%i", &sexo);

    if(sexo == 1)
    {
        printf("Seja bem-vindo, Sr. %s", nome);
    }else
    {
        printf("Seja bem-vindo, Sra. %s", nome);
    }

    return 0;
}
