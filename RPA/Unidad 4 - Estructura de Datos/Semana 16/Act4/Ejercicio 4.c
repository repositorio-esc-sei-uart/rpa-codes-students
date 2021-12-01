/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 16
Tema: Metodos de ordenamiento

Descripcion: Cargar un arreglo de 20 enteros con valores aleatorios entre 1 y 100,
y ordenar mediante método inserción directa pero solo un intervalo específico de posiciones del vector.
Diseñe la función void ordeninserción(int v[MAXV], int posini, int posfin) para ordenar una porción del vector entre las posiciones posini y posfin.
Verificar que el intervalo sea dentro de los límites del tamaño del vector.
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
void ordeninsercion(int V[], int posini, int posfin);
//Definiciones variables
int menormayor;
//Definiciones fijas
#define  VECL 20

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int vec[VECL];
    int posicionini, posicionfin, aux;
    //Inicio
    menormayor = -1;
    saludodesiempre();
    //Entrada
    generarVecAleatorio(vec, VECL);
    printf("Estos son los numeros generados:");
    mostrarvector(vec, VECL);
    printf("\n");
    //Calculo
    while (posicionini < 0 || posicionini > 19)
    {
    printf("¿Desde que punto desea ordenarlos? (Enre el 0 y el 19) ");
    scanf("%d" , &posicionini);
    if (posicionini < 0 || posicionini > 19)
        printf("ERROR:El numero ingresado esta fuera de los rangos dados");
    printf("\n");
    }

    while (posicionfin < 0 || posicionfin > 19)
    {
    printf("¿y donde desea detener el proceso? (Enre el 0 y el 19) ");
    scanf("%d" , &posicionfin);
    if (posicionfin < 0 || posicionfin > 19)
        printf("ERROR:El numero ingresado esta fuera de los rangos dados");
    printf("\n");
    }
    if (posicionini > posicionfin)
    {
        printf("Ya que la posicion inicial es mayor que la final se intercambiaron los valores");
        aux = posicionfin;
        posicionfin = posicionini;
        posicionini = aux;
    }
    while (menormayor != 0 && menormayor != 1)
    {
        printf("Si desea ordenarlo de menor a mayor ingrese 0\n");
        printf("Si desea ordenarlo de mayor a menor ingrese 1");
        printf("\n");
        scanf("%d" , &menormayor);
        if(menormayor != 0 && menormayor != 1)
            printf("ERROR:El numero ingresado esta fuera de los rangos dados");
    }
    printf("\n");

    ordeninsercion(vec, posicionini, posicionfin);
    //Salida
    printf("El vector ordenado es:");
    mostrarvector(vec, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a generar 20 numeros aleatorios y le pedire desde que punto desea ordenarlo\n");
    printf("---------------\n");
}

void mostrarvector(int V[] , int L)
{
    int contador;
    printf("\n");
    for (contador = 0; contador < L; contador++)
    {
        if (contador == 5 || contador == 10 || contador == 15)
        {
            printf("\n");
        }
        printf("[ %d ]" , V[contador]);
    }
}

void ordeninsercion(int V[], int posini, int posfin)
{
    int masomenos, contlimit, contswap, aux;

    printf("\n");

    if (menormayor == 1)
    {
        for (contlimit = posini; contlimit < posfin - 1; contlimit++)
        {
            masomenos = contlimit;
            for (contswap = contlimit + 1; contswap < posfin; contswap++)
                if (V[contswap] > V[masomenos])
                masomenos = contswap;

            aux = V[contlimit];
            V[contlimit] = V[masomenos];
            V[masomenos] = aux;
        }
    }
    else
    {
        for (contlimit = posini; contlimit < posfin - 1; contlimit++)
        {
            masomenos= contlimit;
            for (contswap = contlimit + 1; contswap < posfin; contswap++)
                if (V[contswap] < V[masomenos])
                masomenos = contswap;

            aux = V[contlimit];
            V[contlimit] = V[masomenos];
            V[masomenos] = aux;
        }
    }
}

void generarVecAleatorio(int V[], int L)
{
    int rando, contador;

    for (contador = 0; contador < L; contador++)
    {
        rando = 1+rand()%100;
        V[contador] = rando;
    }
}
