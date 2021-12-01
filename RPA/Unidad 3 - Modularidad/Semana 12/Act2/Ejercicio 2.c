/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 12
Tema: Funciones en C

Descripcion: Diseñar una función denominada [aleatorios] que muestre una serie 30 de números aleatorios entre 1 y 99, y calcule el promedio.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void saludodesiempre();
float aleatorios();

int main ()
{
    //Inicio
    saludodesiempre();
    //Calculo
    float promedio = aleatorios();
    //Salida
    printf("---------------\n");
    printf("El promedio de los 30 numeros de de %f" , promedio);
    //Fin
    return 0;
}
//Modulos
float aleatorios()
{
    srand(time(0));
    //Definiciones
    int rando, sum, cantidad;
    float prom;
    //calculo
    for (cantidad = 1; cantidad < 31; cantidad++)
    {
        rando = 1+rand()%99;
        printf("%d numero aleatorio: %d\n" , cantidad , rando);
        sum = sum + rando;
    }
    prom = sum / 30;
    return prom;
}

void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar 30 numeros aleatorios y decirle el promedio\n");
    printf("---------------\n");
}
