#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numeros;
  int contador = 0;
  int acumuladorNumeros =0;
  float promedio;

  while(contador <5)
  {
    contador ++;
    printf("ingrese el numero #%d",contador);
    scanf("%d",&numeros);

    acumuladorNumeros = acumuladorNumeros + numeros;


  }
  promedio = (float) acumuladorNumeros/contador;

  printf("el promedio de los numeros es de %.2f",promedio);












return 0;

}
