/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion: Escriba un programa que permita elegir una opción de menú para el cálculo de
área de una gura: a-círculo, b-cuadrado, c-triángulo. Una vez elegida la opción,
se le debe solicitar los datos necesarios para calcular el área de la gura elegida y
mostrar el resultado por pantalla.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#define PI 3.141592
int main()
{
char op;
float radio=0, acir=0, lado=0, acua=0, triba=0, altri=0, atri=0;
printf("MENU");
printf("Seleccione la figura deseada a calcular el area");
printf("\n a) Circulo");
printf("\n b) Cuadrado");
printf("\n c) Triangulo \n");
scanf("%c", &op);
switch(op)
{
case 'a':
printf("Ingrese el radio del circulo \n");
scanf("%f", &radio);
acir=PI*(radio*radio); //Area del circulo
printf("\n El area del cuadrado es: %f", acir);
break;
case 'b':
printf("Ingrese el valor de un lado \n");
scanf("%f", &lado);
acua=lado*lado; //Area del cuadrado
printf("\n El area del cuadrado es: %f", acua);
break;
case 'c':
printf("Ingrese el valor de la base:\n");
scanf("%f", &triba);
printf("Ingrese la altura \n");
scanf("%f", &altri);
atri=(triba*altri)/2; //Area del triangulo
printf("\n El area del triangulo es: %f", atri);
break;
default:
printf("Opcion invalida");
}
return 0;
}
