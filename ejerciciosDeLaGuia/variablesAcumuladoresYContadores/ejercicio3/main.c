#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    fflush(stdin);
    int numero1;
    int numero2;
    int producto = 0;
    int cuadrado =0;
    int cuadrado2 = 0;

    printf("Ingrese dos numeros");
    scanf("%d %d",&numero1,&numero2);

    producto = numero1 * numero2;
    cuadrado = numero1 * numero1;
    cuadrado2 = numero2 * numero2;

    printf("el producto es %d, el cuadrado del primer numero es %d, y el cuadrado del segundo es %d",producto,cuadrado,cuadrado2);






    return 0;
}
