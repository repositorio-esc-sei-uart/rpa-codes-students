/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Dadas las variables inicializadas A=2, B=10 y C=40, Realice un programa
con el siguiente intercambio:
I B que intercambie con A
I C que intercambie con B
I A que intercambie con C
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int a=2, b=10, c=40, aux=0;
printf(" A %d", a);
printf("\n B %d", b);
printf("\n C %d", c);
aux=b;
b=a;
a=c;
c=aux;
printf("\n Intercambios");
printf("\n A %d", a);
printf("\n B %d", b);
printf("\n C %d", c);

return 0;
}
