/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 14
Tema: Arreglos unidimensionales

Descripcion: Dado dos vectores con la siguiente inicialización:
vec1: 10 20 30 40 50
vec2: 15 25 35 45 55
Se pide cargar un tercer vector vec3 con los elementos de vec1 y vec2 intercalados de la siguiente forma:
vec3: 10 15 20 25 30 35 40 45 50 55
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
//Modulos
void saludodesiempre();
//Definiciones fijas
#define VECS 5
#define VECL 10
//VECS y VECL significa Vector Short o Vector Corto y Vector Long o Vector Largo
int main ()
{
    //Inicio
    //Definiciones
    int vec1[VECS] = {10 , 20 , 30 , 40 , 50};
    int vec2[VECS] = {15 , 25 , 35 , 45 , 55};
    int vec3[VECL];
    int contador, contadorvec1, contadorvec2;
    //Inicializaciones
    contadorvec1 = 0;
    contadorvec2 = 0;
    //Inicio
    saludodesiempre();
    printf("El vector 1 es:");
    for (contador = 0; contador < VECS; contador++)
        printf("[ %d ]" , vec1[contador]);
    printf("\n");
    printf("El vector 2 es:");
    for (contador = 0; contador < VECS; contador++)
        printf("[ %d ]" , vec2[contador]);
    printf("\n");
    printf("---------------\n");
    //Calculo
    for (contador = 0; contador < VECL; contador++)
    {
        if (contador % 2)
        {
        vec3[contador] = vec2[contadorvec2];
        contadorvec2++;
        }
        else
        {
        vec3[contador] = vec1[contadorvec1];
        contadorvec1++;
        }
    }
    //Salida
    printf("Los numeros combinados en una sola cadena son: ");
    for (contador = 0; contador < VECL; contador++)
        printf("[ %d ]" , vec3[contador]);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a combinar las cadenas de vector 1 y 2 en una sola cadena\n");
    printf("---------------\n");
}
