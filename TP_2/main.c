#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define A 20


int main()
{
    char seguir='s';
    int opcion=0;
    EPersona listado[A];
    int banderaEstado = 0;
    int espacioLibre;
    int personaBaja;
    int dni;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                estadoLibre(listado, A, banderaEstado);
                espacioLibre = obtenerEspacioLibre(listado, A);
                cargarDatos(listado, espacioLibre);
                banderaEstado = 1;
                break;
            case 2:
                printf("introdusca el dni de la persona a ser dada de baja:\n ");
                scanf("%d", &dni);
                personaBaja = buscarPorDni(listado, dni, A);
                darDeBaja(listado, personaBaja);
                break;
            case 3:
                ordenarPorNombre(listado, A, banderaEstado);
                mostrarLista(listado, A, banderaEstado);
                break;
            case 4:
                graficoDeEdades(listado, A, banderaEstado);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
