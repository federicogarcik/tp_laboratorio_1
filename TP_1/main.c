#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int numeroUno = 0;
    int numeroDos = 0;
    int banderaUno = 0;
    int banderaDos = 0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n", numeroUno);
        printf("2- Ingresar 2do operando (B=%d)\n", numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            numeroUno = ingresarEntero(printf("ingrese el primer operando:"));
            banderaUno = 1;
            break;
        case 2:
            numeroDos = ingresarEntero(printf("ingrese el segundo operando:"));
            banderaDos = 1;
            break;
        case 3:
            sumar(banderaUno, banderaDos, numeroUno, numeroDos);
            break;
        case 4:
            restar(banderaUno, banderaDos, numeroUno, numeroDos);
            break;
        case 5:
            dividir(banderaUno, banderaDos, numeroUno, numeroDos);
        case 6:
            multiplicar(banderaUno, banderaDos, numeroUno, numeroDos);
            break;
        case 7:
            factorial(banderaUno, numeroUno);
            break;
        case 8:
            sumar(banderaUno, banderaDos, numeroUno, numeroDos);
            restar(banderaUno, banderaDos, numeroUno, numeroDos);
            dividir(banderaUno, banderaDos, numeroUno, numeroDos);
            multiplicar(banderaUno, banderaDos, numeroUno, numeroDos);
            factorial(banderaUno, numeroUno);
            break;
        case 9:
            seguir = 'n';
            break;
        }


    }


    return 0;
}
