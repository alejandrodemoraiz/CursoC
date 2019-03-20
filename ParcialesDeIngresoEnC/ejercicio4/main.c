#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num1, num2, suma,resta;


    printf("Ingrese primer numero");
    scanf("%d",&num1);


    printf("Ingrese psegundo numero");
    scanf("%d",&num2);


    if(num1 == num2)
    {
        printf("%d%d",num1, num2);
    }
    else
    {
        if(num1 > num2)
        {
            resta= num1 - num2;
            printf("%d",resta);
        }
        else
        {
            suma = num1 + num2;

            printf("%d",suma);
        }
    }











    return 0;
}
