#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
 char letraIngresada;
 int contador = 0;
 int contadorA= 0;
 int contadorE= 0;
  int contadorI= 0;
   int contadorO= 0;
    int contadorU= 0;

 while (contador <5)
 {
    contador ++;
    printf("Ingrese letra #%d",contador);
    fflush(stdin);
    letraIngresada=getchar();
    tolower(letraIngresada);
    scanf("%c",&letraIngresada);



 if(letraIngresada == 'a')
    {

      contadorA ++;

    }
 if(letraIngresada == 'e')
    {
      contadorE++;
    }
     if(letraIngresada == 'i')
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

printf ("la cantidad de a ingresada es de %d \n",contadorA);

printf ("la cantidad de e ingresada es de %d \n",contadorE);

printf ("la cantidad de i ingresada es de %d \n",contadorI);

printf ("la cantidad de o ingresada es de %d \n",contadorO);

printf ("la cantidad de u ingresada es de %d \n",contadorU);





    return 0;
}
