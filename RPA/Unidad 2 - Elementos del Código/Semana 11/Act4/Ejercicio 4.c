/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 11
Tema: Sentencias iterativas while y do-while

Descripcion: Implementar la solución diseñada del ejercicio 4 de la clase 6 (algoritmo de un juego).
Crear un algoritmo que permita adivinar un número.
El algoritmo debe generar un número aleatorio del 1 al 60.
El usuario solo tendrá 10 intentos para adivinar.
El algoritmo va pidiendo números al usuario y va respondiendo si el número a adivinar es mayor o menor que el introducido a modo de pistas, y cuántos intentos le quedan.
El algoritmo termina cuando se acierta el número y decir en cuantos intentos lo logró.
Si se llega al limite de 10 intentos y no adivina, mostrar el número aleatorio y un mensaje de que perdió el juego.
Autor: Angel Alvarez
Año: 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    //Definiciones
    int num, rando, vidas, victoria;
    //Inicializaciones
    vidas = 10;
    victoria = 0;
    //Inicio
    printf("Ejercicio 4\n");
    printf("Hola, mucho gusto, quiero jugar un juego, voy a pensar en un numero del 1 al 60 y tiene que adivinar cual es\n");
    printf("---------------\n");
    printf("Primer intento, buena suerte\n");
    rando = 1+rand()%60;
    //Trampa
    //printf("[El numero es %d]\n" , rando);
    //Entrada
    while (vidas > 0 && victoria != 1)
    {
        printf("Le quedan %d vidas\n" , vidas);
        scanf("%d" , &num);
        if (num == rando)
        {
            victoria++;
        }
        else
        {
            vidas--;
            if (num > rando)
            {
                printf("El numero que busca es menor\n");
            }
            else
            {
                printf("El numero que busca es mayor\n");
            }
        }
        printf("---------------\n");
    }
    if (victoria == 1)
    {
        printf("\t    ¡FELICIDADES!\n");
        printf("Adivino el numero y le quedaron %d vidas" , vidas);
    }
    else
    {
        printf("Que pena, se quedo sin vidas\n");
        printf("El numero era %d" , rando);
    }
}
