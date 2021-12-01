/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 20
Tema: Pilas y colas con arreglos (estructuras estaticas)

Descripcion: Dada una matriz 10 x 10 cargada con números aleatorios entre -50 y 50.
Con estos valores crear dos colas:
1_ Cola1, que encole los valores positivos y cero,
2_ Cola2, que encole los valores negativos.
Muestre la cantidad de elementos almacenados de cada cola.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  SIZE 100
#define  F 10
#define  C 10
//Definiciones globales
int frente;
int fin;
//Modulos
void saludodesiempre();
void mostrarmatriz(int M[F][C]);
void generarMatrizAleatoria(int M[F][C]);
void pilaMenores(int M[F][C]);
void pilaMayores(int M[F][C]);
void agregarElemento(int cola[], int num);
int verificarlleno(int frente, int fin);
int verificarvacio(int frente, int fin);
void mostrarfila(int []);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int matriz[F][C];
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarMatrizAleatoria(matriz);
    //Calculo
    pilaMayores(matriz);
    printf("\n---------------\n");
    pilaMenores(matriz);
    printf("\n---------------\n");
    //Salida
    mostrarmatriz(matriz);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una matriz de 10x10 y llenarla de numeros aleatorios entre -50 y 50\ny colocar en filas los positivos y ceros y en otra los negativos\n");
    printf("---------------\n");
}

void mostrarmatriz(int M[F][C])
{
    int contador1, contador2;
    printf("La matriz compreta\n");
    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            printf("[ %d ]" , M[contador1][contador2]);

        printf("\n");
    }
}

void generarMatrizAleatoria(int M[F][C])
{
    int contador1, contador2;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            M[contador1][contador2] = 50-rand()%100;
    }
}

void pilaMenores (int M[F][C])
{
    int menores[SIZE];
    int num, contador1, contador2, bandera;
    int total = 0;
    frente = 0;
    fin = 0;
    printf("Fila de Menores\n");
    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
        {
            num = M[contador1][contador2];
            if(num < 0)
            {
                agregarElemento(menores, num);
                total++;
            }
        }
    }
    mostrarfila(menores);
    printf("\nHay un total de %d menores a 0\n" , total);
    bandera = verificarlleno(frente, fin);
    if(bandera == 1)
        printf("La fila se encuentra llena\n");
    else
        printf("La fila NO se encuentra llena\n");
    bandera = verificarvacio(frente, fin);
    if(bandera == 1)
        printf("La fila se encuentra vacia\n");
    else
        printf("La fila NO se encuentra vacia\n");
}

void pilaMayores (int M[F][C])
{
    int mayores[SIZE];
    int num, contador1, contador2, bandera;
    int total = 0;
    frente = 0;
    fin = 0;
    printf("Fila de Mayores\n");
    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
        {
            num = M[contador1][contador2];
            if(num >= 0)
            {
                agregarElemento(mayores, num);
                total++;
            }
        }
    }
    mostrarfila(mayores);
    printf("\nHay un total de %d mayores e iguales a 0\n" , total);
    bandera = verificarlleno(frente, fin);
    if(bandera == 1)
        printf("La fila se encuentra llena\n");
    else
        printf("La fila NO se encuentra llena\n");
    bandera = verificarvacio(frente, fin);
    if(bandera == 1)
        printf("La fila se encuentra vacia\n");
    else
        printf("La fila NO se encuentra vacia\n");
}

void agregarElemento(int cola[], int num)
{
    cola[fin] = num;
    fin++;
}

int verificarlleno(int frente, int fin)
{
    int bandera = 0;

    if(fin == SIZE)
        bandera = 1;

    return bandera;
}

int verificarvacio(int frente, int fin)
{
    int bandera = 0;

    if(frente == fin)
        bandera = 1;

    return bandera;
}

void mostrarfila(int fila[])
{
    int contador;

    for (frente = 0; frente < fin; frente++)
        printf("[ %d ]" , fila[frente]);
}
