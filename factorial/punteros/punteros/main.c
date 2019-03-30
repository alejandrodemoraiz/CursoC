#include <stdio.h>
#include <stdlib.h>

void unaFuncion (int* puntero);
int main()
{
    int x;

    unaFuncion(&x);



    return 0;
}


void unaFuncion (int* puntero)
{

    *puntero = 34;

    printf("X vale %d",puntero);


}
