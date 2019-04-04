#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h""
#define  CANTIDAD 3

int main(void)
{
    int array [CANTIDAD];
    int max;
    int min;
    utn_getArrayInt(&array,CANTIDAD,"numero","error",0,100,3);
    float promedio;
    int i;
    for(i=0;i<CANTIDAD;i++)
    {
    printf("%d\n",array[i]);
    }
    calcularPromedio(array,CANTIDAD,&promedio);
    calcularMaximo(array,CANTIDAD,&max);
   // calcularMinimo(array,CANTIDAD,&min);
    printf("el promedio es: %.2f\n",promedio);
    printf("El maximo es: %d\n", max);

    return 0;
}
