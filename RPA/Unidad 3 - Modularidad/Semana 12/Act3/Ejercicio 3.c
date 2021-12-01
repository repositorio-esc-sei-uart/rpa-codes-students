/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 12
Tema: Funciones en C

Descripcion: Diseñar una función denominada [elmayor] que retorne el mayor de tres números pasados por parámetros.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

void saludodesiempre();
int elmayor(int num1, int num2, int num3);

int main ()
{
    //Definiciones
    int num1, num2, num3;
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%d" , &num1);
    printf("Ingrese el segundo numero ");
    scanf("%d" , &num2);
    printf("Ingrese el tercer numero ");
    scanf("%d" , &num3);
    //Calculo
    int mayor = elmayor(num1, num2, num3);
    //Salida
    printf("De entre los numeros dados el numero mas grande es: %d" , mayor);
    //Fin
    return 0;
}
//Modulos
int elmayor(int num1, int num2, int num3)
{
    int mayor;
    if (num1 > num2 && num1 > num3)
        mayor = num1;
    if (num2 > num1 && num2 > num3)
        mayor = num2;
    if (num3 > num2 && num3 > num1)
        mayor = num3;
    return mayor;
}
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a pedir 3 numeros y le dire cual es el mayor\n");
    printf("---------------\n");
    printf("Por favor, ingrese el primer numero ");
}
