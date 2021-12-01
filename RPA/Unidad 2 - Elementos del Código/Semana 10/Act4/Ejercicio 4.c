/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 10
Tema: Sentencia iterativa for

Descripcion: Se requiere un programa que calcula promedios de notas de alumnos. Obtener la cantidad de notas y la cantidad de alumnos para procesar.
Generar notas para los alumnos con valores aleatorios entre 1 y 10, que simulará el ingreso por teclado. Mostrar los promedios de cada alumno.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    //Definiciones
    int numalumnos, numnotas, nota, conalumnos, connotas, divprom;
    float promedio, suma;
    //Iniciales
    conalumnos = 1;
    connotas = 1;
    //Inicio
    printf("Hola, mucho gusto, le voy a pedir una cantidad de alumnos y cuantas notas tiene cada uno...\n");
    printf("...y voy a generar que nota saco cada uno y le dire su promeido\n");
    printf("Por favor, digame cuantos alumnos hay ");
    //Entrada
    scanf("%d" , &numalumnos);
    printf("Cuantas notas posee cada alumno ");
    scanf("%d" , &numnotas);
    printf("---------------\n");
    //Calculo
    divprom = numnotas;
    if (numalumnos <= 0 || numnotas <= 0)
    {
        printf("La cantidad de alumnos o la cantidad de notas son invalidas");
    }
    else
    {
        for (numalumnos; numalumnos > 0; numalumnos--)
        {
            printf("Alumno Nro%d\n" , conalumnos);
            for (numnotas; numnotas > 0; numnotas--)
            {
                nota = 1+rand()%10;
                printf("Nota Nro%d: %d\n" , connotas , nota);
                suma = suma + (float) nota;
                connotas = connotas + 1;
            }
            promedio = suma / divprom;
            printf("El promedio de el alumno %d es de %f\n" , conalumnos , promedio);
            printf("---------------\n");
            //Reinicializacion
            conalumnos = conalumnos + 1;
            connotas = 1;
            suma = 0;
            numnotas = divprom;
        }
    }
}
