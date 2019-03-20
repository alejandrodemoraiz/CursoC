#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   float horas, precioPorHora, salario;

   printf("Ingrese cantidad de horas trabajadas");
   scanf("%f",&horas);

   printf("Ingrese sueldo a pagar por hora");
   scanf("%f",&precioPorHora);

   salario = horas * precioPorHora;

   printf("Su salario segun horas y precio por hora es de %f", salario, "$");

 return 0;

}
