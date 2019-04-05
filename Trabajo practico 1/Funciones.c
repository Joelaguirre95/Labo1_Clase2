#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

float sumarNumeros(float* pA, float* pB, float *pResultado)
{
    int resultado;
    resultado = *pA + *pB;
    *pResultado = resultado;
}
float restarNumeros (float* pA, float* pB, float *pResultado)
{
    int resultado;
    resultado = *pA - *pB;
    *pResultado = resultado;
}
float dividirNumeros (float *pA, float *pB, float *pResultado, char* msgError)
{
    int resultado;
    if(*pB == 0)
    {
        printf(*msgError);
    }
    else
    {
        resultado = *pA / *pB;
        *pResultado = resultado;
    }
}
float multiplicarNumeros (float *pA, float *pB, float *pResultado)
{
    int resultado;
    resultado = *pA * *pB;
    *pResultado = resultado;
}
