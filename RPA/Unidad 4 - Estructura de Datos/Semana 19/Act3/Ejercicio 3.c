/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 19
Tema: Arreglos multidimensionales (matrices)

Descripcion: Buscar un valor entero en una matriz de aleatorios de tamaño NxN.
Utilice búsqueda secuencial fila por fila.
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
void buscarEnMatriz(int M[F][C], int num);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int matriz[F][C];
    int buscar, cantidad;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarMatrizAleatoria(matriz);
    mostrarmatriz(matriz);
    printf("\n¿Que numero desea buscar en la matriz? ");
    scanf("%d" , &buscar);
    //Calculo
    buscarEnMatriz(matriz, buscar);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una matriz de 5 x 5 con aleatorios enteros y\nle voy a pedir un numero para verificar si se encuentra\n");
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

void buscarEnMatriz(int M[F][C], int num)
{
    int positivos, aux, contador1, contador2;
    positivos = 0;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            {
                if (M[contador1][contador2] == num)
                {
                    positivos++;
                }
            }
    }
    printf("\nSe encontro un total de %d veces el numero %d" , positivos, num);
}
