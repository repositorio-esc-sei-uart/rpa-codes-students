/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 19
Tema: Arreglos multidimensionales (matrices)

Descripcion: Cargar una matriz 5 x 5 con valores flotantes aleatorios entre 0.00 y 0.99.
Luego, calcular la suma de todos los elementos de la matriz y la suma de su diagonal principal.
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
void mostrarmatriz(float M[F][C]);
void generarMatrizAleatoria(float M[F][C]);
void sumarMatriz(float M[F][C]);
void sumarDiagonalMatriz(float M[F][C]);
int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    float matriz[F][C];
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarMatrizAleatoria(matriz);
    //Calculo
    sumarMatriz(matriz);
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
    printf("Hola, mucho gusto, ahora voy a generar una matriz de 5 x 4 con aleatorios flotantes de 0 a 0,99 y\nvoy a sumar la matriz completa y su diagonal tambien\n");
    printf("---------------\n");
}

void mostrarmatriz(float M[F][C])
{
    int contador1, contador2;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            printf("[ %f ]" , M[contador1][contador2]);

        printf("\n");
    }
}

void generarMatrizAleatoria(float M[F][C])
{
    int contador1, contador2;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            M[contador1][contador2] = (rand()%100)/100.0;
    }
}

void sumarMatriz(float M[F][C])
{
    int contador1, contador2;
    float suma;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            {
                suma = suma + M[contador1][contador2];
            }
    }
    printf("La suma total de toda la matriz es de %f\n" , suma);
}

void sumarDiagonalMatriz(float M[F][C])
{
    int contador;
    float suma;

    for (contador = 0; contador < F; contador++)
    {
        suma = suma + M[contador][contador];
    }
    printf("La suma de la diagonal de la matriz es de %f\n\n" , suma);
}
