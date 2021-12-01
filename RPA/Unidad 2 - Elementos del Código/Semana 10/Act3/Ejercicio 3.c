/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 10
Tema: Sentencia iterativa for

Descripcion: Generar una serie de N números aleatorios en un rango [-50, 50] y mostrar valor mínimo y máximo de la serie.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    //Definiciones
    int contador, cuantos, cantidad, rando, mayor, menor;
    //Iniciales
    contador = 1;
    mayor = 0;
    menor = 0;
    //Inicio
    printf("Hola, mucho gusto, voy a darle numeros aleatorios entre 50 y -50...\n");
    printf("...y decirle cual fue el numero mas grande y cual em mas pequeno\n");
    printf("Por favor, digame cauntos numeros quiere generar ");
    //Entrada
    scanf("%d" , &cuantos);
    cantidad = cuantos;
    //Calculo
    for (cantidad; cantidad > 0; cantidad--)
    {
        rando = 50-rand()%101;
        printf("Este es el numero %d: %d\n" , contador , rando);
        if (rando > mayor)
            mayor = rando;
        if (rando < menor)
            menor = rando;
        contador = contador + 1;
    }
    //Salida
    printf("---------------\n");
    printf("De los %d numeros \n" , cuantos);
    printf("El numero mas grande fue %d \n" , mayor);
    printf("El numero mas pequeno fue %d \n" , menor);
    //Fin
}
