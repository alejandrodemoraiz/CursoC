#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

typedef struct
{
    int legajo;
    char nombre [50];
    float sueldo;
    char sexo;
    int ocupado;




} eEmpleado;
void CargarEmpleado(eEmpleado vec[],int tam);

int main()
{
    eEmpleado lista [TAM];

    inicializarEmpleados(lista,TAM);// llamada

    int respuesta;
    int opc;
    int index;
    char auxChar[50];




    do
    {

        menu();
        printf("\n\nIngrese opcion: ");
        scanf("%d",&opc);

        switch(opc)

        {

        case 1:
            index = BuscarLibre(lista,TAM);
              if(index == -1)
              {
            printf( "No hay espacio");

              }
              else{



        printf("Ingrese legajo del empleado: ");
        scanf("%d",&lista[index].legajo);

        while(lista[index].legajo < 1000 && lista[index].legajo >9999)
        {
            printf("ERROR Ingrese legajo de 3 cifras: ");
            scanf("%d",&lista[index].legajo);
        }

        printf("Ingrese nombre del empleado: ");
          fflush(stdin);
        scanf("%s",auxChar);



        {
            printf("Ingrese nombre del empleado: ");

            scanf("%s",auxChar);
        }

        strcpy(lista[index].nombre,auxChar);


        printf("Ingrese sexo del empleado: ");
          fflush(stdin);
        scanf("%c",&lista[index].sexo);

        while(lista[index].sexo != 'f' && lista[index].sexo != 'm')
        {

              printf("ERROR! Ingrese sexo del empleado: ");
                fflush(stdin);
                scanf("%c",&lista[index].sexo);

        }
        printf("Ingrese sueldo del empleado: ");
        scanf("%f",&lista[index].sueldo);

        while(lista[index].sueldo< 0)
        {
            printf("ERROR! Ingrese sueldo mayor a 0: ");
                scanf("%f",&lista[index].sueldo);

        }


              }


            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            printf("usted a salido con exito");

            break;



        default:
            printf("Opcion incorrecta");





        }














    }
    while( opc != 6);
    return 0;
}
void inicializarEmpleados(eEmpleado vec[], int tam)
{

    for(int i = 0; i<tam; i++)
    {
        vec[i].ocupado =0;



    }



}
int BuscarLibre(eEmpleado vec[], int tam)
{
    int indice = -1;
    for(int i =0; i<tam; i++ )
    {
        if(vec[i].ocupado == 0)
        {


            indice = i;
            break;
        }

    }
    return indice;

}
int BuscarEmpleado (eEmpleado vec [], int tam, int leg)
{

    int indice = -1;
    for(int i =0; i<tam; i++ )
    {
        if(vec[i].legajo == leg && vec[i].ocupado == 1)
        {


            indice = i;
            break;
        }

    }
    return indice;


}
void mostrarEmpleado(eEmpleado empleado, int tam)
{

    printf(" %d %s %.2f",&empleado.legajo,&empleado.nombre,&empleado.sueldo);


}
void mostrarEmpleados(eEmpleado vec[],int tam)
{

    for(int i =0; i<tam; i++)
    {
        printf(" %d %s %.2f",&vec[i].legajo,&vec[i].nombre,&vec[i].sueldo);
    }

}
void menu()
{
    printf("\n\n ****** MENU DE EMPLEADOS *********");
    printf("\n1- Alta empleado");
    printf("\n2- Baja empleado");
    printf("\n3- Modificar empleado");
    printf("\n4- Ordenar empleado");
    printf("\n5- listar empleados");
    printf("\n6- Salir");


}
void CargarEmpleado(eEmpleado vec[],int tam)
{
    char auxChar[50];


        printf("Ingrese legajo del empleado: ");
        scanf("%d",&lista[index].legajo);

        while(lista[index].legajo < 1000 && lista[index].legajo >9999)
        {
            printf("ERROR Ingrese legajo de 3 cifras: ");
            scanf("%d",&lista[index].legajo);
        }

        printf("Ingrese nombre del empleado: ");
          fflush(stdin);
        scanf("%s",auxChar);


        while(strlen(auxChar)>19)
        {
            printf("Ingrese nombre del empleado: ");
              fflush(stdin);
            scanf("%s",auxChar);
        }

        strcpy(vec[i].nombre,auxChar);


        printf("Ingrese sexo del empleado: ");
          fflush(stdin);
        scanf("%c",&vec[i].sexo);

        while(vec[i].sexo != 'f' && vec[i].sexo != 'm')
        {

              printf("ERROR! Ingrese sexo del empleado: ");
                fflush(stdin);
                scanf("%c",&vec[i].sexo);

        }
        printf("Ingrese sueldo del empleado: ");
        scanf("%f",&vec[i].sueldo);

        while(vec[i].sueldo< 0)
        {
            printf("ERROR! Ingrese sueldo mayor a 0: ");
                scanf("%f",&vec[i].sueldo);

        }



}
}
