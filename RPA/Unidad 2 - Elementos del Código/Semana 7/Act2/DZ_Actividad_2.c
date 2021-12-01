/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Codificar su algoritmo propuesto del ejercicio 2 de la clase 01.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int num1, num2, prod, suma, resta, mod;
printf("Ingrese un numero: \n");
scanf("%d", &num1);
printf("Ingrese un numero: \n");
scanf("%d", &num2);
prod=num1*num2;
suma=num1+num2;
resta=num1-num2;
mod=num1%num2;
printf("Producto: %d", prod);
printf("\n Suma: %d", suma);
printf("\n Resta: %d", resta);
printf("\n Modulo: %d", mod);
return 0;
}
