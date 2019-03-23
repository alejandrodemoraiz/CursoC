#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int nota, contador =0, acumuladorNotas =0;
  float promedio;
  char sexo;


    while (contador <5)
    {
        contador ++;
        printf("Ingrese la nota del alumno # %d", contador);

        scanf("%d",&nota);

        while(nota < 1 || nota >10)
        {

           printf(" ERROR! Ingrese la nota del alumno # %d ", contador);
            scanf("%d", nota);

        }

        printf("Ingrese sexo f 0 m del alumno # %d", contador);
        fflush(stdin);
                         sexo =getchar();
        scanf("%c",&sexo);

   while(sexo != 'm' && sexo != 'f')
        {

                printf("ERROR! ingrese sexo valido, m para masculino, f para femenino");
                  fflush(stdin);
                  sexo =getchar();

                scanf("%c",&sexo);
        }

    }
            return 0;
        }
