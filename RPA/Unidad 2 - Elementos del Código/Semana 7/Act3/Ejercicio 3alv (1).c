/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Dadas las variables inicializadas A=2, B=10 y C=40, Realice un programacon el siguiente intercambio: B que intercambie con A , C que intercambie con B y A que intercambie con C.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones (V es un valor vacio que voy a utilizar para intercambiar los numeros)
    int A, B, C, V;
    //Inicializaciones
    A = 2;
    B = 10;
    C = 40;
    //Inicio
    printf("Hola, mucho gusto, ahora voy a intercambiar las variables de A B y C entre si \n");
    printf("--------------------\n");
    printf("A inicia en: %d\n" , A);
    printf("B inicia en: %d\n" , B);
    printf("C inicia en: %d\n" , C);
    //Calculo (Intercambio A, B y C utilizando el valor V como auxiliar)
    V = A;
    A = B;
    B = C;
    C = V;
    //Salida
    printf("--------------------\n");
    printf("Y ahora A es: %d\n" , A);
    printf("Y ahora B es: %d\n" , B);
    printf("Y ahora C es: %d\n" , C);

}
