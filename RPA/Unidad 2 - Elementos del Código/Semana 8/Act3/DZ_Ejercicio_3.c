/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Dada una ecuación cuadrática ax2+bx +c = 0, obtenga por teclado los
coeficientes a, b, y c. De acuerdo al valor de su discriminante d = b2􀀀4ac,
muestre los siguientes mensajes:
1 si d resulta negativo, mostrar solución no pertenece a los reales
2 si d resulta positivo, mostrar dos soluciones reales y distintas
3 si d resutla cero, mostrar solución real única
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
main()
{
int a, b, c;
float d;
printf("Ingrese coeficiente cuadratico: ");
scanf("%d", &a);
printf("Ingrese coeficiente lineal: ");
scanf("%d", &b);
printf("Ingrese termino independiente: ");
scanf("%d", &c);
if (a==0)
printf("Solucion real unica");
else
{
d=((b*b)-(4*a*c));
if (d<0)
{
printf("Solucion no pertenece a los reales \n");
printf("Discriminante \n");
printf("%f",d);
}
else
{
if (d==0)
{
printf("Solucion real unica \n");
printf("Discriminante \n");
printf("%f",d);
}
else
printf("Dos soluciones reales y distintas \n");
printf("Discriminante \n");
printf("%f",d);
}
}

return 0;
}
