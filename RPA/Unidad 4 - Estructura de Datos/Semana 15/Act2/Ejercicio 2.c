/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 15
Tema: Arreglos como parametros de funciones

Descripcion:  Cargar un vector con 15 enteros aleatorios y obtenga la sumatoria de todos los elementos del vector mediante función.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Modulos
void saludodesiempre();
void cargarAleatorios(int V[]);
int sumarVector(int V[]);
void mostrarvector(int V[], int L);
//Definiciones fijas
#define VECL 15

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    //Inicio
    saludodesiempre();
    //Entrada
    cargarAleatorios(vec);
    //Calculo
    int suma = sumarVector(vec);
    //Salida
    printf("Los numeros generados fueron: ");
    mostrarvector(vec, VECL);
    printf("\n");
    printf("y su sumatoria es %d" , suma);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
//Entrada: Vector sin numeros. Salida Vector con numeros aleatorios
void cargarAleatorios(int V[])
{
    int random, contador;
    contador = 0;
    while (contador < VECL)
    {
        random = rand()%(100);
        V[contador] = random;
        contador++;
    }
}
//Entrada: Vector. Salida: Sumatoria
int sumarVector(int V[])
{
    int contador, num, res;
    res = 0;
    for (contador = 0; contador < VECL; contador++)
    {
        num = V[contador];
        res = res + num;
    }
    return res;
}
//Modulo para mostrar vectores
void mostrarvector(int V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("[ %d ]" , V[contador]);
}
//Saludo
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar 15 numeros enteros y darle su sumatoia \n");
    printf("---------------\n");
}
