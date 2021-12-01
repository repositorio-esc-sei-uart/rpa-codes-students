/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 18
Tema: Metodos basicos de busqueda

Descripcion: Cargar un vector de 20 enteros aleatorios entre 0 y 40 no repetidos y ordenados.
Utilice el método de búsqueda apropiado para asegurarse que cada elemento que se carga al vector no existe.
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
int verificarcopia(int V[], int aleatorio);
//Definiciones fijas
#define  VECL 20

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    generarVecAleatorio(vec, VECL);
    //Calculo
    //Salida
    printf("El vector es:\n");
    mostrarvector(vec, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar un vector de 20 enteros no repetidos\n");
    printf("---------------\n");
}

void mostrarvector(int V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
    {
        printf("[ %d ]" , V[contador]);
        if(contador == 9)
            printf("\n");
    }
}

void generarVecAleatorio(int V[], int L)
{
    int contador, rando, bandera;
    bandera = 0;

    for (contador = 0; contador < L; contador++)
    {
        rando = rand()%40;
        bandera = verificarcopia(V, rando);
        if (bandera == 0)
            V[contador] = rando;
        else
            contador--;
    }
    bandera = 0;
}

int verificarcopia(int V[VECL], int aleatorio)
{
    int contador, confirmacion;

    confirmacion = 0;

    for(contador = 0; contador < VECL; contador++)
    {
        if(V[contador] == aleatorio)
                confirmacion = 1;
    }
    return confirmacion;
}
