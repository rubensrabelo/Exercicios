#include<stdio.h>

int main(void)
{
    int cont = 0;
    float celsius, fahrenheit;

    while(cont <= 100)
    {
        celsius = cont;
        fahrenheit = celsius * 1.8 + 32;

        printf("%.2f = %.2f\n", celsius, fahrenheit);

        cont += 10;
    }

    return 0;
}
