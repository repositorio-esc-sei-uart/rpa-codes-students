/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 18
Tema: Metodos basicos de busqueda

Descripcion: Cargar un vector de 10 caracteres ingresados por teclado, y buscar un valor utilizando búsqueda binaria e inserción directa.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Modulos
void saludodesiempre();
void recivircaracteres(char V[], int L);
void mostrarvector(char V[], int L);
void ordenSeleccionDirecta(char V[], int L);
int busquedabinaria(char V[], int clave);
//Definiciones fijas
#define  VECL 10

int main ()
{
    //Inicio
    //Definiciones
    char vec[VECL];
    char caracter, pos;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    recivircaracteres(vec, VECL);
    printf("\n");
    printf("Por favor, ingrese que caracter deseea buscar: ");
    scanf("%c" , &caracter);
    //Calculo
    pos = busquedabinaria(vec, caracter);
    //Salida
    if(pos == -1)
        printf ("El caracter %c no se encuentra en el vector") , caracter;
    else
        printf("El caracter %c si se encuentra en el vector en la pocision %d" , caracter , pos);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle 10 caracteres para un vector y\nle voy a pedir un ultimo a localizar en dicho vector\n");
    printf("---------------\n");
    printf("Por favor, ");
}

void recivircaracteres(char V[], int L)
{
    int contador;

    for (contador = 0; contador < L; contador++)
    {
        printf("Ingrese el %d° caracter: " , contador+1);
        V[contador] = getc(stdin);
        fflush(stdin);
    }
    ordenSeleccionDirecta(V, L);
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
    printf("---------------\n");
    printf("Ordenando...\n");
    mostrarvector(V, L);
    printf("\n---------------\n");
}

int busquedabinaria(char V[VECL], int clave)
{
    int central, ini, fin, pos;

    ini = 0;
    fin = VECL - 1;
    pos = -1;
    while(ini < fin)
    {
        central = (ini + fin) / 2;
        if(V[central] == clave)
        {
            pos = central;
            ini = fin;
        }
        else
            if(clave < V[central])
                fin = central - 1;
            else
                ini = central + 1;
    }
    return pos;
}
