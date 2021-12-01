/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 11
Tema: le lenguaje C

Descripcion: Generar una serie de números aleatorios comprendidos entre 1 y 100 mientras que
se obtenga 20 pares. Mostrar por pantalla los aleatorios pares y la cantidad total
de aleatorios generados.

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int x, cont=0, conta=0;
srand(time(0));
    //VERSION WHILE

while(cont<20)
    {
     x=1+rand()%100;
      conta++;
        if(x%2==0)
        {
        printf("%d \n", x);
        cont++;
        }
    }
    //VERSION DO-WHILE
    /**
do
    {
    x=1+rand()%100;
      conta++;
        if(x%2==0)
        {
        printf("%d \n", x);
        cont++;
        }
    }
    while (cont<20);
    */
    printf("Se generaron %d numeros aleatorios ", conta);
return 0;
}
