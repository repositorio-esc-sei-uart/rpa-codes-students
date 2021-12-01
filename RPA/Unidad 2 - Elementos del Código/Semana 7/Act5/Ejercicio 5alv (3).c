/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Obtener una temperatura en Fahrenheit y convertir a Celsius.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
//constantes
#define PUNTOCONGELACION 32
#define EQUIVFC 1.8

int main ()
{
    //Definiciones
    float fahr, cels, aux;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a pedir una temperatura fahrenheit y se la mostrare en celsius");
    printf("\n Por favor, digame una temperatura en fahrenheit: ");
    //Entrada
    scanf("%f" , &fahr);
    //Calculo
    aux = fahr - PUNTOCONGELACION;
    cels = aux / EQUIVFC;
    //Salida
    printf("La temperatura en fahrenheit de: %fF, es quivalente a: %fC en celsius" , fahr , cels);
}
