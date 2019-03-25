#include <stdio.h>
#include <stdlib.h>


int main()
{

    float radio;
    float circunferencia =0;
    float area = 0;
    float PI = 3.14;

    printf(" ingrese radio del circulo");
    scanf("%f",&radio);


    circunferencia = 2* PI *radio;
    area = PI * (radio*radio);


    printf("La circunferencia es de %.2f,\n y el area es de %.2f",circunferencia,area);





    return 0;
}
