#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int a,b,x,y,suma,resta,producto,factorial1,factorial2,opcion; 
    float division; //Declaro las variables a usar
    
    //Uso do para imprimir el menu la primera vez y que siga iterando hasta que el usuario lo desee
    do  
    {
        printf("\n               MENU CALCULADORA");
        printf("\n1. Ingrese un numero: ");
        printf("\n2. Ingrese el segundo numero: ");
        printf("\n3. Calcular las operaciones");
        printf("\n4. Informar resultados");
        printf("\n5. Salir \n");
        utn_getNumber(&opcion, 5, 0,"Ingrese una opcion(1-5): ", "Error",5); //Uso la funcion de la biblioteca para pedir la opcion

      switch(opcion) //Uso switch para cada opcion a elegir
      {
        case 1:
            utn_getNumber(&a, 100, 0,"Ingrese un numero: ", "Error",5); //Pido el primer numero
        break;

        case 2:
            utn_getNumber(&b, 100, 0,"Ingrese un numero: ", "Error",5);
            //Pido el segundo numero
        break;

        case 3: //Declaro las funciones para cada operacion
            sumarNumeros(&a, &b, &suma);
            restarNumeros(&a, &b, &resta);
            dividirNumeros (&a, &b, &division, "Error. No es posible dividir por 0");
            multiplicarNumeros (&a, &b, &producto);
            calcularFactorial(&a, &factorial1);
            calcularFactorial(&b, &factorial2);
        break;

        case 4: //Imprimo los resultados
        printf("\Los numeros ingresados son %d y %d", a, b);
        printf("\nLa suma de los numeros es %d", suma);
        printf("\nLa resta de los numeros es %d", resta);
        printf("\nLa division de los numeros es %.2f", division);
        printf("\nLa multiplicacion de los numeros es %d", producto);
        printf("\nEl factorial de A es %d y el de B es %d", factorial1, factorial2);
        break;

        default: //Opcion para salir del menu
        break;
      }
    } while(opcion != 5);
}
