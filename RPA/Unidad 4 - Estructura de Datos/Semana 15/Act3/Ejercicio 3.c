/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 15
Tema: Arreglos como parametros de funciones

Descripcion:  Cargar un vector con 10 enteros aleatorios y luego copiarlos en otro vector.
Mostrar el vector original y el vector copia.
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
void mostrarvector(int V[], int L);
void copiarVector(int V1[], int V2[]);
//Definiciones fijas
#define VECL 10

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vecORIG[VECL];
    int vecCOPI[VECL];
    //Inicio
    saludodesiempre();
    //Entrada
    cargarAleatorios(vecORIG);
    //Calculo
    copiarVector(vecORIG, vecCOPI);
    //Salida
    printf("Los numeros generados fueron: ");
    mostrarvector(vecORIG, VECL);
    printf("\n");
    printf("Copia del vector original es: ");
    mostrarvector(vecCOPI, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
//Entrada: Vetor 1 y Vector 2. Salida: Vector 2 con numeros de vector 1
void copiarVector(int V1[], int V2[])
{
    int contador;
    for (contador = 0; contador < VECL; contador++)
        V2[contador] = V1[contador];
}
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
    printf("Hola, mucho gusto, ahora voy a generar 10 numeros y los voy a copiar en otro vector \n");
    printf("---------------\n");
}
