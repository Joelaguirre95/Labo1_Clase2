#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "Pantalla.h"
#include "Publicidad.h"
#include <string.h>
#define PANTALLAS_LEN 5

int main()
{
    int menu;
    Pantalla arrayPantalla[PANTALLAS_LEN];
    pan_Init(arrayPantalla, PANTALLAS_LEN);

    //pan_ListarPantallas(arrayPantalla, PANTALLAS_LEN);

    do{
        utn_getEntero(&menu,2,"Ingrese una opcion: ", "Error",1,5);
        switch(menu)
        {
            case 1:
            pan_altaPantalla(arrayPantalla, PANTALLAS_LEN);
            break;
            case 2:
            pan_ListarPantallas(arrayPantalla, PANTALLAS_LEN);
            break;


        }
    }while(menu>=5);





    return 0;
}
