 /**
 (1649) Resoluci�n de Problemas y Algoritmos
 Clase N� 7
 Tema: Lenguaje C

 Descripci�n: Escribir un algoritmo que obtenga de teclado dos n�meros enteros y
determine su suma, resta, multiplicaci�n, divisi�n y m�dulo.

 Autor: Ochoa Andrea Daniela
 A�o:2021
 **/

#include <stdio.h>
int main()
{
int num1;
int num2;
int suma;
int resta;
int mult;
int division;
int modulo;

printf("Ingrese un Numero entero\n");

scanf("%d",&num1);

printf("Ingrese un segundo Numero entero\n");

scanf("%d",&num2);

suma=num1+num2;
resta=num1-num2;
mult=num1*num2;
division=num1/num2;
modulo=num1%num2;

printf("La suma de %d + %d es:  %d\n", num1 , num2 , suma);
printf("La resta de %d - %d es:  %d\n",num1,num2, resta);
printf("La multiplicacion de %d * %d es:  %d\n",num1,num2,mult);
printf("La division de %d / %d es: %d\n",num1,num2,division);
printf("El Modulo de %d entre %d es: %d\n",num1,num2,modulo);

return 0;

}
