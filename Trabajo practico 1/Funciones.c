#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

//Declaro los punteros donde voy a guardar las variables que ingresa el usuario y su respectivo resultado para la operacion
int sumarNumeros(int* pA, int* pB, int* resultado) {
    *resultado = *pA + *pB;
}

//Declaro los punteros donde voy a guardar las variables que ingresa el usuario y su respectivo resultado para la operacion
int restarNumeros(int* pA, int* pB, int* resultado) {
    *resultado = *pA - *pB;
}

//Declaro los punteros donde voy a guardar las variables que ingresa el usuario y su respectivo resultado para la operacion
float dividirNumeros (int* pA, int* pB, float* resultado, char* msgError) {
    if(*pB == 0) {
      //Imprimo el mensaje de error porque no se puede dividir por 0
      printf("%s", msgError); 
    } else {
      *resultado = *pA / *pB;
    }
}

//Declaro los punteros donde voy a guardar las variables que ingresa el usuario y su respectivo resultado para la operacion
int multiplicarNumeros (int* pA, int* pB, int* resultado) {
    *resultado = *pA * *pB;
}

//Declaro los punteros donde voy a guardar las variables que ingresa el usuario y su respectivo resultado para la operacion
int calcularFactorial(int* pA, int* resultado) {
  int i, factorial = 1;
  for(i=1; i <= *pA; i++) {
    factorial = factorial * i;
  }
  *resultado = factorial;
}

int utn_getNumber(int* pNumero, int maximo, int minimo, char* msg , char* msgError, int reintentos) {
    int numero;
    while (reintentos > 0)
    {
        printf("%s", msg);    //Pido el numero
        scanf("%d", &numero);   //Lo guardo en la variable
        //Validar los datos ingresados
        if (numero<= maximo && numero>= minimo) {
          //BIEN. Accedo al casillero de memoria donde quiero guardar el valor de numero.
          break;
        } else {
          // MAL. Imprimo el mensaje de error
          printf("%s", msgError);  
        }
        reintentos --;
    }
    *pNumero = numero;
    if (reintentos == 0) {
        return 0;
    }
}