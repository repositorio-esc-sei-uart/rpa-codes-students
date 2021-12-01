/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 08
Tema: Sentencia de Selección if-else

Descripcion: Dada una ecuación cuadrática ax2 +bx +c = 0, obtenga por teclado los
coeficientes a, b, y c. De acuerdo al valor de su discriminante d = b
2 −4ac, muestre los siguientes mensajes:
    1 si d resulta negativo, mostrar "solución no pertenece a los reales"
    2 si d resulta positivo, mostrar "dos soluciones reales y distintas"
    3 si d resutla cero, mostrar "solución real única"
Autor: Pablo Laime
Año: 2021
*******************************************************************************/
#include <stdio.h>
 int main ()
{
    //Defino las variables y las inicializo en 0
    int a=0, b=0, c=0, d=0;

    //Informo al cliente lo que se va a realizar
    printf ("Ingrese los valores de a b y c que seran usados en la formula d=(b*b)-4ac ");

    //Ingreso los valores de a b y c
    printf("\nIngrese el valor de A: ");
    scanf ("%d", &a);

    printf ("\nIngrese el valor de B: ");
    scanf ("%d", &b);

    printf ("\nIngrese el valor de C: ");
    scanf ("%d", &c);

    //Asigno la discriminante a la variable d
    d = (b*b)-4*a*c;

    printf ("\nEl resultado de la formula es: %d ", d);

    //Segun el resultado muestro los mensajes del enunciado
    if (d<0)
        printf ("\nLa solucion no pertenece a los numeros reales");
    else
        if (d>0)
            printf ("\nDos soluciones reales y distintas");
        else
            if (d==0)
                printf ("\nSolucion real unica");
}


