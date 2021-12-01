/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 11
Tema: Sentencias iterativas while y do-while

Descripcion: Generar una serie de números aleatorios comprendidos entre 1 y 100 mientras que se obtenga 20 pares.
Mostrar por pantalla los aleatorios pares y la cantidad total de aleatorios generados.
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
    int rando, par, total, totalpar;
    //Inicializaciones
    par = 0;
    total = 0;
    totalpar = 1;
    //Inicio
    printf("Ejercicio 2 (Version while)\n");
    printf("---------------\n");
    printf("Hola, mucho gusto, ahora voy a generar una serie de numeros aleatorios hasta conseguir 20 pares\n");
    printf("---------------\n");
    printf("Lista de pares generados\n");
    printf("\n");
    while (par < 20)
    {
        rando = 1+rand()%100;
        if (rando % 2 == 0)
        {
            par++;
            printf("Par numero %d: [%d]\t" , totalpar , rando);
            if (par % 5 == 0)
            printf("\n");
            totalpar++;
        }
        total++;
    }
    //Salida
    printf("---------------\n");
    printf("Ya se generaron [%d] numeros pares de un total de [%d] numeros generados en total" , par , total);
    //Fin
}
