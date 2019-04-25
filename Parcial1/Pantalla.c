#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "Pantalla.h"
#include "Publicidad.h"
#include <string.h>
#define LCD 1
#define LED 0

static int buscarLugarLibre(Pantalla* arrayPantalla, int limite);
static int proximoId();

int pan_Init(Pantalla* arrayPantalla, int limite)
{
    int ret=-1;
    int i;
    if(arrayPantalla != NULL && limite>0)
    {
        ret=0;
        for(i=0;limite>i;i++)
        {
            arrayPantalla[i].isEmpty=1;
        }
    }
    return ret;
}
int pan_ListarPantallas(Pantalla* arrayPantalla, int limite)
{
    int ret=-1;
    int i;
        if(arrayPantalla != NULL && limite>0)
    {
        ret=0;
        for(i=0;limite<i;i++)
        {
           if(!arrayPantalla[i].isEmpty)
           {
            printf("Nombre: %s \nDireccion: %s \nPrecio: %.2f \nTipo: %d \nID: %d",arrayPantalla[i].nombre,arrayPantalla[i].direccion,arrayPantalla[i].precio,arrayPantalla[i].tipo,arrayPantalla[i].idPantalla);
           }
        }
    }
    return ret;
}

int pan_altaPantalla(Pantalla* arrayPantalla, int limite)
{
    int ret=-1;
    int i;
    char auxNombre[50];
    char auxDireccion[200];
    float auxPrecio;
    int auxTipo;
    printf("hola0");
    if(arrayPantalla != NULL && limite>0)
    {
    printf("hola1");
        i=buscarLugarLibre(arrayPantalla, limite);
        if(i>=0)
        {
            printf("hola2");
            if(!utn_getLetras(auxNombre,50,2,"Ingrese un nombre: ", "Error. Eso no es un nombre"))
            {
                if(!utn_getLetrasYNumeros(auxDireccion,200,"Ingrese una direccion: "))
                {
                    if(!utn_getFloat(&auxPrecio,2,"Ingrese el precio: ", "Error",0,999999))
                    {
                        if(!utn_getEntero(&auxTipo,2,"Ingrese tipo (1-LCD, 0-LED): ","Error",0,1))
                        {
                            ret=0;
                            strcpy(arrayPantalla[i].nombre, auxNombre);
                            strcpy(arrayPantalla[i].direccion, auxDireccion);
                            arrayPantalla[i].precio=auxPrecio;
                            arrayPantalla[i].tipo=auxTipo;
                            arrayPantalla[i].idPantalla= proximoId();
                            arrayPantalla[i].isEmpty = 0;
                            printf("El ID de la nueva pantalla es %d", arrayPantalla[i].idPantalla);
                        }
                        else{
                        ret=-3;
                        }
                    }
                }
            }
        }
        ret = -2;
    }
    return ret;
}

static int buscarLugarLibre(Pantalla* arrayPantalla, int limite)
{
    int ret=-1;
    int i;
    if(arrayPantalla != NULL && limite>0)
    {
        for(i=0;i<limite;i++)
        {
           if(arrayPantalla[i].isEmpty==1)
           {
                ret=i;
                break;
           }
        }
    }
    return ret;
}
static int proximoId()
{
    static int proximoId=0;
    proximoId++;
    return proximoId;
}

