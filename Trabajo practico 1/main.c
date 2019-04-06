#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int a,b,x,y,suma,resta,producto;
    float division;
    int opcion;
    do
    {
        printf("\n1. Ingrese un numero: \n");
        printf("\n2. Ingrese el segundo numero: \n");
        printf("\n3. Calcular las operaciones");
        printf("\n4. Informar resultados");
        printf("\n5. Salir \n");
        utn_getNumber(&opcion, 5, 0,"Ingrese una opcion(1-5): ", "Error",5);

    switch(opcion) {
      case 1:
          utn_getNumber(&a, 100, 0,"Ingrese un numero: ", "Error",5);
      break;

      case 2:
          utn_getNumber(&b, 100, 0,"Ingrese un numero: ", "Error",5);
      break;

      case 3:
          sumarNumeros(&a, &b, &suma);
          restarNumeros(&a, &b, &resta);
          dividirNumeros (&a, &b, &division, "Error. No es posible dividir por 0");
          multiplicarNumeros (&a, &b, &producto);
      break;

      case 4:
      printf("\nLa suma de los numeros es %d", suma);
      printf("\nLa resta de los numeros es %d", resta);
      printf("\nLa division de los numeros es %.2f", division);
      printf("\nLa multiplicacion de los numeros es %d", producto);
      break;

      case 5:
      break;
    }
    }while(opcion != 5);

}
