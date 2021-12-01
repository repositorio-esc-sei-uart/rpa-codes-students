/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 18
Tema: Metodos basicos de busqueda

Descripcion: Cargar un vector de 20 enteros aleatorios entre 0 y 40, y determinar cuántas veces se repite un número en particular.
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
void generarVecAleatorio(int V[], int L);
int contarcantidad(int V[], int clave);
//Definiciones fijas
#define  VECL 20

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    int num, cantidad;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarVecAleatorio(vec, VECL);
    mostrarvector(vec, VECL);
    printf("\nPor favor, digame un numero: ");
    scanf("%d" , &num);
    //Calculo
    cantidad = contarcantidad(vec, num);
    //Salida
    printf("El numero %d se encuentra %d veces en el vector" , num , cantidad);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar 20 numeros aleatorios y le voy a pedir uno para contar cuantos hay\n");
    printf("---------------\n");
}

void mostrarvector(int V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("[ %d ]" , V[contador]);
}

int contarcantidad(int V[VECL], int clave)
{
    int contador, cant;

    cant = 0;

    for(contador = 0; (contador < VECL); contador++)
    {
        if(V[contador] == clave)
            cant++;
    }
    return cant;
}

void generarVecAleatorio(int V[], int L)
{
    int contador, rando;

    for (contador = 0; contador < L; contador++)
    {
        rando = rand()%40;
        V[contador] = rando;
    }
}
