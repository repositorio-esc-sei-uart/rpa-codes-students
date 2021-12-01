/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 09
Tema: Sentencia de seleccion multiple switch

Descripcion: Ingrese 3 palabras por teclado y compare si las cadenas son distintas.
Si alguna palabra es repetida, mostrar el aviso de palabra duplicada o triplicada.
Finalmente concatenar las palabras separadas por un espacio, y mostrar la cadena resultante por pantalla.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <string.h>

int main ()
{
    //Definiciones
    int band;
    char palabra1[50] , palabra2[50] , palabra3[50], palabraaux[5];
    //iniciales
    band = 0;
    strcpy(palabraaux, " ");
    //Inicio
    printf("Hola, mucho gusto, voy a pedirle 3 palabras y las voy a unir y decirle si alguna esta repetida\n");
    printf("(Maximo 50 caracteres incluyendo espacios)\n");
    printf("Por favor, digame la primera palabra: ");
    //Entrada
    gets(palabra1);
    fflush(stdin);
    printf("Por favor, digame la segunda palabra: ");
    gets(palabra2);
    fflush(stdin);
    printf("Por favor, digame la tercera palabra: ");
    gets(palabra3);
    fflush(stdin);
    printf("---------------\n");
    //Salida
    if (strcmp(palabra1, palabra2)==0)
    {
        band = band + 1;
    }
    if (strcmp(palabra1, palabra3)==0)
    {
        band = band + 1;
    }
    if (strcmp(palabra2, palabra3)==0)
    {
        band = band + 1;
    }
    if (strcmp(palabra1, palabra2)==0 && band != 3)
    {
        printf("La primera palabra y la segunda estan duplicadas\n");
    }
    if (strcmp(palabra1, palabra3)==0 && band != 3)
    {
        printf("La primera palabra y la tercera estan duplicadas\n");
    }
    if (strcmp(palabra2, palabra3)==0 && band != 3)
    {
        printf("La primera segunda y la tercera estan duplicadas\n");
    }
    if (band == 3)
    {
        printf("Las tres palabras son iguales\n");
    }
    strcat(palabra1, palabraaux);
    strcat(palabra1, palabra2);
    strcat(palabra1, palabraaux);
    strcat(palabra1, palabra3);
    printf("Las palabras unidas son:\n");
    printf("%s" , palabra1);
}
