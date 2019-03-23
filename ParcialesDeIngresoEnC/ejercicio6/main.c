#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
  int nota;
  int contador =0;
  int acumuladorNotas =0;
  float promedio;
  char sexo;



    while (contador <5)
    {
        contador ++;
        printf("Ingrese la nota del alumno # %d", contador);
             fflush(stdin);
        scanf("%d", &nota);

        while(nota < 1 || nota >10)
        {
           printf(" ERROR! Ingrese la nota del alumno # %d ",contador);
                fflush(stdin);
            scanf("%d",&nota);

        }

        printf("Ingrese sexo f 0 m del alumno # %d",contador);
        fflush(stdin);
        sexo = getchar();
        scanf("%c",&sexo);

   while(sexo != 'f' && sexo != 'm')
        {
                printf("ERROR! ingrese sexo valido, m para masculino, f para femenino");
                fflush(stdin);
                sexo = getchar();
                scanf("%c", &sexo);
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

