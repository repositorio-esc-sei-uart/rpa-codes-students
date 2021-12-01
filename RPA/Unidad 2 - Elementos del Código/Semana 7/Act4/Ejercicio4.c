/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Obtener dos caracteres car1 y car2, intercambiarlos y mostrarlos
Autor: Pablo Laime
Año: 2021
*******************************************************************************/
#include <stdio.h>

int main ()
{
    //Defino las variables
    char car1, car2, aux;

    //Leo la entrada de datos
    printf ("Ingrese dos caracteres, los cuales luego seran intercambiados");
    printf ("\nIngrese el caracter 1 = ");
    scanf ("%c", &car1);
    fflush (stdin);

    printf ("\nIngrese el caracter 2 = ");
    scanf ("%c", &car2);
    fflush (stdin);

    //Realizo el intercambio con un auxiliar
    aux = car1;
    car1 = car2;
    car2 = aux;

    //Muestro los resultados del intercambio
    printf ("\nYa intercambiados nos quedarian asi");
    printf ("\nCaracter 1 = %c", car1);
    printf ("\nCaracter 2 = %c", car2);

    return 0;
}

