#include <stdio.h>

// 1: pedir 2 numeros al usuario y sumarlos, restarlos, multiplisumaarlos y dividirlos;

int main()
{
 int n1,n2, suma =0, resta=0, mult=0, div=0;

 printf("Digite los dos numeros a operar: ");
 scanf("%i %i",&n1,&n2);

suma = n1 + n2;
resta = n1-n2;
mult = n1*n2;
div = n1/n2;

printf("\nLa suma es %i", suma);
printf("\nLa resta es %i", resta);
printf("\nla mult es %i",mult);
printf("\nla division es %i\n",div);
 




    return 0;
}