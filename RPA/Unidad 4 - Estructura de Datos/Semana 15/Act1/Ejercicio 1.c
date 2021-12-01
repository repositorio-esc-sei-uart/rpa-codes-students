/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 15
Tema: Arreglos como parametros de funciones

Descripcion:  Rediseñar con funciones la solución del ejercicio 3 de la clase 14,
cargando el vector vect3 mediante una función denominada void cargarIntercalado(...).
Complete los parámetros necesarios para que la función realice la carga.
El punto 3 de la Clase 14:
Dado dos vectores con la siguiente inicialización:
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
void cargarIntercalado(int V1[], int V2[], int V3[]);
void mostrarvector(int V[], int L);
//Definiciones fijas
#define VECS 5
#define VECL 10

int main ()
{
    //Inicio
    //Definiciones
    int vec1[VECS] = {10 , 20 , 30 , 40 , 50};
    int vec2[VECS] = {15 , 25 , 35 , 45 , 55};
    int vec3[VECL];
    int contador, contadorvec1, contadorvec2;
    //Inicio
    saludodesiempre();
    printf("El vector 1 es:");
    mostrarvector(vec1, VECS);
    printf("\n");
    printf("El vector 2 es:");
    mostrarvector(vec2, VECS);
    printf("\n");
    printf("---------------\n");
    //Calculo
    cargarIntercalado(vec1, vec2, vec3);
    //Salida
    printf("Los numeros combinados en una sola cadena son: ");
    mostrarvector(vec3, VECL);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
//Entrada:Vector 1 y Vector 2. Salida: Vector 3
void cargarIntercalado(int V1[VECS], int V2[VECS], int V3[VECL])
{
    int contador, contadorvec1, contadorvec2;
    contadorvec1 = 0;
    contadorvec2 = 0;
    for (contador = 0; contador < VECL; contador++)
    {
        if (contador % 2)
        {
        V3[contador] = V2[contadorvec2];
        contadorvec2++;
        }
        else
        {
        V3[contador] = V1[contadorvec1];
        contadorvec1++;
        }
    }
}
//Modulo para mostrar vectores
void mostrarvector(int V[] , int L)
{
    int contador;
    for (contador = 0; contador < L; contador++)
        printf("[ %d ]" , V[contador]);
}
//Saludo
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a combinar las cadenas de vector 1 y 2 en una sola cadena\n");
    printf("---------------\n");
}
