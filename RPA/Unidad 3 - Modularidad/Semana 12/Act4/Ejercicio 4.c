/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 12
Tema: Funciones en C

Descripcion: Escribir una función que verifique si un año es bisiesto o no con el siguiente prototipo:
[int esbisiesto(int aa)] cuyo parámetro [aa] es el año a verificar y retorna 0 (falso) o 1 (verdadero).

Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>

void saludodesiempre();
int anobisiesto(int num);

int main ()
{
    //Definiciones
    int num;
    //Inicio
    saludodesiempre();
    //Entrada
    scanf("%d" , &num);
    //Calculo
    int es = anobisiesto(num);
    //Salida
    if (es == 1)
    printf("El año %d es un año bisiesto" , num);
    else
    printf("El año %d no es un año bisiesto" , num);
    //Fin
    return 0;
}
//Modulos
int anobisiesto(int num)
{
    int cont;
    cont = 0;
    if (num % 4 == 0)
    {
        if (num % 100 != 0)
        cont = 1;
    }
    if (num % 400 == 0)
    cont = 1;
    return cont;
}
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle un año y le dire si este es bisiesto o no\n");
    printf("---------------\n");
    printf("Por favor, ingrese un año ");
}
