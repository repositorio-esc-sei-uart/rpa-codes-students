/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Obtener un entero por teclado y decir si es un positivo par, negativo par,
positivo impar, negativo impar, ó cero.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int num=0, par=0;
printf("Ingrese un numero entero:\n");
scanf("%d", &num);
par=num%2;
if (num==0)
printf("%d: es un cero",num);
else
{
if (num<0 && par==0)
{
printf("%d: es un negativo par", num);
}
else
{
if(num<0 && par!=0)
{
printf("%d: es un negativo impar", num);
}
else
{
if(num>0 && par==0)
printf("%d: es un postivo par", num);
else
printf("%d: es un positivo impar", num);
}
}
}
return 0;
}

