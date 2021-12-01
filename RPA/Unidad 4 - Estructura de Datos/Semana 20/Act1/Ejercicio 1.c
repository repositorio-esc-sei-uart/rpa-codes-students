/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 20
Tema: Pilas y colas con arreglos (estructuras estaticas)

Descripcion: Dado un arreglo de 40 elementos cargado con valores aleatorios entre 1 y 100 no repetidos.
Con estos valores crear dos pilas:
1_ Pila1, que apile los valores menores o iguales a 50.
2_ Pila2, que apile los valores mayores a 50.
Muestre la cantidad de elementos almacenados en cada pila.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  SIZE 40
//Definiciones globales
int tope;
//Modulos
void saludodesiempre();
void mostrararreglo(int V[], int L);
void generarAleatorioNoRep(int V[], int L);
int verificarcopia(int V[], int aleatorio);
void pilaMenores(int V[], int L);
void pilaMayores(int V[], int L);
void push(int pila[], int num);
int verificarlleno(int tope);
int verificarvacio(int tope);
void mostrarpila(int pila[]);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int arreglo[SIZE];
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
    tope = 0;
    printf("Pila de Menores\n");
    for(contador = 0; contador<SIZE; contador++)
    {
        num = V[contador];
        if(num <= 50)
        {
            push(menores, num);
            total++;
        }
    }
    mostrarpila(menores);
    printf("\nHay un total de %d menores e iguales a 50\n" , total);
    bandera = verificarlleno(tope);
    if(bandera == 1)
        printf("La pila se encuentra llena\n");
    else
        printf("La pila NO se encuentra llena\n");
    bandera = verificarvacio(tope);
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
    tope = 0;
    printf("Pila de Mayores\n");
    for(contador = 0; contador<SIZE; contador++)
    {
        num = V[contador];
        if(num > 50)
        {
            push(mayores, num);
            total++;
        }
    }
    mostrarpila(mayores);
    printf("\nHay un total de %d mayores a 50\n" , total);
    bandera = verificarlleno(tope);
    if(bandera == 1)
        printf("La pila se encuentra llena\n");
    else
        printf("La pila NO se encuentra llena\n");
    bandera = verificarvacio(tope);
    if(bandera == 1)
        printf("La pila se encuentra vacia\n");
    else
        printf("La pila NO se encuentra vacia\n");
}

void push(int pila[], int num)
{
    pila[tope] = num;
    tope++;
}

int verificarlleno(int tope)
{
    int bandera = 0;

    if(tope == SIZE)
        bandera = 1;

    return bandera;
}

int verificarvacio(int tope)
{
    int bandera = 0;

    if(tope == 0)
        bandera = 1;

    return bandera;
}

void mostrarpila(int pila[])
{
    int contador;

    for (contador = tope-1; contador > -1; contador--)
        printf("[ %d ]\n" , pila[contador]);
}
