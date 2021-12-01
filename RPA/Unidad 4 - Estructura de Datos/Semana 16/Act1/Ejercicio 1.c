/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 16
Tema: Metodos de ordenamiento

Descripcion: Cargar un arreglo de 20 flotantes con valores aleatorios entre 0.00 y 0.99, y ordenar mediante método burbuja de forma ascendente.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Modulos
void saludodesiempre();
void mostrarvector(float V[], int L);
void ordenBurbuja(float V[], int L);
void generarVecAleatorio(float V[], int L);
//Definiciones fijas
#define  VECL 20

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    float vec[VECL];
    //Inicio
    saludodesiempre();
    //Entrada
    generarVecAleatorio(vec, VECL);
    //Calculo
    ordenBurbuja(vec, VECL);
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
    printf("Hola, mucho gusto, ahora voy a generar 20 numeros entre el 0 y el 0.99 y los voy a ordenar de manera ascendente\n");
    printf("---------------\n");
}

void mostrarvector(float V[] , int L)
{
    int contador;
    printf("\n");
    for (contador = 0; contador < L; contador++)
    {
        if (contador == 5 || contador == 10 || contador == 15)
        {
            printf("\n");
        }
        printf("[ %f ]" , V[contador]);
    }
}

void ordenBurbuja(float V[], int L)
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

void generarVecAleatorio(float V[], int L)
{
    int contador;
    float rando;

    for (contador = 0; contador < L; contador++)
    {
        rando = (rand()%100)/100.0;
        V[contador] = rando;
    }
}
