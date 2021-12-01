/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 08
Tema: Sentencia de Selección if-else

Descripcion: Implemente el algoritmo del ejercicio 4 de la clase 03
Autor: Pablo Laime
Año: 2021
*******************************************************************************/

#include <stdio.h>

int main ()
{
//Defino las variables
int monto=0;
float monto_recargo=0, recargo=0;
char b, t;

//Leo el monto a pagar
printf ("Ingrese el monto a pagar \n");
scanf ("%d", &monto);
fflush (stdin);

//Verifico que el monto ingresao sea valido
    if (monto > 0){
        printf ("\nEl monto ingresado es valido ");
        printf ("\nIngrese la forma de pago, (t) Tarjeta (+10% de recargo) , Efectivo (Intro) ");
        scanf ("%c", &b);
        fflush (stdin);
        }
            if (b != t)
                {
                recargo = monto * 10 / 100;
                monto_recargo = recargo + monto;
                printf ("\nEl monto total a pagar es: $ %.2f", monto_recargo);
                }
            else
                printf ("\nEl monto total a pagar es: $ %d", monto);

//else
  //  printf ("\nEl monto ingresado es invalido");
    //Aca lo comente por que me dio error

}
