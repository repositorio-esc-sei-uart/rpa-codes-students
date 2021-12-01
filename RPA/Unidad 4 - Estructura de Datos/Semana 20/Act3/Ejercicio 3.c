/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 20
Tema: Pilas y colas con arreglos (estructuras estaticas)

Descripcion: Dada una pila cargada con números flotantes, desapile y pase cada elemento al contenido de una cola.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  SIZE 20
//Definiciones globales
int tope, frente, fin;
//Modulos
void saludodesiempre();
void mostrarPila(float pila[]);
void mostrarFila(float fila[]);
void generarAleatorio(float pila[]);
void intercambio(float pila[], float fila[]);
float pop (float p[SIZE]);
int verificarPilalleno(int tope);
int verificarPilavacio(int tope);
int verificarColalleno(int frente, int fin);
int verificarColavacio(int frente, int fin);

int main ()
{
    //Inicio
    srand(time(0));//Seed by time
    //Definiciones
    float pila[SIZE];
    float fila[SIZE];
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarAleatorio(pila);
    //Calculo
    intercambio(pila, fila);
    //Salida
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una pila con flotantes aleatorios y voy a pasarlos a una fila\n");
    printf("---------------\n");
}

void mostrarPila(float pila[])
{
    int contador;
    for (contador = 0; contador < SIZE; contador++)
        printf("[ %f ]\n" , pila[contador]);
}

void mostrarFila(float fila[])
{
    int contador;

    for (frente = 1; frente < fin; frente++)
        printf("[ %f ]" , fila[frente]);
}

void generarAleatorio(float pila[])
{
    int contador, bandera;
    float rando;

    bandera = 0;
    bandera = verificarPilavacio(tope);
    if(bandera == 1)
        printf("La pila esta vacia\n");

    for (contador = 0; contador < SIZE; contador++)
    {
        rando = (rand()%100)/100.0;
        pila[tope] = rando;
        tope++;
    }
    mostrarPila(pila);
    bandera = 0;
    bandera = verificarPilalleno(tope);
    if(bandera == 1)
        printf("La pila esta llena\n");
    printf("---------------\n");
}

void intercambio(float pila[], float fila[])
{
    int bandera;
    float num;
    frente = 0;
    fin = 0;

    bandera = 0;
    bandera = verificarColavacio(frente, fin);
    if(bandera == 1)
        printf("La cola esta vacia\n");

    for(fin = 1+tope; frente < fin+1; frente++)
    {
        num = pop(pila);
        fila[frente] = num;
    }
    mostrarFila(fila);
    bandera = 0;
    bandera = verificarColalleno(frente, fin);
    if(bandera == 1)
        printf("La cola esta llena\n");
    printf("---------------\n");
    bandera = 0;
    bandera = verificarPilavacio(tope);
    if(bandera == 1)
        printf("La pila esta vacia\n");
}

float pop(float p[SIZE])
{
    float aux = 0;

    aux = p[tope-1];
    p[tope-1] = 0;
    tope--;

    return (aux);
}

int verificarPilalleno(int tope)
{
    int bandera = 0;

    if(tope == SIZE)
        bandera = 1;

    return bandera;
}

int verificarPilavacio(int tope)
{
    int bandera = 0;

    if(tope == 0)
        bandera = 1;

    return bandera;
}


int verificarColalleno(int frente, int fin)
{
    int bandera = 0;

    if(fin == SIZE)
        bandera = 1;

    return bandera;
}

int verificarColavacio(int frente, int fin)
{
    int bandera = 0;

    if(frente == fin)
        bandera = 1;

    return bandera;
}
