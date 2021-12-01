/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion:Genere la secuencia de números impares consecutivos desde 1 hasta 11
inclusive, es decir, 1,3,5,..., y mostrar su suma y producto. Seleccione
el tipo de dato apropiado para cada variable (short, int, o long).

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int i, suma=0, mul=1;
printf("Secuencia de numeros impares consecutivos:\n");
for (i=1; i<12; i+=2)
{
printf("%3d \n", i);
suma=suma+i;
mul=mul*i;
}
printf("Suma: %d \n", suma);
printf("Multiplicacion: %d", mul);
return 0;
}
