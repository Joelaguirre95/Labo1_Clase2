#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    float a;
    float b;
    float opcion;
    do
    {
        printf("\n1. Ingrese un numero: \n");
        printf("\n2. Ingrese el segundo numero: \n");
        printf("\n3. Calcular las operaciones");
        printf("\n4. Informar resultados");
        printf("\n5. Salir \n");

        do
        {
            printf("\n Indique una opcion(1-5)");
            scanf("%d", opcion);

        }while (opcion> 0 || opcion >5);

        switch(opcion)
        {
            case "1":
                printf("Ingrese un numero: ");
                scanf("%f", &a);
                break;
            case "2":
                printf("Ingrese segundo numero: ");
                scanf("%f", &b);
                break;
            case "3":
                sumarNumeros(&a, &b, resultado);
                restarNumeros(&a, &b, resultado);
                dividirNumeros(&a, &b, resultado, "Error. No se puede dividir por 0");
                multiplicarNumeros(&a, &b, resultado);
              //  factorialNumeros;
                break;
            case "4":
                printf("\nLa suma de los numeros es: ", resultado);
                printf("\nLa resta de los numeros es: ", resultado);
                printf("\nLa division de los numeros es: ", resultado);
                printf("\nLa multiplicacion de los numeros es: ", resultado);
        }
    }while(opcion != 5)
    return 0;
}
