/**

(1649) Resolucion de problemas y algoritmos
Clase Nro: 09
Tema: le lenguaje C

Descripcion: Ingrese 2 caracteres y procesarlas de acuerdo a un conjunto de opciones: (1)
intercambiar, (2) convertir a mayúsculas: si son letras, convertirlas a mayusculas,
(3) convertir a minúsculas: si son letras, convertirlas a minúsculas, (4) si son
digitos, mostrar su suma.
Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int op=0;
char a, b, aux;
printf("MENU \n");
printf("Seleccione la opcion deseada \n");
printf(" 1) Intercambiar \n");
printf(" 2) Convertir a mayuscula \n");
printf(" 3) Convertir a minuscula \n");
printf(" 4) Suma de digitos \n");
scanf("%d", &op);
switch (op)
{
case 1:
fflush(stdin);
printf("Ingrese primer caracter ");
scanf("%c",&a);
fflush(stdin);
printf("Ingrese segundo caracter \n");
scanf("%c",&b);
aux=a;
a=b;
b=aux;
printf("Intercambio \n");
fflush(stdin);
printf("Primer caracter: %c \n", a);
fflush(stdin);
printf("Segundo caracter: %c", b);
break;
case 2:
fflush(stdin);
printf("Ingrese primer caracter \n");
scanf("%c", &a);
fflush(stdin);
printf("Ingrese segundo caracter \n");
scanf("%c", &b);
if (isalpha(a) && isalpha(b))
{
if (islower(a) && islower(b))
{
fflush(stdin);
printf("Letras convertidas a mayusculas: %c %c \n", toupper(a), toupper(b));
fflush(stdin);
printf("Letras ingresadas: %c %c\n", a, b);
}
else
{
printf("Debe ingresar minusculas");
}
}
else
{
printf("Debe ingresar letras");
}
break;
case 3:
fflush(stdin);
printf("Ingrese primer caracter \n");
scanf("%c", &a);
fflush(stdin);
printf("Ingrese segundo caracter \n");
scanf("%c", &b);
if (isalpha(a) && isalpha(b))
{
if (isupper(a) && isupper(b))
{
fflush(stdin);
printf("Letras convertidas a minusculas: %c %c \n", tolower(a), tolower(b));
fflush(stdin);
printf("Letras ingresadas: %c %c \n", a, b);
}
else
{
printf("Debe ingresar mayusculas");
}
}
else
{
printf("Debe ingresar letras");
}

break;
case 4:
default:
printf("Opcion invalida");
}
return 0;
}
