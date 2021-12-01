/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 10
Tema: Sentencia iterativa for

Descripcion: Calcular el promedio de 20 números flotantes aleatorios entre 0 y 1.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    //Definiciones
    int cantidad;
    float sum, rando, prom;
    srand(time(0));
    //Inicio
    printf("Hola, mucho gusto, voy a generarle 20 numeros aleatorios y darle su promedio\n");
    printf("---------------\n");
    //Calculo (Utilizo la cantidad 1 a mas 21 para poder reutilizarlo como contador para mostrar cuantos numeros va el algoritmo)
    for (cantidad = 1; cantidad < 21; cantidad++)
    {
        rando = (rand()%101)/100.0;
        printf("Este es el numero %d: %f\n" , cantidad , rando);
        sum = sum + rando;
    }
    prom = sum / 20;
    //Salida
    printf("---------------\n");
    printf("El promedio de los numeros dados es de %f" , prom);
    //Fin
}
