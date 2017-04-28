#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param capacidad: el tamaño del array
 * @return el primer indice disponible
 */

 int obtenerEspacioLibre(EPersona lista[], int capacidad);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * \param capacidad: el tamaño del array
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni, int capacidad);

/** \brief pone el estado de los indices del array en ceroa
 *
 * \param lista: el array
 * \param capacidad: el tamaño del array
 * \param bandera: bandera que indica si ya se han puesto los estados en 0
 */

void estadoLibre(EPersona lista[], int capacidad, int bandera);

/** \brief  carga los datos de una persona
 *
 * \param lista: el array
 * \param indice: indice del array en donde se va a cargar los datos
 *
 */

void cargarDatos(EPersona lista[], int indice);

/** \brief da de baja a la persona correspondiente al indice
 *
 * \param el indice de la persona a ser dada de baja
 *
 */

void darDeBaja(EPersona lista[], int indice);

/** \brief ordena a las personas por orden alfabetico
 *
 * \param lista: el array
 * \param indice: indice del array en donde se va a cargar los datos
 *
 */

void ordenarPorNombre(EPersona lista[], int capacidad, int banderaEstado);

/** \brief  muestra la lista de personas
 *
 * \param lista: el array
 * \param capacidad: el tamaño del array
 *
 */

void mostrarLista(EPersona lista[], int capacidad, int banderaEstado);

/** \brief  hace un grafico de edades segun las edades
 *
 * \param lista: el array
 * \param capacidad: el tamaño del array
 *
 */

void graficoDeEdades(EPersona lista[], int capacidad, int banderaEstado);



#endif // FUNCIONES_H_INCLUDED
