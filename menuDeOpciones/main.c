#include <stdio.h>
#include <stdlib.h>
//https://www.utnfravirtual.org.ar
int mostrarMenu();

int main()
{

    int seguir = 's';
    do{

        switch(mostrarMenu()){

        case 1:
            printf("opcion ingresar primer operando A = X\n",);
        break;
        case 2:
            printf("opcion Baja\n");
        break;
        case 3:
            printf("opcion Modificacion\n");
        break;
        case 4:
            printf("opcion Informar resultados\n");
        break;
        case 5:
            printf("opcion Salir\n");
            seguir = 'n';
        break;

        default: ("opcion invalida");



        }

        system("pause");

    }
    while(seguir == 's');
    return 0;
}

int mostrarMenu()
{
    int opcion;
    system("cls");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificacion\n");
    printf("4- informes\n");
    printf("5- salir\n");

    printf("ingrese opcion: ");
    scanf("%d",&opcion);
    // aca puede tener validaciones...\n

    return opcion;



}
