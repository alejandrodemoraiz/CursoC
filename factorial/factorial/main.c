#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long factorial (int n);
int main()
{
    int numeroAFactorial;
    int resultado;

        printf("Ingrese numero para sacar el factor");
        scanf("%d",&numeroAFactorial);
        resultado = factorial(numeroAFactorial);
        printf("su factorial es %d",resultado);






    return 0;
}
long factorial (int n)
{
    long respuesta;

    if(n <= 1)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = n * factorial(n-1);
    }
    return  respuesta;
}
