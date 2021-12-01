/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Implemente el algoritmo del ejercicio 4 de la clase 03.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
float monto, recargo, total, parecargo;
int mpago;
printf("Bienvenido \n");
printf("Ingrese el monto a pagar \n");
scanf("%f", &monto);
if (monto>0)
{
printf("\n Como desea pagar?\n");
printf("Recuerde que con tarjeta tiene un 10 porciento de recargo \n");
printf("MENU \n");
printf("(1)Tarjeta \n");
printf("(2)Efectivo \n");
scanf("%d", &mpago);
if(mpago==1)
{
recargo=10*monto/100;
parecargo=recargo+monto;
printf("Monto a pagar + recargo: %f", parecargo);
}
else
{
printf("El monto a pagar es: %f", monto);
}
}
else
{
printf("El cliente paga en efectivo: %f", monto);
printf("Fin de la sesion");
}
}
