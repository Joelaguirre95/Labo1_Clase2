#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getString(char *pResultado,char *msg,char *msgError,int minimo,int maximo,int reintentos)

{
    char bufferStr[4096];
    do
    {
        printf(msg);
        scanf("%s", bufferStr);
        if(bufferStr <= 0 || bufferStr >= 100)
        {
            printf(msgError);
        }
        reintentos--;
    }while(reintentos == 0);

    fgets(bufferStr,sizeof(bufferStr),stdin);
    bufferStr[strlen(bufferStr)-1] = '\0';

}

int isValidIntNumber (char* cadena)
{

    int retorno;
    int i = 0;
    if(cadena[i] == '-')
    {
        i++;
    }
    for(;cadena[i] != '\0';i++)
    {
        if(cadena[i] < '0' || cadena[i] > '9')
        {
            retorno = 0;
            break;
        }
    }
    return retorno;

}

int getNumber(int *resultado,char *msg,char *msgError,int minimo,int maximo,int reintentos)
{
    int retorno = -1;
    char bufferStr[4096];
    int bufferInt;

    if( resultado != NULL &&
        reintentos >= 0) //FALTAN
    {
        if(!getString(bufferStr,msg,msgError,1,6,3) &&
            isValidIntNumber(bufferStr))
        {
            bufferInt = atoi(bufferStr);
            if(bufferInt >= minimo && bufferInt <= maximo)
            {
                retorno = 0;
                *resultado = bufferInt;
            }
        }
    }
    return retorno;
}
