/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 18
Tema: Metodos basicos de busqueda

Descripcion: Cargar 2 vectores:
1_ un vector vec con 50 (VECL) elementos aleatorios entre 0 y 100.
2_ un vector fibo con 12 (VECF) números de la serie fibonacci.
Se pide buscar en el vector vec si existen los fibonacci que están cargados en el vector fibo, con cualquier método de búsqueda.
Mostrar los vectores con diferentes tamaños con la función void mostrar(int v[], int tama); el parámetro v debe especificarse sin tamaño.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Modulos
void saludodesiempre();
void mostrarvector(int V[], int L);
void generarFibonacci(int F[], int L);
void generarVecAleatorio(int V[], int L);
int contarcantidad(int V[], int F[]);
//Definiciones fijas
#define  VECL 50
#define  VECF 12

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    int fibo[VECF];
    int repetidos;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarVecAleatorio(vec, VECL);
    generarFibonacci(fibo, VECF);
    //Calculo
    repetidos = contarcantidad(vec, fibo);
    //Salida
    printf("La cantidad de repetidos entre los vectores es de %d\n" , repetidos);
    printf("---------------\n");
    printf("Vector Aleatorio\n");
    mostrarvector(vec, VECL);
    printf("\n---------------\n");
    printf("Vector Fibonacci\n");
    mostrarvector(fibo, VECF);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar un vector aleatorio y contar\ncuantos numeros se repiten con los primeros 12 numeros de la serie Fibonacci\n");
    printf("---------------\n");
}

void mostrarvector(int V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
    {
        printf("[ %d ]" , V[contador]);
        if(L == 50)
        {
            if(contador == 9 || contador == 19 || contador == 29 || contador == 39)
                printf("\n");
        }
    }
}

void generarFibonacci(int F[], int L)
{
    int contador;
    F[0] = 0;
    F[1] = 1;

    for(contador = 2; contador < VECF; contador++)
        F[contador] = F[contador - 1] + F[contador - 2];
}

void generarVecAleatorio(int V[], int L)
{
    int contador, rando;

    for (contador = 0; contador < L; contador++)
    {
        rando = rand()%100;
        V[contador] = rando;
    }
}

int contarcantidad(int V[VECL], int F[VECF])
{
    int contador, cant, comparacion;

    cant = 0;

    for(contador = 0; contador < VECF; contador++)
    {
        if(contador != 1)
        {
            for(comparacion = 0; comparacion < VECL; comparacion++)
            {
                if(V[comparacion] == F[contador])
                    cant++;
            }
        }
    }
    return cant;
}
