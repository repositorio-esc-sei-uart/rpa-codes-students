/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 16
Tema: Metodos de ordenamiento

Descripcion: Cargar un arreglo de 20 enteros no repetidos con valores aleatorios entre 0 y 50, y ordenar mediante método de selección directa de forma descendente.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Modulos
void saludodesiempre();
void mostrarvector(int V[], int L);
void ordenSeleccionDirecta(int V[], int L);
void generarVecAleatorio(int V[], int L);
//Definiciones fijas
#define  VECL 20

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    //Inicio
    saludodesiempre();
    //Entrada
    generarVecAleatorio(vec, VECL);
    //Calculo
    ordenSeleccionDirecta(vec, VECL);
    //Salida
    printf("El vector generado y ordenado es:");
    mostrarvector(vec, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar numeros de entre el 0 y 50 que no se repitan y los voy a ordenar de mayor a menor\n");
    printf("---------------\n");
}

void mostrarvector(int V[] , int L)
{
    int contador;
    printf("\n");
    for (contador = 0; contador < L; contador++)
    {
        if (contador == 5 || contador == 10 || contador == 15)
        {
            printf("\n");
        }
        printf("[ %d ]" , V[contador]);
    }
}

void ordenSeleccionDirecta(int V[], int L)
{
    int mayor, contlimit, contswap, aux;

    for (contlimit = 0; contlimit < L - 1; contlimit++)
    {
        mayor = contlimit;
        for (contswap = contlimit + 1; contswap < L; contswap++)
            if (V[contswap] > V[mayor])
            mayor = contswap;

        aux = V[contlimit];
        V[contlimit] = V[mayor];
        V[mayor] = aux;
    }
}

void generarVecAleatorio(int V[], int L)
{
    int rando, contador, band, check, copia;

    for (contador = 0; contador < L; contador++)
    {
        band = 0;
        while (band == 0)
        {
            rando = rand()%50;
            for (check = 19; check != -1; check--)
            {
                if (rando == V[check])
                    copia = 1;
            }
            if (copia == 0)
                band = 1;
            copia = 0;
        }
        V[contador] = rando;
    }
}
