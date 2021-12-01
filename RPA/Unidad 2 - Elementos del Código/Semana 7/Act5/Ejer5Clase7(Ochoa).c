/**
 (1649) Resolución de Problemas y Algoritmos
 Clase N° 7
 Tema: Lenguaje C

 Descripción: Obtener una temperatura en Fahrenheit y convertir a Celsius, cuya fórmula
de conversión es la siguiente:
celsius = (farhr −32)/1.8

Defina las constantes PUNTOCONGELACION=32 y EQUIVFC=1.8.
Mostrar resultado con dos dígitos de precisión.
Ejemplo: 70º F equivale a 21.11º C.

 Autor: Ochoa Andrea Daniela

 Año:2021
 **/

#include <stdio.h>

#define PUNTOCONGELACION=32
#define EQUIVFC=1.8.

int main ()
{

float F,C;

printf("Ingrese los Grados Fahrenheit: ");
scanf("%f",&F);

C=(F-32)/1.8;

printf("\n%.0f grados Fahrenheit equivale a: %.2f grados Celsius\n",F,C);

return 0;

}
