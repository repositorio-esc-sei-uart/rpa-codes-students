/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Calcular el área de un círculo. Utilice una constante PI=3.141592
Autor: Pablo Laime
Año: 2021
*******************************************************************************/

#include <stdio.h>
#define PI 3.141592 //Defino y asigno un valor fijo a una constante

int main ()
{
    //Defino las variables
    int radio;
    float area;

    //Leo la entrada de datos
    printf ("Ingrese el radio del circulo: ");
    scanf ("%d", &radio);

    //Uso la formula del area de un circulo
    area = PI * (radio*radio);

    //Muestro el tesultado
    printf ("El area del circulo es: %.4f", area);
}
