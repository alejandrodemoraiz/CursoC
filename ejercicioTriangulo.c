#include<stdio.h>
#include<math.h>
int main()
{
 float cateto1, cateto2, hipotenusa;

 printf("ingrese los dos catetos");
scanf("%f %f",&cateto1,&cateto2);

hipotenusa = sqrt(pow(cateto1,2)+ pow(cateto2,2));




printf("la hipotenusa del triangulo es %.2f\n",hipotenusa);




    return 0;
}

//  sacar la hipotenusa de un triangulo regtangulo, pidiendo al usuario el
// valor de los 2 catetos
