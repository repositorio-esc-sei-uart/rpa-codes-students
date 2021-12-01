/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 14
Tema: Arreglos unidimensionales

Descripcion: Cargar un vector con 20 números aleatorios con solo múltiplos de 3 y mostrarlo por pantalla.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Modulos
void saludodesiempre();
//Definiciones fijas
#define VECL 20
//VECL significa Vector Length o Vector Longitud
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    int random, contador, generacion, no3;
    //Inicializaciones
    contador = 0;
    generacion= 0;
    no3 = 0;
    //Inicio
    saludodesiempre();
    //Calculo
    while (contador < VECL)
    {
        random = rand()%(100);
        if (random % 3 == 0)
        {
        vec[contador] = random;
        contador++;
        }
        else
        no3++;
        generacion++;
    }
    //Salida
    printf("Se generaron un total de %d numeros\n" , generacion);
    printf("De los numeros generados %d no eran multiplos de 3\n" , no3);
    printf("Los numeros generados que fueron multiplos de 3 son:\n");
    for (contador = 0; contador < VECL; contador++)
        printf("[ %d ]" , vec[contador]);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar generar numeros aleatorios y darle los 20 primeros multiplos de 3\n");
    printf("---------------\n");
}
