/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Codificar su algoritmo propuesto del ejercicio 2 de la clase 01.
Autor: Pablo Laime
Año: 2021
*******************************************************************************/

#include <stdio.h>

int main()
{
    //Defino las variables
    int num1, num2;
    int suma, resta, multiplicacion, modulo;
    float division;

    //Leo la entrada de datos
    printf ("Ingrese dos numeros enteros ")
    printf ("Ingrese un numero entero ");
    scanf ("%d"), &num1;


    printf ("Por favor ingrese otro numero entero ");
    scanf ("%d", &num2);

    //Asigno una expresion a cada variable
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    modulo = num1 % num2;

    //Muestro los resultados de las operaciones
    printf ("La suma de los numeros ingresados es: %d "), suma;
    printf ("\nLa resta de los numeros ingresados es: %d "), resta;
    printf ("\nLa multiplicacion de los numeros ingresados es: %d "), multiplicacion;
    printf ("\nLa division de los numeros ingresados es: %f "), division;
    printf ("\nEl modulo de los numeros ingresados es: %d "), modulo;

    ///No se por que cuando muestro los resultados me salen numeros que no tienen nada que ver con los que ingreso
    return 0;

}

