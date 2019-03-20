#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int nota, contador =0;
    char sexo;
    float promedio, acumuladorNotas =0;

    while(contador<5)
    {
        contador =contador +1;

        printf("ingrese la nota del alumno # %d y su sexo",contador);
        scanf("%d %c",&nota,&sexo);

       // printf("Ingrese sexo del alumno # %d ==>m 0 f",contador);
          //  scanf("%c",sexo);

    acumuladorNotas = acumuladorNotas + nota;
    }


 promedio = acumuladorNotas / contador;

 printf("El promedio de las notas es de %.2f", promedio);



    return 0;
}
