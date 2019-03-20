#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     float total_compra,descuentoNumero, descuento,precio;

     printf("Cual es el precio total de la compra:");
     scanf("%f",&total_compra);

     printf("Ingrese el numero de descuento");
     scanf("%f", &descuentoNumero);

     descuento = total_compra * (descuentoNumero/100);

     precio = total_compra - descuento;

     printf("EL precio final de la compra es %f",precio);




    return 0;
}
