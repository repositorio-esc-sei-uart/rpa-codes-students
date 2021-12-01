/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 12
Tema: Funciones en C

Descripcion: Diseñar una función que retorne el factorial de un número n (ejemplo: 3!=3x2x1=6).
Utilice el tipo de valor de retorno [long] (especificador de formato en printf: %ld).
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

void saludodesiempre();
int factorial(int num);

int main ()
{
    //Definiciones
    int num;
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%d" , &num);
    //Calculo
    long res = factorial(num);
    //Salida
    if (num > 0)
    printf("El resultado de la factorizacion de %d es %ld" , num , res);
    else
    printf("El numero ingresado es ivalido");
    //Fin
    return 0;
}
//Modulos
int factorial(int num)
{
    //definiciones
    int cont;
    long resu;
    //Inicializaciones
    cont = 0;
    resu = 1;
    //Calculo
    if (num > 0)
    {
        do
        {
            cont++;
            resu = resu * cont;
        }
        while (cont!= num);
    }
    //Salida
    return resu;
}
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a perdirle un numero y le voy a dar su factorial\n");
    printf("---------------\n");
    printf("Por favor, ingrese el numero a factorizar ");
}
