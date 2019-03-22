#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;
    int maximo;
    int minimo;
    int flag = 0;

    do{
        printf("Ingrese un numero:"); //pido el numero
        scanf("%d", &numero); //guardo el numero en la variable
        if (numero > maximo || flag == 0) //condicion para tomar el maximo
        {
            maximo = numero;
        }
        if (numero < minimo || flag == 0) //condicion para tomar el minimo
        {
            minimo = numero;
            flag = 1; //para que solo valide cuando el numero es menor o mayor que el que ya tiene cargada la variable
        }
    }while(!(numero == -1)); //para que deje de iterar
    printf("El maximo es %d", maximo);
    printf("\nEl minimo es %d", minimo); //\n para bajar un renglon
    return 0;
}

