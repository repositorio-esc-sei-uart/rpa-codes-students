/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 13
Tema: Alcance de variables y mas funciones

Descripcion: Diseñar una función denominada [int cantidadDigitos(long num)] que permita obtener la cantidad de dígitos que tiene un número entero.
Finalmente, diseñar [int validarDNI(long num)] que controle que el número sea un valor positivo y que se componga entre 7 y 8 digitos
para aceptar DNI entre 9.999.999 y 99.999.999.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

void saludodesiempre();
int cantidadDigitos(long num);
int validarDNI(long num);

int main ()
{
    //Definiciones
    long DNI;
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%ld" , &DNI);
    //Calculo
    int cantidad = cantidadDigitos(DNI);
    int bandera = validarDNI(DNI);
    //Salida
    printf("---------------\n");
    printf("El numero dado tiene %d digitos\n" , cantidad);
    if (bandera == 1)
        printf("El numero %ld es un DNI valido" , DNI);
    else
        printf("El numero %ld NO es un DNI valido" , DNI);
    //Fin
    return 0;
}
//Modulos
int cantidadDigitos(long num)
{
    int cantidad;
    cantidad = 1;

    while(num / 10 > 0)
    {
        num = num / 10;
        cantidad++;
    }

    return cantidad;
}

int validarDNI(long num)
{
    int bandera;
    bandera = 0;

    if (num > 0)
    {
        int cantidad = cantidadDigitos(num);
        if (cantidad >= 7 && cantidad <= 8)
            bandera = 1;
    }

    return bandera;
}

void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a pedir un numero de DNI y le dire cuantos digitos tiene y si puede ser un DNI valido\n");
    printf("---------------\n");
    printf("Por favor, ingrese un DNI ");
}
