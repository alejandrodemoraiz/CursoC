#include <stdio.h>  // libreria que uso

#define PI 3.1416 // variable macro, funciona tanto fuera como dentro.

int y = 5; //variable global por estar fuera

int main()
{
    int dias = 10;  // variable local, solo funciona en la funcion que esta dentro de llaves.
    
   float suma = 0;

    suma = PI + dias;

    printf(" la suma es: %.2f ", suma);





    return 0;
}
//directivas