#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int sumarNumeros(int* pA, int* pB, int* resultado) 
{
    *resultado = *pA + *pB;
}
int restarNumeros(int* pA, int* pB, int* resultado)
{
    *resultado = *pA - *pB;
}
float dividirNumeros (int* pA, int* pB, float* resultado, char* msgError)
{
    if(*pB == 0)
    {
        printf("%s", msgError);
    }
    else
    {
        *resultado = *pA / *pB;
    }
}
int multiplicarNumeros (int* pA, int* pB, int* resultado)
{
    *resultado = *pA * *pB;
}

int utn_getNumber(int* pNumero, int maximo, int minimo, char* msg , char* msgError, int reintentos)
{
    int numero;
    while (reintentos > 0)
    {
        printf("%s", msg);    //Pido el numero
        scanf("%d", &numero);   //Lo guardo en la variable
        if(numero<= maximo && numero>= minimo) //Validar los datos ingresados
        {
            //BIEN. Accedo al casillero de memoria donde quiero guardar el valor de numero.
            break;
        }
        else
        {
            printf("%s", msgError);   // MAL. Imprimo el mensaje de error
        }
        reintentos --;

    }
       *pNumero = numero;
        if (reintentos == 0)
        {
            return 0;
        }
}