#include <stdio.h>
#include <stdlib.h>

int main()
{
 char letraIngresada;
 int contador = 0;
 int contadorA= 0;

 while (contador <5)
 {
    contador ++;
    printf("Ingrese letra #%d",contador);
        __fpurge(stdin);
    //letraIngresada=getchar();
    scanf("%c",&letraIngresada);
    printf("Caracter ingresado: %c\n",letraIngresada);


 if(letraIngresada == 'a')
    {
      contadorA++;
    }/*
 if(letraIngresada == 'e')
    {
      contadorE++;
    }
     /*if(letraIngresada == 'i')
    {
      contadorI++;
    }
     if(letraIngresada == 'o')
    {
      contadorO++;
    }
     if(letraIngresada == 'u')
    {
      contadorU++;
    }


 }
*/
}
printf ("la cantidad de a ingresada es de %d",contadorA);
/*
printf ("la cantidad de e ingresada es de %c",contadorE);
printf ("la cantidad de i ingresada es de %c",contadorI);
printf ("la cantidad de o ingresada es de %c",contadorO);
printf ("la cantidad de u ingresada es de %c",contadorU);

*/


    return 0;
}
