/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 14
Tema: Arreglos unidimensionales

Descripcion: Cargar un vector con 20 números aleatorios entre 1 y 99. Mostrar el vector por pantalla y la cantidad de pares e impares resultaron.
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
    int random, par, impar, contador;
    //Inicializaciones
    par = 0;
    impar = 0;
    contador = 0;
    //Inicio
    saludodesiempre();
    //Calculo
    while (contador < VECL)
    {
        random = 1 + rand()%(99);
        if (random % 2 == 0)
            par++;
        else
            impar++;
        vec[contador] = random;
        contador++;
    }
    //Salida
    printf("Los numeros generados fueron:\n");
    for (contador = 0; contador < VECL; contador++)
        printf("[ %d ]" , vec[contador]);
    printf("\n");
    printf("Se genero un total de %d pares\n" , par);
    printf("Se genero un total de %d imppares" , impar);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a cargar 20 numeros aleatorios y decirle los pares e impares\n");
    printf("---------------\n");
}
