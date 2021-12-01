/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: El lenguaje C

Descripcion: Escribir un algoritmo que obtenga de teclado dos números enteros y determine su suma, resta, multiplicación, división y módulo.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

int main ()
{
    //Definiciones
    int num1, num2, sum, res, mul, div, mod;
    //Inicio
    printf("Hola, mucho gusto, ahora voy a pedirle dos numeros enteros y los sumare restare multiplicare dividire y sacare su modulo \n");
    printf("Por favor, ingrese el primer numero: ");
    //Entrada
    scanf("%d" , &num1);
    printf("--------------------\n");
    printf("Por favor, ingrese el segundo numero: ");
    scanf("%d" , &num2);
    //Calculo
    sum = num1 + num2;
    res = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    //Salida
    printf("--------------------\n");
    printf("Su suma seria: %d\n" , sum);
    printf("--------------------\n");
    printf("Su resta seria: %d\n" , res);
    printf("--------------------\n");
    printf("Su multiplicacion seria: %d\n" , mul);
    printf("--------------------\n");
    printf("Su division seria: %d\n" , div);
    printf("--------------------\n");
    printf("Su modulo seria: %d\n" , mod);
}
