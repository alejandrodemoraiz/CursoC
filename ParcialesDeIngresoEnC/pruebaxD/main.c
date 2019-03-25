#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int numero;
    char respuesta = 's';
    int contadorPar =0;
    char sexo;
    int contador = 0;
    int contador0 = 0;

    while(respuesta == 's')
    {
    contador ++;

    printf("Ingrese el numero deseado # %d ",contador);
    fflush(stdin);
    scanf("%d",&numero);

    while(numero < 0)
    {

    printf("Ingrese un numero positivo");
    fflush(stdin);
    scanf("%d",&numero);

    }
     printf("Ingrese m  o f para el numero # %d",contador);
     fflush(stdin);
     sexo = getchar();
     scanf("%c",&sexo);

     while( sexo != 'm' && sexo != 'f')
     {

          printf("ERROR! Ingrese m  o f para el numero # %d",contador);
            fflush(stdin);
            sexo = getchar();
            scanf("%c",&sexo);
     }


    if (numero %2 ==0 && numero !=0)
    {
    contadorPar++;


    }

    if( numero == 0)
    {

        contador0++;

    }



    printf("Ingrese -->s para continuar");
    fflush(stdin);
    respuesta = getchar();
    scanf("%c",&respuesta);






    }

    printf(" la cantidad de numeros pares es de %d",contadorPar);
    printf(" La cantidad de 0 ingresada es de %d",contador0);
    return 0;

}
