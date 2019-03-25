#include <stdio.h>
#include <stdlib.h>


int main()
{

 float base;
 float altura;
 float superficie =0;



 printf("ingrese base y altura del triangulo");
 fflush(stdin);
 scanf("%f %f",&base,&altura);

 superficie = (base*altura)/2;


 printf("la superficie es de %.2f ",superficie);

    return 0;
}
