
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int main()
{
  int nota;
  int contador =0;
  int cantidadDePares =0;
   int cantidadDeNumeros =0;
   int notaMasBaja;
   int notaMasAlta;
  float promedio;
  char seguir = 's';


  while(seguir == 's')
  {
      contador ++;

      printf("Ingrese nota del alumno # %d",contador);
      fflush(stdin);
      scanf("%d",&nota);


         while(nota < 0){

        printf("ERROR! Ingrese nota del alumno # %d",contador);
        fflush(stdin);
        scanf("%d",&nota);


      }



      cantidadDeNumeros = cantidadDeNumeros + nota;
      if(nota%2 == 0)
        {
            cantidadDePares = cantidadDePares+1;

        }


        if(contador ==0){
            notaMasBaja = nota;
            notaMasAlta = nota;
        }
        else
        {
            if(notaMasBaja< nota)
            {
            notaMasBaja = nota;
            }
            if(notaMasAlta > nota)
            {

                notaMasAlta = nota;
            }
        }
        printf("para ingresar mas escriba: s ");
        fflush(stdin);
        seguir = getchar();
        scanf("%c", &seguir);
  }



    promedio = (float)(cantidadDeNumeros / contador);

    printf(" la canidad de numeros pares es de %d\n",cantidadDePares);
    printf( "la suma de todas las notas es de %d\n",cantidadDeNumeros);
    printf("el la nota maxima es %d\n",notaMasAlta);
    printf("la nota minima es %d\n",notaMasBaja);
    printf(" el promedio es de %.2f\n",promedio);


   return 0;
}
