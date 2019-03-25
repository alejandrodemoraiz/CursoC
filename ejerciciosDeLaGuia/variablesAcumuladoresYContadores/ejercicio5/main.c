#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int valor1;

 int cuadrado = 0;

 printf("ingrese un numero");
 fflush(stdin);

 scanf("%d",&valor1);

 while(valor1 < 0)
 {
    printf("ERROR!ingrese un numero positivo");
    fflush(stdin);

    scanf("%d",&valor1);

 }

 cuadrado = valor1*valor1;

 printf("El cuadrado del numero es %d",cuadrado);
    return 0;
}
