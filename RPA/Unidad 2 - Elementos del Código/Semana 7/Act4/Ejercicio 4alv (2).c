/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Obtener dos caracteres car1 y car2, intercambiarlos y mostrarlos.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones (aux es un valor vacio que voy a utilizar para intercambiar los caracteres)
    char car1, car2, aux;
    //Inicio
    printf("Hola, mucho gusto, ahora voy a pedirle dos caracteres y los voy a intercambiar entre si \n");
    printf("Por favor, ingrese el primer caracter: ");
    //Entrada
    scanf("%c" , &car1);
    printf("--------------------\n");
    fflush(stdin);
    printf("Por favor, ingrese el segundo caracter: ");
    scanf("%c" , &car2);
    printf("--------------------\n");
    //Proceso (Intercambio car1 con car2 utilizando el valor aux)
    aux = car1;
    car1 = car2;
    car2 = aux;
    //Salida
    printf("Su primer caracter seria: %c , y su segundo caracter seria: %c"  , car1 , car2);
}
