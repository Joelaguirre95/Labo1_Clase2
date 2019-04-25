#ifndef PUBLICIDAD_H_INCLUDED
#define PUBLICIDAD_H_INCLUDED

typedef struct
{
    int isEmpty;
    int idPublicidad;
    char cuit [20];
    int dias;
    char archivo[200];
    int idPantalla;
}Publicidad;

#endif // PUBLICIDAD_H_INCLUDED
