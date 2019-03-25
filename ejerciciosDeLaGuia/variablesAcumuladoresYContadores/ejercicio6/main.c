#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contador = 0;
   int numeros;
   int contadorPositivos =0;
   int contadorNegativos = 0;

   while(contador <10)
   {
   contador ++;
   printf("Ingrese el numero numero #%d",contador);
   fflush(stdin);
   scanf("%d",&numeros);



   if(numeros > 0)
   {
   contadorPositivos ++;

   }
   else
   {
   contadorNegativos ++;

   }
   }

   printf ("De los 10 numeros ingresados %d son positivos y %d son negativos",contadorPositivos,contadorNegativos);

    return 0;
}
