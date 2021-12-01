/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 11
Tema: le lenguaje C

Descripcion: Diseñar un menú con las siguientes opciones:
1 Calcular la potencia de ab. Ej: 24 = 2 *2 *2 * 2 = 16
2 Calcular el factorial de un número. Ej: 4! = 4 * 3 * 2 * 1 = 24
3 Salir
El programa termina cuando el usuario elige la opción salir. Diseñe los algoritmos
de cáculos.

Autor: DAVID ZERPA
Año: 2021
*/
#include <stdio.h>
int main()
{
int op=0, fac=0, factorial=1, exp=0, cmul=0, base=0, potencia=0, mulf=1, aux;
printf("MENU: \n");
printf("1) Potencia\n");
printf("2) Factorial\n");
printf("3) Salir\n");
scanf("%d", & op);
        //VERSION WHILE
switch(op)
{
    case 1:
            printf("Ingrese la base: \n");
            scanf("%d", & base);
            printf("Ingrese el exponente \n");
            scanf("%d", & exp);
            while(cmul<exp)
            {
                potencia=base*base;
                cmul++;
            }
            printf("Potencia: %d", potencia);
            break;
    case 2:
            printf("Ingrese un numero:\n");
            scanf("%d", & fac);
            aux=fac;
            while (mulf=fac)
            {
            factorial=factorial*mulf;
            fac--;
            }
            printf("!%d es: %d \n", aux, factorial);
            break;
    case 3:
            printf("Hasta luego");
            break;

    default:
            printf("Opcion incorrecta");
}
        //VERSION DO-WHILE
/**
switch(op)
{
    case 1:
            printf("Ingrese la base: \n");
            scanf("%d", & base);
            printf("Ingrese el exponente \n");
            scanf("%d", & exp);
            do
            {
                potencia=base*base;
                cmul++;
            }
            while(cmul<exp);
            printf("Potencia: %d", potencia);
            break;
    case 2:
            printf("Ingrese un numero:\n");
            scanf("%d", & fac);
            aux=fac;
            do
            {
            factorial=factorial*mulf;
            fac--;
            }
            while (mulf=fac);
            printf("!%d es: %d \n", aux, factorial);
            break;
    case 3:
            printf("Hasta luego");
            break;
    default:
            printf("Opcion incorrecta");
}
*/
return 0;
}
