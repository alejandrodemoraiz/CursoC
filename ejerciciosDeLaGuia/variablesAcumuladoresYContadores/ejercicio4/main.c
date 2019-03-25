#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2,resultado, resta = 0;

    printf("Digite dos numeros");
    scanf("%d %d",&valor1,&valor2);

    resta = valor1 - valor2;

    if(resta > 0)
    {
        printf("Resultado positivo");

    }
    else
    {
       printf("Resultado negativo");
    }



    return 0;
}
