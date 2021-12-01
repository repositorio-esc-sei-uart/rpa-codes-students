/*
 (1649) Resolución de Problemas y Algoritmos
 Clase N° 7
 Tema: Lenguaje C

 Descripción: Dada una ecuación cuadrática ax2 +bx +c = 0, obtenga por teclado los
coeficientes a, b, y c. De acuerdo al valor de su discriminante d = b
2 −4ac, muestre los siguientes mensajes:
1. si d resulta negativo, mostrar "solución no pertenece a los reales"
2. si d resulta positivo, mostrar "dos soluciones reales y distintas"
3. si d resutla cero, mostrar "solución real única"

 Autor: Ochoa Andrea Daniela
 Año:2021
 */
#include <stdio.h>
int main(){
float a, b, c, D;
printf("\nEcuacion de segundo grado\n\n");
printf("  2\n");
printf("ax + bx + c = 0 \n\n");
printf("Ingresa el valor de a: ");
scanf("%f",&a);
printf("Ingresa el valor de b: ");
scanf("%f",&b);
printf("Ingresa el valor de c: ");
scanf("%f",&c);

    D=b*b-(4*a*c);

    if(D==0)
    printf("Solucion real unica.");
    else if (D>0) {
    printf("Dos soluciones reales y distintas");
    }
    else
    printf("Las soluciones no pertenecen a los reales.");
    return 0;
}
