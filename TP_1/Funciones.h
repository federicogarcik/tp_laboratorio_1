int ingresarEntero();

/** \brief Le pide al usuario ingresar un numero y lo regresa
 *
 * \param
 * \param
 * \return El numero ingresado
 *
 */

void sumar(int banderaUno, int banderaDos, int numeroUno, int numeroDos);

/** \brief Se asegura que hallan ingresado los operando y si lo fueron los suma y muestra el resultado
 *
 * \param la bandera del primer operando
 * \param la bandera del segundo operando
 * \param el primer operando
 * \param el segundo operando
 * \return
 *
 */

void restar(int banderaUno, int banderaDos, int numeroUno, int numeroDos);

/** \brief Se asegura que hallan ingresado los operando y si lo fueron los resta y muestra el resultado
 *
 * \param la bandera del primer operando
 * \param la bandera del segundo operando
 * \param el primer operando
 * \param el segundo operando
 * \return
 *
 */

void dividir(int banderaUno, int banderaDos, int numeroUno, int numeroDos);

/** \brief se asegura que hallan ingresado los operando y si lo fueron los divide y muestra el resultado
 *
 * \param la bandera del primer operando
 * \param la bandera del segundo operando
 * \param el primer operando
 * \param el segundo operando
 * \return
 *
 */

void multiplicar(int banderaUno, int banderaDos, int numeroUno, int numeroDos);

/** \brief se asegura que hallan ingresado los operando y si lo fueron los multiplica y muestra el resultado
 *
 * \param la bandera del primer operando
 * \param la bandera del segundo operando
 * \param el primer operando
 * \param el segundo operando
 * \return
 *
 */

void factorial(int banderaUno, int numeroUno);

/** \brief
 *
 * \param la bandera del primer operando
 * \param el primer operando
 * \return
 *
 */



int ingresarEntero()
{
    int numero;
    scanf("%d", &numero);
    return numero;
}

void sumar(int banderaUno, int banderaDos, int numeroUno, int numeroDos)
{
    if(banderaUno < 1 || banderaDos < 1)
    {
        printf("ERROR: ingrese los operando\n");
    }
    else
    {
        int resultado;
        resultado = numeroUno + numeroDos;
        printf("el resultado de la suma es: %d\n", resultado);
    }
}

void restar(int banderaUno, int banderaDos, int numeroUno, int numeroDos)
{
    if(banderaUno < 1 || banderaDos < 1)
    {
        printf("ERROR: ingrese los operando\n");
    }
    else
    {
        int resultado;
        resultado = numeroUno - numeroDos;
        printf("el resultado de la resta es: %d\n", resultado);
    }
}

void dividir(int banderaUno, int banderaDos, int numeroUno, int numeroDos)
{
    if(banderaUno < 1 || banderaDos < 1)
    {
        printf("ERROR: ingrese los operando\n");
    }
    else
    {
        if(numeroDos == 0)
        {
            printf("ERROR: no se puede dividir por cero\n");
        }
        else
        {
            int resultado;
            resultado = numeroUno / numeroDos;
            printf("el resultado de la division es: %d\n", resultado);
        }
    }


}

void multiplicar(int banderaUno, int banderaDos, int numeroUno, int numeroDos)
{
    if(banderaUno < 1 || banderaDos < 1)
    {
        printf("ERROR: ingrese los operando\n");
    }
    else
    {
        int resultado;
        resultado = numeroUno * numeroDos;
        printf("el resultado de la multiplicacion es %d\n", resultado);
    }


}

void factorial(int banderaUno, int numeroUno)
{
    if(banderaUno < 1)
    {
        printf("ERROR: ingrese los operando\n");
    }
    else
    {
        if(numeroUno == 0)
        {
            printf("el factorial de %d es 1\n", numeroUno);
        }
        else
        {
            if(numeroUno < 0)
            {
                printf("ERROR ingrese un numero positivo\n");
            }
            else
            {
                int resultado = 1;
                int i;
                for(i = numeroUno; i>0; i--)
                {
                    resultado = resultado * i;
                }
                printf("el factorial de %d es %d\n", numeroUno, resultado);
            }
        }
    }
}


