/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion:Se requiere un programa que calcula promedios de notas de alumnos.
Obtener la cantidad de notas y la cantidad de alumnos para procesar.
Generar notas para los alumnos con valores aleatorios entre 1 y 10,
que simulará el ingreso por teclado. Mostrar los promedios de cada
alumno.

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int x, nota, suma=0, cantn, canta, alu, parcial;
float prom;
srand(time(0));
printf("Ingrese cantidad de alumnos: \n");
scanf("%d", & canta);
printf("Ingrese cantidad de notas: \n");
scanf("%d", & cantn);
for (alu=1; alu<=canta; alu++)
{
suma=0;
printf("ALUMNO: %d: \n", alu);
for(nota=1; nota<=cantn; nota++)
{
x=rand()%10;
printf("Nota %d:\n", nota);
printf("%d \n",x);
suma=suma+x;
}
prom=suma/cantn;
printf("Promedio: %f \n", prom);
}
return 0;
}
