/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 08
Tema: Sentencia de seleccion if-else

Descripcion: Dada una ecuación cuadratica ax^2+bx+c=0, obtenga por teclado los coeficientes a, b, y c. De acuerdo al valor de su discriminante d=b^2−4ac,
muestre los siguientes mensajes:
1_ si d resulta negativo, mostrar "solucion no pertenece a los reales"
2_ si d resulta positivo, mostrar "dos soluciones reales y distintas"
3_ si d resutla cero, mostrar "solucion real unica"
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones
    int a, b, c, d, aux1, aux2;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a pedir los coeficientes a b y c de una ecuacion cuadratica (Ax^2+Bx+C=0)\n");
    printf("Por favor, ingrese el valor de A: ");
    //Entrada
    scanf("%d" , &a);
    printf("Por favor, ingrese el valor de B: ");
    scanf("%d" , &b);
    printf("Por favor, ingrese el valor de C: ");
    scanf("%d" , &c);
    printf("--------------------\n");
    //Calculo
    aux1 = b * b;
    aux2 = 4 * a * c;
    d = aux1 - aux2;
    //Salida
    printf("d = %d\n" , d);
    if (d != 0)
    {
        if (d > 0)
        {
            printf("dos soluciones reales y distintas");
        }
        else
        {
            printf("solucion no pertenece a los reales");
        }
    }
    else
    {
        printf("solucion real unica");
    }
}
