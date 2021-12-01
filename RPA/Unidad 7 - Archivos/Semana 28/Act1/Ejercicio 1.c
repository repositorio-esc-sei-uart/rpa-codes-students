/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 28
Tema: Archivos de acceso aleatorio

Descripcion: Escriba un programa que genere un archivo binario denominado sorteo.dat con la siguiente cabecera de información:
struct cabecera
{
int sorteos; // cantidad de sorteos
int cantnros; // cantidad de numeros por sorteo
int numagencia; // numero de agencia oficial
char agencia[30]; // nombre de agencia oficial
}
Solicitar al usuario los datos del sorteo:
I cantidad de sorteos
I cantidad números por sorteo
I datos de la agencia oficial: numero y nombre.
Por último, generar números al azar entre 1 y 99 que representan los números salidos en cada sorteo.
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

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int contador, num, bloques, bytes, vec[contador], total;
    Sorteo Sort;
    char* nombre = "sorteo.dat";
    FILE* archivo = fopen(nombre, "wb");
    //Inicializaciones
    if(archivo == NULL)
    {
        printf("ERROR: Fallo al crear el archivo");
        exit(404);
    }
    bytes = 0;
    //Inicio
    saludodesiempre();
    //Entrada
    printf("Digame cual es el nombre de la agencia\n");
    fflush(stdin);
    gets(Sort.agencia);
    fflush(stdin);
    printf("Y el numero de la agencia?\n");
    scanf("%d", &Sort.numagencia);
    printf("Cuantos sorteos hay?\n");
    scanf("%d", &Sort.sorteos);
    printf("Por ultimo, cuantos numeros por sorteo hay?\n");
    scanf("%d", &Sort.cantnros);
    //Calculo
    num = Sort.sorteos * Sort.cantnros;
    for (int contador = 0; contador < Sort.sorteos; contador++)
    {
        for (int contador = 0; contador < Sort.cantnros; contador++)
        {
            num = rand()%99;
            bloques = fwrite(&num, sizeof(int), 1, archivo);
            bytes = bytes + bloques*sizeof(int);
            total = total + 1;
        }
        total = total + 1;
    }
    vec[total];
    bloques = fwrite(vec, sizeof(int), total, archivo);
    bytes = bytes + bloques*sizeof(int);
    //Salida
    printf("Achivo escrito con exito, %d bytes fueron transferidos\n", bytes);
    //Fin
    fclose(archivo);
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a pedir datos de una agencia de sorteos y voy a guardar los datos en el archivo sorteo.dat\n");
    printf("---------------\n");
    printf("Por favor,  ");
}
