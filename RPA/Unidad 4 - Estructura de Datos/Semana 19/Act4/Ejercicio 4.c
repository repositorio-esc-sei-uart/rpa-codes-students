/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 19
Tema: Arreglos multidimensionales (matrices)

Descripcion: Cargar una matriz 10x5 con valores enteros aleatorios entre 0 y 99.
Luego cargar un vector con los valores máximos de cada fila de la matriz y mostrar por pantalla.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  VECL 5
#define  F 10
#define  C 5
//F = Fila y C = Columna
//Modulos
void saludodesiempre();
void mostrarvector(int V[], int L);
void mostrarmatriz(int M[F][C]);
void generarMatrizAleatoria(int M[F][C]);
void cargarVector(int V[], int M[F][C]);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vector[VECL];
    int matriz[F][C];
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarMatrizAleatoria(matriz);
    mostrarmatriz(matriz);
    //Calculo
    cargarVector(vector, matriz);
    //Salida
    mostrarvector(vector, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una matriz de 10 x 5 con aleatorios enteros y\nle voy a generar un vector con los numeros mas grandes de cada fila\n");
    printf("---------------\n");
}

void mostrarvector(int V[] , int L)
{
    printf("---------------\n");
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("[ %d ]" , V[contador]);
    printf("\n---------------\n");
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
            M[contador1][contador2] = rand()%99;
    }
}

void cargarVector(int V[], int M[F][C])
{
    int contador1, contador2, mayor;

    for (contador2 = 0; contador2 < C; contador2++)
    {
        mayor = 0;
        for (contador1 = 0; contador1 < F; contador1++)
            {
                if (mayor < M[contador1][contador2])
                    mayor = M[contador1][contador2];
            }
        V[contador2] = mayor;
    }
}
