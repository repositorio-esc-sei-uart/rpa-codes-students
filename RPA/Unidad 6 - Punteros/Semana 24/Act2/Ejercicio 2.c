/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 24
Tema: Punteros y la memoria dinamica

Descripcion: Cargar un vector dinámico de 20 números aleatorios entre 10.0 y 30.0, y ordenarlo.
Utilice aritmética de puntero para cargar y mostrar el vector.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
//Definiciones fijas
#define  VECL 20
//Modulos
void saludodesiempre();
void cargarVector(float V[]);
void mostrarVector(float V[]);
void ordenar(float V[], int L);

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    float vec[VECL];
    float *Pvec;
    int contador;
    //Inicializaciones
    Pvec = vec;
    //Inicio
    saludodesiempre();
    //Entrada
    cargarVector(Pvec);
    //Calculo
    ordenar(Pvec, VECL);
    //Salida
    mostrarVector(vec);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a cargar un vector aleatorio, ordenarlo y mostrarlo\n");
    printf("---------------\n");
}

void cargarVector(float V[])
{
    int contador;

    for (contador = 0; contador < VECL; contador++)
        *(V + contador) = 10+(rand()%2000)/100.0;
}

void mostrarVector(float V[])
{
    int contador;

    for (contador = 0; contador < VECL; contador++)
    {
        printf(" %f ", *(V + contador) );
        if(contador == 9)
            printf("\n");
    }
}

void ordenar(float V[], int L)
{
    int contlimit, contswap;
    float aux;

    for (contlimit = 1; contlimit < L; contlimit++)
    {
        for (contswap = 0; contswap < L - contlimit; contswap++)
            if (V[contswap] > V[contswap+1])
        {
            aux = V[contswap];
            V[contswap] = V[contswap + 1];
            V[contswap + 1] = aux;
        }
    }
}
