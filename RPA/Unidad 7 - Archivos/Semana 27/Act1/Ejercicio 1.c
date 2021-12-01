/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 27
Tema: Archivos de acceso secuencial

Descripcion: Dado un mensaje codificado con el encriptador murciélago (visto en la clase 17) y almacenado en el archivo mensaje.txt,
escribir un programa que lea caracter a caracter y decodifique el mensaje del archivo de texto imprimiendolo por pantalla.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//Definiciones fijas
#define  MAX 400
//Modulos
void saludodesiempre();
void desencriptar(char codigo[MAX]);

int main ()
{
    //Inicio
    //Definiciones
    char txt[MAX];
    char *archivo = "mensaje.txt";
    //Inicializaciones
    FILE *mensaje = fopen(archivo, "rt");

    if(mensaje == NULL)
    {
        printf("¡ERROR!: Archivo no encontrado.\n");
        exit(404);
    }
    //Inicio
    saludodesiempre();
    //Entrada
    fgets(txt, MAX, mensaje);
    printf("%s\n", txt);
    //Calculo
    desencriptar(txt);
    printf("\n---------------\n\n");
    //Salida
    printf("%s\n", txt);
    fflush(mensaje);
    fclose(mensaje);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a tomar un mensaje codificado y lo voy a descodificar\n");
    printf("---------------\n");
}

void desencriptar(char codigo[MAX])
{
    int contador;

    for(contador = 0; codigo[contador] != '\0'; contador++)
        {
            switch(codigo[contador])
            {
            case '0':
                codigo[contador] = 'm';
                break;
            case '1':
                codigo[contador] = 'u';
                break;
            case '2':
                codigo[contador] = 'r';
                break;
            case '3':
                codigo[contador] = 'c';
                break;
            case '4':
                codigo[contador] = 'i';
                break;
            case '5':
                codigo[contador] = 'e';
                break;
            case '6':
                codigo[contador] = 'l';
                break;
            case '7':
                codigo[contador] = 'a';
                break;
            case '8':
                codigo[contador] = 'g';
                break;
            case '9':
                codigo[contador] = 'o';
                break;
            }
        }
}
