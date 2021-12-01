/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 24
Tema: Punteros y la memoria dinamica

Descripcion: Crear una matriz dinámica de 5x5 elementos enteros, cargarlos con valores aleatorios entre 0 y 50, y determinar la suma de la diagonal principal.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  F 5
#define  C 5
//F = Fila y C = Columna
//Modulos
void saludodesiempre();
void mostrarmatriz(int M[F][C]);
void generarMatrizAleatoria(int M[F][C]);
void sumarDiagonalMatriz(int M[F][C]);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int contador, contaux;
    int **matriz;
    //Inicializaciones
    matriz = (int **) malloc(F * sizeof(int *));
    for (contador = 0; contador < F; contador++)
        matriz[contador] = (int *) malloc(C * sizeof(int *));
    //Inicio
    saludodesiempre();
    //Entrada
    generarMatrizAleatoria(matriz);
    //Calculo
    sumarDiagonalMatriz(matriz);
    //Salida
    mostrarmatriz(matriz);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una matriz de 5 x 5 con aleatorios enteros de 0 a 50 y voy a sumar su diagonal\n");
    printf("---------------\n");
}

void mostrarmatriz(int M[F][C])
{
    int contador1, contador2;

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
            M[contador1][contador2] = rand()%50;
    }
}

void sumarDiagonalMatriz(int M[F][C])
{
    int suma, contador;

    for (contador = 0; contador < F; contador++)
    {
        suma = suma + M[contador][contador];
    }
    printf("La suma de la diagonal de la matriz es de %d\n\n" , suma);
}
