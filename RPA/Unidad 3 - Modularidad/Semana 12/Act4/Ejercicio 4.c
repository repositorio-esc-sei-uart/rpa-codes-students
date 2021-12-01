/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 12
Tema: Funciones en C

Descripcion: Escribir una funci�n que verifique si un a�o es bisiesto o no con el siguiente prototipo:
[int esbisiesto(int aa)] cuyo par�metro [aa] es el a�o a verificar y retorna 0 (falso) o 1 (verdadero).

Autor: Angel Alvarez
A�o: 2021
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
    printf("El a�o %d es un a�o bisiesto" , num);
    else
    printf("El a�o %d no es un a�o bisiesto" , num);
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
    printf("Hola, mucho gusto, ahora voy a pedirle un a�o y le dire si este es bisiesto o no\n");
    printf("---------------\n");
    printf("Por favor, ingrese un a�o ");
}
