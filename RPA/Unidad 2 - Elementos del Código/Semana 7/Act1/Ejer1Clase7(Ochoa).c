 /**
 (1649) Resolución de Problemas y Algoritmos
 Clase N° 7
 Tema: Lenguaje C

 Descripción: Calcular el área de un círculo. Utilice una constante PI=3.141592.
 Autor: Ochoa Andrea Daniela
 Año:2021
 **/

#include <stdio.h>

#define PI 3.1415

int main ()
 {

float area;
float radio;
float PI;
printf("Ingrese el valor del radio \n ");

scanf("%f",&radio);

area=PI*(radio*radio);

printf("El area del circulo es: %f\n ",area);

return 0;

}
