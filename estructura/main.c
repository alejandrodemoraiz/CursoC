#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void mostrarEmpleados(Eempleado unEmpleado);
void mostrarListaEmpleados(Eempleado lista[],int tam);
typedef struct
{

    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;

} Eempleado;



int main()
{
    char auxChar [100];
    Eempleado emp1;
    Eempleado emp2 []= {1111,"Carla", 'f',3000};



    printf("ingrese legajo");


    scanf("%d", &emp1.legajo);
    while(emp1.legajo< 1000 || emp1.legajo> 9999 )
    {
        printf("error! ingrese legajo");

         scanf("%d", &emp1.legajo);

    }



    //while(strlen(emp1.legajo)>4)
    //{
        //printf("error! ingrese legajo");
       // scanf("%d", &emp1.legajo);


    //}


    printf("ingrese nombre");
    fflush(stdin);
    gets(auxChar);
    while(strlen(auxChar)> 19)
    {
        printf("error! ingrese nombre");

        gets(auxChar);
    }
    strcpy(emp1.nombre,auxChar);



    printf("ingrese sueldo");
    scanf("%f", &emp1.sueldo);

    while(emp1.sueldo <0)
    {
        printf("error, ingrese sueldo");
        scanf("%f", &emp1.sueldo);
    }

    printf("ingrese sexo");
     fflush(stdin);

    scanf("%c", &emp1.sexo);
    while(emp1.sexo != 'm' && emp1.sexo != 'f')

    {
        printf("error!ingrese sexo");
        fflush(stdin);
        scanf("%c", &emp1.sexo);

    }

    printf(" %d %c %s %.2f",emp1.legajo,emp1.sexo,emp1.nombre,emp1.sueldo);
    return 0;
}
void mostrarEmpleados(Eempleado unEmpleado)
{
    printf(" %d %c %s %.2f",UnEmpleado);
}
void mostrarListaEmpleados(Eempleado lista[],int tam)

{
    for( int i =0; i < tam; i++)
    {

    mostrarListaEmpleados(lista[i]);

    }
}

