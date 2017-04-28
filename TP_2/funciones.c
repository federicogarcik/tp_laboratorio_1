#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int obtenerEspacioLibre(EPersona lista[], int capacidad)
{
    int i;
    for(i = 0; i < capacidad; i++)
    {
        if(lista[i].estado == 0)
        {
            break;
        }
    }
    return i;
}

void estadoLibre(EPersona lista[], int capacidad, int bandera)
{
    if(bandera ==0)
    {
        int i;
        for(i = 0; i < (capacidad+1); i++)
        {
            lista[i].estado = 0;
        }
    }
    else
    {

    }

}

void cargarDatos(EPersona lista[], int indice)
{
    printf("Introdusca el dni\n");
    scanf("%d", &lista[indice].dni);
    printf("Introdusca la edad\n");
    scanf("%d", &lista[indice].edad);
    printf("Introdusca el nombre\n");
    fflush(stdin);
    gets(lista[indice].nombre);

    lista[indice].estado = 1;
}

int buscarPorDni(EPersona lista[], int dni, int capacidad)
{
    int banderaDni = 0;
    int i;
    for(i = 0; i < capacidad; i++)
    {
        if(lista[i].dni == dni)
        {
            banderaDni = 1;
            break;
        }
        if(banderaDni == 0)
        {
            printf("ERROR: dni inexistente\n");
        }
    }
    return i;
}

void darDeBaja(EPersona lista[], int indice)
{
    lista[indice].estado = 0;
    printf("Se ha dado de baja a %s DNI: %d\n", lista[indice].nombre, lista[indice].dni);
}

void ordenarPorNombre(EPersona lista[], int capacidad, int banderaEstado)
{
    if(banderaEstado != 0)
    {
        EPersona personaAux;
        int i;
        int l;

        for(i=0; i < capacidad; i++)
        {
            for(l = i+1; l < capacidad; l++)
            {
                if(strcmp(lista[i].nombre, lista[l].nombre)> 0)
                {
                    personaAux  = lista[i];
                    lista[i] = lista[l];
                    lista[l] = personaAux;
                }
            }
        }
    }
    else
    {
        printf("ERROR:falta ingresar los datos!!!\n");
    }
}

void mostrarLista(EPersona lista[], int capacidad, int banderaEstado)
{
    if(banderaEstado != 0)
    {
        int i;

        for(i = 0; i < capacidad; i++)
        {
            if(lista[i].estado == 1)
            {
                printf("%s\t", lista[i].nombre);
                printf("%d\t", lista[i].edad);
                printf("%d\t", lista[i].estado);
                printf("%d\n", lista[i].dni);
            }
        }
    }
    else
    {

    }
}

void graficoDeEdades(EPersona lista[], int capacidad, int banderaEstado)
{
    if(banderaEstado != 0)
    {
        int i;
        for(i = 0; i < capacidad; i++)
        {
            if(lista[i].estado == 1)
            {
                if(lista[i].edad < 18)
                {
                    printf("*\n");
                }
                else
                {
                    if(lista[i].edad > 18 && lista[i].edad < 35)
                    {
                        printf("\t*\n");
                    }
                    else
                    {
                        printf("\t\t*\n");
                    }
                }
            }
        }
        printf("<18\t19-35\t<35\n");
    }
    else
    {
        printf("ERROR:falta ingresar los datos!!!\n");
    }
}
