/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 23
Tema:Manipulacion de variables mediante punteros

Descripcion: Rediseñar la solución del ejercicio 1 de la clase 20 con las versiones pop, push, pilavacia y pilallena vistas en esta clase
(con tope local a main y pasada por referencia a las operaciones).
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  SIZE 40
//Modulos
void saludodesiempre();
void mostrararreglo(int V[], int L);
void generarAleatorioNoRep(int V[], int L);
int verificarcopia(int V[], int aleatorio);
void pilaMenores(int V[], int L);
void pilaMayores(int V[], int L);
void push(int p[SIZE], int *tope, int elem);
int verificarlleno(int *tope);
int verificarvacio(int *tope);
void mostrarpila(int pila[], int tope);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int arreglo[SIZE];
    int tope;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarAleatorioNoRep(arreglo, SIZE);
    //Calculo
    pilaMenores(arreglo, SIZE);
    printf("\n---------------\n");
    pilaMayores(arreglo, SIZE);
    printf("\n---------------\n");
    //Salida
    mostrararreglo(arreglo, SIZE);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar un arreglo con numeros aleatorios entre 1 y 100 no repetidos y dividirlos\nen dos pilas una con los menores e iguales a 50 y el otro con mayores a 50\n");
    printf("---------------\n");
}

void mostrararreglo(int V[] , int L)
{
    int contador;
    printf("Arreglo completo\n");
    for (contador = 0; contador < L; contador++)
    {
        printf("[ %d ]" , V[contador]);
        if(contador == 9 || contador == 19 || contador == 29)
            printf("\n");
    }
}

void generarAleatorioNoRep(int V[], int L)
{
    int contador, rando, bandera;
    bandera = 0;

    for (contador = 0; contador < L; contador++)
    {
        rando = 1+rand()%100;
        bandera = verificarcopia(V, rando);
        if (bandera == 0)
            V[contador] = rando;
        else
            contador--;
    }
    bandera = 0;
}

int verificarcopia(int V[SIZE], int aleatorio)
{
    int contador, confirmacion;

    confirmacion = 0;

    for(contador = 0; contador < SIZE; contador++)
    {
        if(V[contador] == aleatorio)
                confirmacion = 1;
    }
    return confirmacion;
}

void pilaMenores (int V[], int L)
{
    int menores[SIZE];
    int num, contador, bandera;
    int total = 0;
    int tope = 0;
    printf("Pila de Menores\n");
    for(contador = 0; contador<SIZE; contador++)
    {
        num = V[contador];
        if(num <= 50)
        {
            push(menores, &tope, num);
            total++;
        }
    }
    mostrarpila(menores, tope);
    printf("\nHay un total de %d menores e iguales a 50\n" , total);
    bandera = verificarlleno(&tope);
    if(bandera == 1)
        printf("La pila se encuentra llena\n");
    else
        printf("La pila NO se encuentra llena\n");
    bandera = verificarvacio(&tope);
    if(bandera == 1)
        printf("La pila se encuentra vacia\n");
    else
        printf("La pila NO se encuentra vacia\n");
}

void pilaMayores (int V[], int L)
{
    int mayores[SIZE];
    int num, contador, bandera;
    int total = 0;
    int tope = 0;
    printf("Pila de Mayores\n");
    for(contador = 0; contador<SIZE; contador++)
    {
        num = V[contador];
        if(num > 50)
        {
            push(mayores, &tope, num);
            total++;
        }
    }
    mostrarpila(mayores, tope);
    printf("\nHay un total de %d mayores a 50\n" , total);
    bandera = verificarlleno(&tope);
    if(bandera == 1)
        printf("La pila se encuentra llena\n");
    else
        printf("La pila NO se encuentra llena\n");
    bandera = verificarvacio(&tope);
    if(bandera == 1)
        printf("La pila se encuentra vacia\n");
    else
        printf("La pila NO se encuentra vacia\n");
}

void push(int p[SIZE], int *tope, int elem)
{
    p[*tope]=elem;
    (*tope)++;
}

int verificarlleno(int *tope)
{
    int x = (*tope == SIZE)? 1: 0;
    return (x);
}

int verificarvacio(int *tope)
{
    int x = (*tope == 0)? 1: 0;
    return (x);
}

void mostrarpila(int pila[], int tope)
{
    int contador;

    for (contador = tope-1; contador > -1; contador--)
        printf("[ %d ]\n" , pila[contador]);
}
