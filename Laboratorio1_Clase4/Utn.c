#include <stdio.h>
#include <stdlib.h>

void pruebita(void)
{
    printf("Hola mundo desde utn \n");

}

int utn_getNumber(int* pNumero, int maximo, int minimo, char* msg , char* msgError, int reintentos)
{
    int numero;
    while (reintentos > 0)
    {
        printf("%s", msg);    //Pido el numero
        scanf("%d", &numero);   //Lo guardo en la variable
        if(numero< maximo && numero> minimo) //Validar los datos ingresados
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
