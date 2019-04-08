#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexoAlumno;
    int contador =0;
    int contadorM =0;
    int contadorF =0;

    while(contador<5)
    {
        contador ++;

        printf("ingrese el sexo para el alumno # %d",contador);
        __fpurge(stdin);
        //dsexoAlumno =  getchar();
        scanf("%c",&sexoAlumno);
        printf("Caracter ingresado: %c\n",sexoAlumno);

        if(sexoAlumno == 'm')
        {
            contadorM++;

        }

        else if(sexoAlumno == 'f')
        {
            contadorF++;

        }
    }
    printf("la cantidad de masculinos es de %d",contadorM);
    printf("la cantidad de femeninos es de %d",contadorF);

    return 0;
}
