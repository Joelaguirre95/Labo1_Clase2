#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int utn_getNumber(int* pNumero, int maximo, int minimo, char* msg , char* msgError, int reintentos);
int sumarNumeros(int* pA, int* pB, int* resultado);
int restarNumeros(int* pA, int* pB, int* resultado);
float dividirNumeros (int* pA, int* pB, float* resultado, char* msgError);
int multiplicarNumeros (int* pA, int* pB, int* resultado);
int calcularFactorial(int* pA, int* resultado);

#endif // FUNCIONES_H_INCLUDED
