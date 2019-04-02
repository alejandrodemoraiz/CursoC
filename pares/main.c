#include <stdio.h>
#include <stdlib.h>
    int contarPares(int vec[], int tam);
int main()
{
    int array []= {2,5,7,5,6,4,14,19,9,32};
    int cantidad;

    cantidad = contarPares(array,11);

    printf("la cantidad de pares del array es de %d",cantidad);



    return 0;
}
   int contarPares(int vec[], int tam)
   {
       int pares =-1;

       for(int i =0; i< tam; i++)
       {
           if(vec[i] %2 ==0)
           {
               pares++;

           }


       }
    return pares;
   }
