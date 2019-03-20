#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int ancho;
  int largo;
  int perimetro;

  printf("Ingrese el ancho del rectangulo");
    scanf("%d",&ancho);
    printf("ingrese el largo del rectangulo");
    scanf("%d",&largo);

    perimetro = (ancho +largo) *2;

    printf ("el perimetro es de %d",perimetro);

}
