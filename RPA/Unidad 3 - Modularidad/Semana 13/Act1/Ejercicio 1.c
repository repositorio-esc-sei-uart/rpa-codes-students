/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 13
Tema: Alcance de variables y mas funciones

Descripcion: Escribir un programa que obtenga dos valores enteros desde teclado y almacenarlos en dos variables globales [a] y [b].
Luego solo intercambie sus valores mediante una función denominada [void intercambioGlobal()] y muestre por pantalla el contenido de las variables globales en main.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

void saludodesiempre();
void intercambioGlobal();

int a , b , c;

int main ()
{
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%d" , &a);
    printf("Por favor, ingrese el segundo numero ");
    scanf("%d" , &b);
    //Calculo
    intercambioGlobal();
    //Salida
    printf("---------------\n");
    printf("El valor de [a] es ahora es %d y el valor de [b] ahora es %d" , a , b);
    //Fin
    return 0;
}
//Modulos
void intercambioGlobal()
{
    c = a;
    a = b;
    b = c;
}

void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a perdirle dos numeros y los voy a intercambiar entre si\n");
    printf("---------------\n");
    printf("Por favor, ingrese el primer numero ");
}
