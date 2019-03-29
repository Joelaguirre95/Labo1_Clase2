#include <stdio.h>
#include <stdlib.h>
#include "Utn.h"

int main()
{
    int a;
    printf("Hello world!\n");
    pruebita();
    utn_getNumber(&a, 100, 0, "Ingrese numero: ", "Error. ", 3);
    printf("%d",a);
    return 0;
}
