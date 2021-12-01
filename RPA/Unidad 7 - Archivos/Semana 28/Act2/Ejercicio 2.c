/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 28
Tema: Archivos de acceso aleatorio

Descripcion: Escriba un programa que permita leer el archivo con cabecera del ejercicio 2.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//Struct
struct cabecera
{
    int sorteos; // cantidad de sorteos
    int cantnros; // cantidad de numeros por sorteo
    int numagencia; // numero de agencia oficial
    char agencia[30]; // nombre de agencia oficial
};
typedef struct cabecera Sorteo;
//Modulos
void saludodesiempre();
FILE* abrir(char* nombre, char* modo);

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int contador, num, bloques, bytes, vec[contador], total;
    Sorteo Sort;
    char* nombre = "sorteo.dat";
    FILE* archivo = abrir("sorteo.dat", "rb");
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    //Calculo
    total = 0;
    while(!feof(archivo))
    {
        bloques = fread(&num, sizeof(int), 1, archivo);
        if(bloques > 0)
        {
            printf(" %d ", num);
            total += bloques;
        }
    }
    //Salida
    //Fin
    fclose(archivo);
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a leer el archivo sorteo.dat\n");
    printf("---------------\n");
}

FILE* abrir(char* nombre, char* modo)
{
    FILE *pf = fopen(nombre, modo);

    if(pf == NULL)
    {   printf("No se pudo abrir el archivo");
        exit(0);
    }
    return pf;
}
