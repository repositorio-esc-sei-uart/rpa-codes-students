/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 19
Tema: Arreglos multidimensionales (matrices)

Descripcion: Contar los elementos pares y los elementos impares de una matriz de enteros 4x4 cargada con aleatorios no repetidos.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  F 4
#define  C 4
//F = Fila y C = Columna
//Modulos
void saludodesiempre();
void mostrarmatriz(int M[F][C]);
void generarMatrizAleatoriaNoRepetida(int M[F][C]);
void contarYmostrarParesImpares(int M[F][C]);
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
    generarMatrizAleatoriaNoRepetida(matriz);
    //Calculo
    contarYmostrarParesImpares(matriz);
    //Salida
    mostrarmatriz(matriz);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar una matriz de 4 x 4 con aleatorios enteros no repetidos\ny contar sus pares e impares\n");
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

void generarMatrizAleatoriaNoRepetida(int M[F][C])
{
    int random ,contador1, contador2, contador3, contador4, band, copia;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
        {
            band = 0;
            while (band == 0)
            {
                random = rand()%100;
                    for (contador3 = 0; contador3 < F; contador3++)
                    {
                        for (contador4 = 0; contador4 < C; contador4++)
                        {
                            if (random == M[contador3][contador4])
                                copia = 1;
                        }
                    }
                    if (copia == 0)
                        band = 1;
                    if (copia == 1)
                        contador2--;
                    copia = 0;
            }
        M[contador1][contador2] = random;
        }
    }
}

void contarYmostrarParesImpares(int M[F][C])
{
    int contador1, contador2, pares, impares;
    pares = 0;
    impares = 0;

    for (contador1 = 0; contador1 < F; contador1++)
    {
        for (contador2 = 0; contador2 < C; contador2++)
            {
                if (M[contador1][contador2] % 2 == 0)
                    pares++;
                else
                    impares++;
            }
    }
    printf("La cantidad de numeros pares es de:  %d\n" , pares);
    printf("Y la cantidad de numeros impares es: %d\n\n" , impares);
}
