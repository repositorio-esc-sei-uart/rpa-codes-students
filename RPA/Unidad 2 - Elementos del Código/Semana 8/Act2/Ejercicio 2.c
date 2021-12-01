/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 08
Tema: Sentencia de seleccion if-else

Descripcion: Solicitar al cajero de una tienda el monto a pagar de una nueva venta.
Si el monto ingresado es negativo, terminar la sesi�n. Por el contrario, si el monto es v�lido entonces preguntarle la forma de pago: si se
ingresa el c�digo 'T' corresponde a pago con Tarjeta de Cr�dito y se aplicar� 10% de recargo, caso contrario se considerar� pago en efectivo pero sin recargo.
Autor: Angel Alvarez
A�o: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones
    float precio, recargo;
    char forma;
    //Inicio
    printf("Hola, mucho gusto, ahora voy a pedirle un precio y la forma de pago\n");
    printf("Por favor, digame el precio del producto: ");
    //Entrada
    scanf("%f" , &precio);
    printf("--------------------\n");
    if (precio > 0)
    {
        printf("�Desea pagar con tarjeta?\n");
        printf("Se a�adira un recargo del 10 porciento con tarjeta\n");
        printf("(Ingrese Si o la palabra Tarjeta para aceptar)\n");
        fflush(stdin);
        scanf("%c" , &forma);
        if (forma == 'T')
        {
            recargo = precio * 10 / 100;
            precio = precio + recargo;
            printf("Con tarjeta el monto a pagar seria de %f$" , precio);
        }
        else
        {
            printf("Sin tarjeta el monto a pagar seria de %f$" , precio);
        }
    }
    else
    {
        printf("El precio es invalido");
    }
}
