#include <stdio.h>

// 1: pedir 2 numeros al usuario y sumarlos, restarlos, multiplisumaarlos y dividirlos;

int main()
{
int n1, n2, suma =0, resta =0, mult = 0, div = 0;

printf("ingrese dos numeros");
scanf(" %i %i ",&n1,&n2);

suma = n1+n2;
resta = n1-n2;
mult=n1*n2;
div= n1/n2;

printf("\nel resultado de la suma es %i",suma);
printf("\nel resultado de la resta es %i",resta);
printf("\nel resultado de la multiplicacion es %i ",mult);
printf("\nEl resultado de la division es %i\n",div);


    return 0;
}