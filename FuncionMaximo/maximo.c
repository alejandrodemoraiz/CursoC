int obtenerMaximo(int a, int b, int c)
{
    int maximo;

    if( a > b && a > c)
    {
        maximo = a;
    }
    else if(b >= a && b>c)
        {

            maximo =b;
        }
    else
    {
        maximo =c;
    }



    return maximo;
    }







