#include <stdio.h>

int main()
{
    char a = 'e';  // 1byte 0, 255  --%c 
    short b = -15; // 2 bytes: -128 127 --%i
    int c = 1024; // equivale a 2 bytes.. rango - 32768 .. 32767 --%i
    unsigned int d = 128; // pesa 2 bytes Rango 0, 65535; solo enteros -- %i
    long e = 123456; // pesa 4 bytes --- %li
    float f = 15.678; // pesa 4 bytes -- % f o para calcular desimales es %.2f o %.3f
    double m = 1132545.44646; // pesa 8bytes -- %lf
    printf(" el dato es %.lf", m); 



 
    return 0;
}