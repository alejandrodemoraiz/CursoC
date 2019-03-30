#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10] = {0} ;// = { 12, 23, 45, 31, 20};;
    int numero;
    int ubicacion;

/*
    for( int i = 0; i < 5; i++)
    {

        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);

    }
    printf("Te muestro el array en el orden de ingreso\n");

*/
/*
printf("Ingrese un numero: ");
scanf("%d", &numero);

printf("Ingrese ubicacion: ");
scanf("%d", &ubicacion);

numeros[ubicacion] = numero;

")

*/
    for( int i = 0; i < 10; i++)
    {

        printf("%d ", numeros[i]);
    }

   /* printf("Te muestro el array en orden invertido\n\n");

 for( int i = 4; i >=0; i--)
    {

        printf("%d ", numeros[i]);
    }
*/


    return 0;
}
