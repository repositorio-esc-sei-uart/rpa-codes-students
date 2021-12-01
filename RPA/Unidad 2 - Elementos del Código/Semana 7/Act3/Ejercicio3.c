/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Dadas las variables inicializadas A=2, B=10 y C=40, Realice un programa
con el siguiente intercambio:
    B que intercambie con A
    C que intercambie con B
    A que intercambie con C
Autor: Pablo Laime
Año: 2021
*******************************************************************************/

#include <stdio.h>

int main ()
{
    //Defino las variables
    int a, b, c, aux;

    //Asigno el valor
    a = 2;
    b = 10;
    c= 40;

    //Enseño cuales son los valores de las variables
    printf("Hola, sabiendo que los valores de las variables son: ");
    printf("\nA = %d", a);
    printf("\nB = %d", b);
    printf("\nC = %d", c);

    //Muestro el intercambio que se va a realizar
    printf ("\n");
    printf ("\nVamos a hacer los siguientes intercambios:");
    printf ("\nB intercambia con A");
    printf ("\nC intercambia con B");
    printf ("\nA intercambia con C");

    //Con ayuda de un auxiliar voy a realizar el intercambio
    aux = a;
    a = b;
    b = c;
    c = aux;

    //Finalmente, muestro las variables con los valores ya intercambiados
    printf ("\n");
    printf ("\nEntonces, con los valores intercambiados las variables quedarian asi: ");
    printf ("\nA = %d", a);
    printf ("\nB = %d", b);
    printf ("\nC = %d", c);

    printf ("\nFin de la sesion");

    return 0;
}
