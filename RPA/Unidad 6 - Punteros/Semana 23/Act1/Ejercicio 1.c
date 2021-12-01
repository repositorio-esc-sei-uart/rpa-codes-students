/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 23
Tema:Manipulacion de variables mediante punteros

Descripcion: Dado dos números ingresados por teclado y almacenados en dos variables locales a main,
escriba una función que intercambie sus contenidos void intercambiar(int *a, int *b).
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
//Modulos
void saludodesiempre();
void intercambiar(int *a, int *b);

int main ()
{
    //Inicio
    //Definiciones
    int num1, num2, *pnum1, *pnum2;
    //Inicializaciones
    pnum1 = &num1;
    pnum2 = &num2;
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%d", pnum1);
    printf("Ingrese el segundo numero ");
    scanf("%d", pnum2);
    //Calculo
    intercambiar(pnum1, pnum2);
    //Salida
    printf("---------------\n");
    printf("El valor del primer numero es: %d\ny el valor del segundo numero es: %d", num1, num2);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle 2 numeros y voy a intercambiarlos\n");
    printf("---------------\n");
    printf("Por favor, ingrese el primer numero ");
}

void intercambiar(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}
