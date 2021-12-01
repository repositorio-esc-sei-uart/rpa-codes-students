/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion:Generar una serie de N números aleatorios en un rango [-50, 50] y
mostrar valor mínimo y máximo de la serie.

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int x, numeros, N, aux, maximo, minimo;
srand(time(0));
printf("Cuantos numeros desea generar?\n");
scanf("%d", & N);
printf("Numeros generados: \n");
for (numeros=1; numeros<=N; numeros++)
{
x=-50+rand()%101;
printf("%d \n", x);
if(x>maximo)
{
maximo=x;
}
if(x<minimo)
{
minimo=x;
}
}
printf("Numero minimo de la serie: %d \n", minimo);
printf("Numero maximo de la serie: %d", maximo);
return 0;
}
