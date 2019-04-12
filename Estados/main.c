#include <stdio.h>
#include <stdlib.h>


#define VACIO 0
#define OCUPADO 1
typedef struct
{

    int legajo;
    int edad;
    float sueldo;
    char nombre [100];
    char sexo;
    int estado;




} Eempleados;

void mostrarEmpleado(Eempleados empleado[], int i);
void mostrarEmpleados(Eempleados empleado[], int tam);
int cargarEmpleado(Eempleados empleado[], int tam);
int buscarVacio(Eempleados empleado[], int tam);

int main()
{
    int opc;
    Eempleados nomina[3];




    for(int i = 0; i <3; i++)
    {
        nomina[i].estado = VACIO; //marco el hecho de que los espacios estan vacios y por enede habilitados para llenar


    }
    do
    {

        printf("\n1- Dar de alta a un empleado: \n");
        printf("2- Mostra empleados: \n");
        printf("3- Ordenar empleado: \n");
        printf("4- Salir: \n");

        scanf("%d", &opc);

        switch(opc)
        {

        case 1:
            if(cargarEmpleado(nomina,3)==-1)
            {
                printf("No hay mas espacio..");
            }
            else
            {
                printf("Empleado generado.");
            }

            break;


        case 2:
            mostrarEmpleados(nomina,3);
            break;


        case 3:
            ordenarEstructura(nomina,3);
            break;


        case 4:
            printf("Usted a salido con exito");
            break;







        }


    }
    while(opc !=4);

    return 0;
}

void mostrarEmpleado(Eempleados empleado[], int i)
{

    printf("Legajo : %d > Nombre : %s > Sexo : %c > Sueldo : %.2f\n", empleado[i].legajo, empleado[i].nombre, empleado[i].sexo, empleado[i].sueldo);
}

void mostrarEmpleados(Eempleados empleados[], int tam)
{
    for(int i = 0 ; i < tam ; i++)
    {
        if(empleados[i].estado==OCUPADO)
        {
            printf("Legajo : %d > Nombre : %s > Sexo : %c > Sueldo : %.2f\n", empleados[i].legajo, empleados[i].nombre, empleados[i].sexo, empleados[i].sueldo);
        }

    }
}
void ordenarEstructura(Eempleados empleado[], int tam)
{
    Eempleados auxEmpleado;

    for(int i = 0 ; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(empleado[i].legajo>empleado[j].legajo)
            {
                auxEmpleado=empleado[i];
                empleado[i]=empleado[j];
                empleado[j]=auxEmpleado;
            }
        }
    }
}

int cargarEmpleado(Eempleados empleado[], int tam) //donde lo cargo , tamanio en este caso lo cargo en la "nomina" con tiene un tamanio 3
{
    char auxString[100];
    int index = buscarVacio(empleado,tam); // usando la funcion vemos si hay espacio para meter un empleado, ese espacio queda guardado en index y con ese index hacemos un if...si index queda en -1 significa que no hay espacio.
    if(index!=-1)
    {
        printf("Ingresar legajo: ");
        scanf("%d", &empleado[index].legajo);

        while(empleado[index].legajo<1000 || empleado[index].legajo>9999)
        {
            printf("Error, ingresar legajo: ");
            scanf("%d", &empleado[index].legajo);
        }

        printf("Ingresar nombre del empleado: ");
        __fpurge(stdin);
        gets(auxString);

        while(strlen(auxString)>19)
        {
            printf("Error, ingresar nombre del empleado: ");
            gets(auxString);
        }

        strcpy(empleado[index].nombre, auxString);

        printf("Ingresar sexo del empleado sea f o m : ");
        __fpurge(stdin);
        scanf("%c", &empleado[index].sexo);

        while(empleado[index].sexo!='f' && empleado[index].sexo!='m')
        {
            printf("Error, ingresar sexo del empleado sea f o m: ");
            scanf("%c", &empleado[index].sexo);
        }

        printf("Ingresar sueldo del empleado: ");
        __fpurge(stdin);
        scanf("%f", &empleado[index].sueldo);

        while(empleado[index].sueldo<0)
        {
            printf("Ingresar sueldo del empleado: ");
            scanf("%f", &empleado[index].sueldo);
        }

        empleado[index].estado=OCUPADO; // luego de cargar todos notifico que ahora el espacio esta ocupado, estos estados funcionan como los flag.

    }
    else
    {
        printf("No hay espacio en la memoria...\n");
        system("cls");
    }

    return index;


}

int buscarVacio(Eempleados empleado[], int tam)
{
    int indice=-1;
    for(int i=0; i<tam; i++)
    {
        if(empleado[i].estado==VACIO)
        {
            indice=i;
            break;
        }
    }

    return indice;
}
