#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  int notas;
  char seguir = 's';
  int contador =0;
  int aprobados =0;
  int pares =0;


  while(seguir == 's')
  {
    contador++;
    printf("Ingrese nota de un alumno #%d",contador);
    fflush(stdin);
    scanf("%d",&notas);

    while(notas < 1 || notas >10)
    {
    printf("ERROR! Ingrese una nota valida para el alumno #%d",contador);
    fflush(stdin);
    scanf("%d",&notas);
    }

    printf("escriba la letra ==>s para continuar");
     fflush(stdin);
    seguir = getchar();
    scanf("%c",&seguir);


    if(notas > 5)
   {

    aprobados++;
   }

   if( notas%2 ==0)
   {
        pares++;
   }
  }

  printf( " la cantidad de alumnos aprobados es de %d",aprobados);
    printf( " la cantidad de notas pares es de %d",pares);


    return 0;
}
