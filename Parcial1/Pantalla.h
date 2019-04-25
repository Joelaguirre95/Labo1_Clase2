#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

typedef struct
{
  char nombre[50];
  char direccion[200];
  float precio;
  int tipo;
  int isEmpty;
  int idPantalla;
}Pantalla;


/** \brief Pone los arrays en vacio
 * \param int* pArray puntero a la primera posicion del array
 * \param int limite len array
 * \return 0 todo bien -1 error
 */
int pan_Init(Pantalla* arrayPantalla, int limite);
int pan_ListarPantallas(Pantalla* arrayPantalla, int limite);
int pan_altaPantalla(Pantalla* arrayPantalla, int limite);


#endif // PANTALLA_H_INCLUDED
