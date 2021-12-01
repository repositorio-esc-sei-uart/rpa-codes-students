/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Calcular el área de un círculo. Utilice una constante PI=3.141592
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
#define pi 3.141592
int main()
{
float r, area;
printf("Bienvenido \n");
printf("Ingrese el radio (r) del circulo: \n");
scanf("%f", &r);
area=pi*r*r;
printf("El area es: %f ", area);
return 0;
}
