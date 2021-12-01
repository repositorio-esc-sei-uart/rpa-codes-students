/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 16
Tema: Metodos de ordenamiento

Descripcion: Cargar un arreglo de 10 caracteres ingresados por teclado y ordenar mediante método de inserción directa de forma ascendente.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
//Modulos
void saludodesiempre();
void mostrarvector(char V[], int L);
void ordenSeleccionDirecta(char V[], int L);
void recivircaracteres(char V[], int L);
//Definiciones fijas
#define  VECL 10

int main ()
{
    //Inicio
    //Definiciones
    char vec[VECL];
    //Inicio
    saludodesiempre();
    //Entrada
    recivircaracteres(vec, VECL);
    //Calculo
    ordenSeleccionDirecta(vec, VECL);
    //Salida
    printf("Los caracteres ordenados serian:");
    mostrarvector(vec, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle 10 characteres y los voy a ordenar de mayor a menor\n");
    printf("---------------\n");
}

void mostrarvector(char V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("[ %c ]" , V[contador]);
}

void ordenSeleccionDirecta(char V[], int L)
{
    int contlimit, contswap;
    char menor, aux;

    for (contlimit = 0; contlimit < L - 1; contlimit++)
    {
        menor = contlimit;
        for (contswap = contlimit + 1; contswap < L; contswap++)
            if (V[contswap] < V[menor])
            menor = contswap;

        aux = V[contlimit];
        V[contlimit] = V[menor];
        V[menor] = aux;
    }
}

void recivircaracteres(char V[], int L)
{
    int contador, charnum;

    for (contador = 0; contador < L; contador++)
    {
        charnum = contador + 1;
        printf("Por favor, ingrese el %d° caracter: " , charnum);
        V[contador] = getc(stdin);
        fflush(stdin);
    }
}
