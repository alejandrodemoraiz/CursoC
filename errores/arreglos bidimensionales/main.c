#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

int main()
{
    int matriz[2][3];


    for(int i = 0; i<2; i++)
    {
        for ( int j = 0; j<3; j++)

        {

            printf(" digite un elemento de la matriz [%d] [%d]:  ",i+1,j+1);
            scanf("%d",&matriz[i][j]);


        }
        for(int i = 0; i<2; i++)
        {
            for ( int j = 0; j<3; j++)
            {

                printf("%d",matriz[i][j]);

            }



        }
        }
        return 0;
    }
