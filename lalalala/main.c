#include <stdio.h>
#include <stdlib.h>

int main()
{
 char letraIngresada;
 int contador = 0;
 int contadorA= 0;
 int contadorE= 0;
  int contadorI= 0;
   int contadorO= 0;
    int contadorU= 0;

 while (contador <20)
 {
    contador ++;
    printf("Ingrese letra #%d",contador);
    fflush(stdin);
    letraIngresada=getchar();
    scanf("%c",&letraIngresada);


 if(letraIngresada == 'a')
    {
      contadorA++;
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

printf ("la cantidad de a ingresada es de %c",contadorA);
printf ("la cantidad de e ingresada es de %c",contadorE);
printf ("la cantidad de i ingresada es de %c",contadorI);
printf ("la cantidad de o ingresada es de %c",contadorO);
printf ("la cantidad de u ingresada es de %c",contadorU);




    return 0;
}
