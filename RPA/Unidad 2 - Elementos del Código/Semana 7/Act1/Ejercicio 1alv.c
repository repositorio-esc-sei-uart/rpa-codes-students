/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Calcular el área de un círculo.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

//Constante
#define PI 3.141592

int main ()
{
    //Definiciones
    float diametro, radio, area;
    radio = 0;
    area = 0;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a calcular el area de un circulo");
    printf("\nPor favor, digame el diametro del circulo: ");
    //Entrada
    scanf("%f" , &diametro);
    //Calcuclo
    radio = diametro / 2;
    area = PI * (radio * radio);
    //salida
    printf("El area de su circulo seria de: %f" , area);
}
