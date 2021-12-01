 /**
 (1649) Resolución de Problemas y Algoritmos
 Clase N° 7
 Tema: Lenguaje C

 Descripción: Implemente el algoritmo del ejercicio 4 de la clase 03.

 Autor: Ochoa Andrea Daniela
 Año:2021
 **/

#include <stdio.h>
int main(){
int monto, recarga, montoR;
char t,T,b;

printf("Ingrese el monto a pagar");
scanf("%d",&monto);

    if (monto>0)
    {
        printf("\nSeleccione la forma de pago, Tarjeta(T), Efectivo(Enter");
        scanf("%c",&b);
        fflush(stdin);
    }
    else
    {
        printf("\nEl monto es Invalido");
    }
        if (b!=0)
        {
            recarga=monto*10/100;
            montoR=recarga+monto;
            printf("\nEl monto total a pagar con tarjeta (el cual se aplica el 10 por ciento de recargo) es: %d",montoR);
        }
        else
        {
            printf("\nEl monto total a pagar es: $ %d",monto);
        }


return 0;
}
