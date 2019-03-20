#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nombre [50], localidad[50];

   printf("Ingrese nombre");
   gets(nombre);

   printf("Ingrese localidad");
   gets(localidad);

   printf("usted es %s y vive en la localidad de %s",nombre,localidad);

   return 0;
}
