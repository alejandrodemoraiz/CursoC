#include <stdio.h>
// vamos a guardar una direccion, un strean, una palabra
int main()
{
char nombre [50];

printf(" digite su nombre:");
//scanf("%s",nombre);
gets(nombre);

printf(" su nombre es %s", nombre);





    return 0;
}