#include<stdio.h>

int main(void)
{
    int n1, n2, n3, n4;

    printf("Primeiro valor: ");
    scanf("%i", &n1);
    printf("Primeiro valor: ");
    scanf("%i", &n2);
    printf("Primeiro valor: ");
    scanf("%i", &n3);
    printf("Primeiro valor: ");
    scanf("%i", &n4);

    if(n1 % 2 == 0 && n1 % 3 == 0)
    {
        printf("O valor %i e divisivel por 2 e 3.", n1);
    }
    if(n2 % 2 == 0 && n2 % 3 == 0)
    {
        printf("\nO valor %i e divisivel por 2 e 3.", n2);
    }
    if(n3 % 2 == 0 && n3 % 3 == 0)
    {
        printf("\nO valor %i e divisivel por 2 e 3.", n3);
    }
    if(n4 % 2 == 0 && n4 % 3 == 0)
    {
        printf("\nO valor %i e divisivel por 2 e 3.", n4);
    }

    return 0;
}
