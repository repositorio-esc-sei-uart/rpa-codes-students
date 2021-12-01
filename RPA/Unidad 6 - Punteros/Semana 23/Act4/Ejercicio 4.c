/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 23
Tema:Manipulacion de variables mediante punteros

Descripcion: Cargar tres variables int horas, float costo, char letra mediante un puntero genérico y mostrarlas por pantalla.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
//Definiciones fijas
#define  TRES 3
//Modulos
void saludodesiempre();

int main ()
{
    //Inicio
    //Definiciones
    int horas;
    float costo;
    char letra;
    void *memoria;
    //Inicio
    saludodesiempre();
    //Calculo&Salida
    memoria = &horas;
    printf("La direccion de horas es:%p\n", memoria);
    memoria = &costo;
    printf("La direccion de costo es:%p\n", memoria);
    memoria = &letra;
    printf("La direccion de letra es:%p\n", memoria);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a mostrarle las direcciones de 3 variables de datos distintos\n");
    printf("---------------\n");
}
