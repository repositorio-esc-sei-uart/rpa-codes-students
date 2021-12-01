/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 10
Tema: Sentencia iterativa for

Descripcion: Genere la secuencia de números impares consecutivos desde 1 hasta 11 inclusive, es decir, 1,3,5,..., y mostrar su suma y producto.
Seleccione el tipo de dato apropiado para cada variable (short, int, o long).
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones
    int num;
    short suma;
    long prod;
    //Iniciales
    suma = 0;
    prod = 1;
    //Inicio
    printf("Hola, mucho gusto, le voy a mostrar la suma y el producto de los numero impares del 1 al 11 de manera consecutiva\n");
    printf("---------------\n");
    //Calculo
    for (num = 1; num < 12; num = num + 2)
    {
        if (num >= 1)
        {
            suma = suma + num;
            prod = prod * num;
        }
        if (num >= 3)
        {
            suma = suma + num;
            prod = prod * num;
        }
        if (num >= 5)
        {
            suma = suma + num;
            prod = prod * num;
        }
        if (num >= 7)
        {
            suma = suma + num;
            prod = prod * num;
        }
        if (num >= 9)
        {
            suma = suma + num;
            prod = prod * num;
        }
        if (num >= 11)
        {
            suma = suma + num;
            prod = prod * num;
        }
    }
    //Salida
    printf("De los numeros impares consecutivos es");
    printf("La suma total de los numeros es: %d\n" , suma);
    printf("La producto total de los numeros es: %d\n" , prod);
    //Fin
}
