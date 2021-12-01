/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 13
Tema: Alcance de variables y mas funciones

Descripcion: Diseñar una función de tipo void denominada [formarFrase] con dos parámetros de entrada que reciba dos palabras
y un parámetros de salida que almacenará la frase resultante separada por la preposición "de".
Finalmente invoque en main y muestre la cadena resultante.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <string.h>

void saludodesiempre();//Inicial modulo
void formarFrase(char palabra1[50] , char palabra2[50] , char palabraconca[104]);


int main ()
{
    //Definiciones
    char palabra1[50] , palabra2[50] , palabraconca[104];
    //Inicializaciones
    strcpy(palabraconca, "");
    //Inicio
    saludodesiempre();
    //Entrada
    fflush(stdin);
    gets(palabra1);
    printf("Por favor, ingrese la segunda palabra: ");
    fflush(stdin);
    gets(palabra2);
    //Calculo
    formarFrase(palabra1 , palabra2 , palabraconca);
    //Salida
    printf("---------------\n");
    printf("La frase es: ");
    printf("%s" , palabraconca);
    //Fin
    return 0;
}
//Modulos
void formarFrase(char palabra1[50] , char palabra2[50] , char palabraconca[104])
{
    char de[5];
    strcpy(de, " de ");
    fflush(stdin);
    strcat(palabraconca, palabra1);
    strcat(palabraconca, de);
    strcat(palabraconca, palabra2);
}

void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a pedir dos palabras y despues la voy a unir con la preposicion 'de' en medio\n");
    printf("---------------\n");
    printf("Por favor, ingrese la primera palabra: ");
}
