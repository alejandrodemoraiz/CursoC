#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
  int nota, contador =0, acumuladorNotas =0;
  float promedio;
  char sexo[15];


    while (contador <5)
    {
        contador ++;
        printf("Ingrese la nota del alumno # %d", contador);
        scanf("%d", &nota);

        while(nota < 1 || nota >10)
        {
           printf(" ERROR! Ingrese la nota del alumno # %d ", contador);
            scanf("%d", nota);

        }

        printf("Ingrese sexo f 0 m del alumno # %d", contador);
        scanf("%s", sexo);

   while(sexo != "f" && sexo != "m")
        {
                printf("ERROR! ingrese sexo valido, m para masculino, f para femenino");
                scanf("%s", sexo);
        }


       /*  if(sexo == "f" && sexo == "m")
         {
            printf("Ingrese sexo f 0 m del alumno # %d ", contador);
            scanf("%s", sexo);
         }
         else
         {
            if(sexo != "f" && sexo != "m")

            {printf("ERROR! Ingrese sexo :m 0 f del alumno # %d ", contador);
                scanf("%s",sexo);
                }
         }*/


    }
    return 0;
}

