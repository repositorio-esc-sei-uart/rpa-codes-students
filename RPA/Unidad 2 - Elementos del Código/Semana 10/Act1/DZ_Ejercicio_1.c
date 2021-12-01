/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion:Calcular el promedio de 20 números flotantes aleatorios entre 0 y 1.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int x, cont;
float y, suma=0, promedio;
srand(time(0));
printf("Numeros aleatorios generados:\n");
for (cont = 0; cont < 20; cont++)
{
y=rand()%101/100.0;
suma=suma+y;
printf("%f \n", y);
}
promedio=suma/20;
printf("Promedio: %f", promedio);
return 0;
}
