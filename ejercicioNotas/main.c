
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int nota, contador =0, cantidadDePares =0, cantidadDeNumeros =0, notaMasBaja, notaMasAlta;
  float promedio;
  char seguir = 's' ;


  while(seguir == 's');
  {
      contador ++;

      printf("Ingrese nota del alumno # %d",contador);
      fflush(stdin);
      scanf("%d",&nota);

         printf("desea ingresar otro numero? ");
        fflush(stdin);
        scanf("%c", &seguir);


      while(nota < 0)
      {
        printf("ERROR! Ingrese nota del alumno # %d",contador);
        fflush(stdin);
      scanf("%d",&nota);


      }
      cantidadDeNumeros = cantidadDeNumeros + nota;
      if(nota%2 == 0)
        {
            cantidadDePares = cantidadDePares+1;

        }


        if(contador ==0)
        {
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

  }



    promedio = (float)(cantidadDeNumeros / contador);

    printf(" la canidad de numeros pares es de %d , la suma de todas las notas es de %d , el la nota maxima es %d la nota minima es %d y el promedio es de %.2f .",cantidadDePares,cantidadDeNumeros,notaMasAlta,notaMasBaja,promedio);





   return 0;
}

