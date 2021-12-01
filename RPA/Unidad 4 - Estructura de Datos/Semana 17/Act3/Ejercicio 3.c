/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 17
Tema: Procesamiento de cadenas de caracteres

Descripcion:  Ingresar una cadena de caracteres por teclado y decir si es un palindromo
(palabra o frase que se lee igual adelante que atrás, ejemplo: radar, la ruta natural).
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Modulos
void saludodesiempre();
void mostrarvector(char V[], int L);
void espalindromo(char V[], int L);
void simplificarpalabra(char V[], int L);
//Definiciones fijas
#define  VECL 50

int main ()
{
    //Inicio
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
    simplificarpalabra(frase, fraselongitud);
    //Salida
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a pedir una frase y le voy a decir si es palindromo\n");
    printf("---------------\n");
    printf("Por favor, ingrese una palabra o frase: ");
}

void mostrarvector(char V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("%c" , V[contador]);
}

void espalindromo(char V[], int L)
{
    char copia[L];
    int contador, contadorcopia;
    contadorcopia = 0;

    for (contador = L; contador > 0; contador--)
    {
        copia[contadorcopia] = V[contador - 1];
        contadorcopia++;
    }
    printf("\n---------------\n");
    if(strcmp(V, copia) != 0)
        printf("La palabra es un palindromo");
    else
        printf("La palabra NO es un palindromo");
    printf("\n---------------\n");
    printf("La frase original es: ");
    mostrarvector(V, L);
    printf("\n");
    printf("La frase invertida es:");
    mostrarvector(copia, L);
}

void simplificarpalabra(char V[], int L)
{
    int contador, largo, aux;
    char frasesimple[VECL];
    aux = 0;

    for (contador = 0; contador < L; contador++)
        {
            if (isalpha(V[contador]) != 0)
            {
                frasesimple[aux] = V[contador];
                aux++;
            }
        }
    largo = strlen(frasesimple);

    for (contador = 0; contador < largo; contador++)
            {
                frasesimple[contador] = tolower(frasesimple[contador]);
            }
    espalindromo(frasesimple, largo);
}
