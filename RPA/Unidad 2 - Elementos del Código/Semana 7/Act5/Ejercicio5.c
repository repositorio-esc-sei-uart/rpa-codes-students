/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Obtener una temperatura en Fahrenheit y convertir a Celsius
Autor: Pablo Laime
Año: 2021
*******************************************************************************/

#include <stdio.h>

int main ()
    //Defino las variables
    int temperatura;
    float celsius;

    //Leo la entrada de datos
    printf("Ingrese una temperatura en Fahrenheit y esta sera convertida a Celsius");
    scanf("%d", &temperatura);

    //Le asigno la formula para convertir a celsius
    celsius = (temperatura-32) / 1.8;

    //Escribo el resultado
    printf("\n El resultado es: %f", celsius);

    ///No se por que me salta error a la hora de ejecutar
}
