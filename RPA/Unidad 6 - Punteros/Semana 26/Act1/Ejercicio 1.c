/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 26
Tema: Pilas y colas dinamicas. otras listas

Descripcion: Dada una pila cargada con 20 enteros aleatorios entre 10 y 100, desapilar sus elementos y apilarlos en otras dos pilas:
una pila de elementos pares y otra pila de elementos impares.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  MAX 20
//Struct
struct pila
{
    int num;
    struct pila *sig;
};
typedef struct pila Tpila;
typedef struct pila *TPpila;
//Modulos
void saludodesiempre();
Tpila *crear(int aux);
void push(TPpila *P, int rand);
Tpila pop(TPpila *P);
int vacio(TPpila P);

int main()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int rando, contador, pase;
    Tpila aux;
    TPpila pila = NULL;
    TPpila pilapar = NULL;
    TPpila pilaimpar = NULL;
    //Inicio
    saludodesiempre();
    //Entrada
    for (contador = 0; contador < MAX; contador++)
    {
        rando = 10+rand()%91;
        push(&pila, rando);
    }
    printf("Mostrando pila inicial...\n");
    printf("--------------\n");
    //Calculo
    while(!vacio(pila))
    {
        aux = pop(&pila);
        pase = aux.num;
        printf("      %d\n", aux.num);
        if(pase % 2 == 0)
            push(&pilapar, pase);
        else
            push(&pilaimpar, pase);
    }
    printf("--------------\n");
    //Salida
    printf("Mostrando pila par...\n");
    printf("--------------\n");
    while(!vacio(pilapar))
    {
        aux = pop(&pilapar);
        printf("      %d\n", aux.num);
    }
    printf("--------------\n");

    printf("Mostrando pila impar...\n");
    printf("--------------\n");
    while(!vacio(pilaimpar))
    {
        aux = pop(&pilaimpar);
        printf("      %d\n", aux.num);
    }
    printf("--------------\n");
    //Fin
    printf("\n");
    return 0;
}

void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una pila con aleatorios enteros y\ndividir los pares e impares en dos pilas distintas\n");
    printf("---------------\n");
}

Tpila *crear(int aux)
{
    Tpila *nuevo = (Tpila *)malloc(sizeof(Tpila));

    nuevo->num = aux;
    nuevo->sig = NULL;

    return nuevo;
}

void push(TPpila *P, int rand)
{
    Tpila *pila = crear(rand);

    if( !vacio(*P) )
    {
        pila->sig = *P;
    }

    *P = pila;
}

Tpila pop(TPpila *P)
{

    Tpila *aux = NULL;

    aux = *P;
    *P = aux->sig;

    aux->sig = NULL;

    return *aux;
}

int vacio(TPpila P)
{
    return P == NULL;
}
