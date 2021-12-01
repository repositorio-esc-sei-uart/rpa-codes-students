/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 17
Tema: Procesamiento de cadenas de caracteres

Descripcion: ingresar una palabra y desordenarla. Es decir, para cada caracter seleccione una posición aleatoria e intercambie a la nueva posición.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//Modulos
void saludodesiempre();
void mostrarvector(char V[], int L);
void aletariorizar(char V[], int L);
//Definiciones fijas
#define  VECL 30

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    char frase[VECL];
    int fraselongitud;
    //Inicio
    saludodesiempre();
    //Entrada
    gets(frase);
    fflush(stdin);
    fraselongitud = strlen(frase);
    //Calculo
    aletariorizar(frase, fraselongitud);
    //Salida
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle una palabra o frase y la voy a desordenar\n");
    printf("---------------\n");
    printf("Por favor, ingrese una palabra o frase: ");
}

void mostrarvector(char V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("%c" , V[contador]);
}

void aletariorizar(char V[], int L)
{
    char fraserandom[L];
    int contador, aleatorio;

    for (contador = 0; contador < L; contador++)
    {
        aleatorio = rand()%L;
        if(aleatorio != contador)
            fraserandom[contador] = V[aleatorio];
        else
            contador--;
    }
    printf("La frase es: ");
    mostrarvector(fraserandom, L);
}
