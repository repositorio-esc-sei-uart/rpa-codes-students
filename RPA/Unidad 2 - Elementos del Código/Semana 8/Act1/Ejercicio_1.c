/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 08
Tema: Sentencia de Selección if-else

Descripcion: Obtener un entero por teclado y decir si es un positivo par, negativo par,
positivo impar, negativo impar, ó cero
Autor: Pablo Laime
Año: 2021
*******************************************************************************/

#include <stdio.h>

int main ()
{
    int num=0;

    printf ("Ingrese un numero entero ");
    scanf ("%d", &num);

    if (num == 0)
        printf ("El numero ingresado es cero");
    else
        if (num > 0)
            if ((num % 2)== 0)
                printf ("El numero ingresado es un positivo par");
            else
                printf ("El numero ingresado es un positivo impar");
        else
            if ((num % 2)== 0)
                printf ("El numero ingresado es un negativo par");
            else
                printf ("El numero ingresado es un negativo impar");
    return 0;
}
