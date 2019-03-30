#include <stdio.h>
#include <stdlib.h>

int getInt(int* puntero, int veces, char* mes);

int main()
{
    int x = 100;
    int flagX;
    char mensaje[20]= {"pepe"};

   flagX = getInt(&x, 3, mensaje);

   if(flagX == 1){
    printf("X vale %d\n", x);
   }
   else{
    printf("No se pudo cargar la variable");
   }



    return 0;
}

int getInt(int* puntero, int veces, char* mes){

    int num;
    int todoOK;
    int contador = 0;

    printf("%s", mes);
    scanf("%d", &num);

    while( num <= 0){

            printf("Error. Reingrese un numero positivo: ");
            scanf("%d", &num);
            contador++;

            if(contador == veces){
                todoOK = 0;
                break;
            }
    }

    if( contador < 3){
        *puntero = num;
        todoOK = 1;
    }

    return todoOK;

}



