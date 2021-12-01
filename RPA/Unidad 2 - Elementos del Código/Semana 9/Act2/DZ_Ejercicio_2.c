/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion: Se requiere diseñar una calculadora donde el usuario seleccione el operador
matemático que va a utilizar (suma, resta, multiplicación, división y modulo) para
operar con dos valores (A y B) ingresados por pantalla y muestre el resultado.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
char op;
int a=0, b=0, suma=0, resta=0, div=0, multi=0, mod=0;
printf("MENU\n");
printf("Seleccione la operacion a realizar\n");
printf("Suma (+) \n");
printf("Resta (-)\n");
printf("Multiplicacion (*) \n");
printf("Division (/)\n");
printf("Modulo (%)\n");
scanf("%c", &op);
switch(op)
{
case '+':
printf("Ingrese los valores a sumar\n");
printf("Primer valor\n");
scanf("%d", &a);
printf("Segundo valor");
scanf("%d", &b);
suma=a+b;
printf("El resultado de la suma es: %d", suma);
break;
case '-':
printf("Ingrese los valores a restar\n");
printf("Primer valor\n");
scanf("%d", &a);
printf("Segundo valor\n");
scanf("%d", &b);
resta=a-b;
break;
case '*':
printf("Ingrese los valores a multiplicar\n");
printf("Primer valor\n");
scanf("%d", &a);
printf("Segundo valor");
scanf("%d", &b);
multi=a*b;
break;
case '/':
printf("Ingrese los valores a dividir\n");
printf("Primer valor\n");
scanf("%d", &a);
printf("Segundo valor");
scanf("%d", &b);
if (b==0)
{
printf("No se puede dividir por 0");
}
else
{
div=a/b;
printf("El resultado de la division es: %d", div);
}
break;
case'%':
printf("Ingrese valores para calcular el modulo \n");
scanf("%d", &a);
scanf("%d", &b);
mod=a%b;
printf("El modulo es: %d", mod);
break;
default:
printf("Opcion invalida");
}
return 0;
}
