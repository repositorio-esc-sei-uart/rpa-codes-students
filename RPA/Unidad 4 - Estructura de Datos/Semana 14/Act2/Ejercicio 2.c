/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 14
Tema: Arreglos unidimensionales

Descripcion: Cargar un vector con 10 números ingresados por teclado y mostrar su promedio.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
//Modulos
void saludodesiempre();
//Definiciones fijas
#define VECL 10
//VECL significa Vector Length o Vector Longitud
int main ()
{
    //Inicio
    //Definiciones
    int vec[VECL];
    int contador, numero;
    float res, prom;
    //Inicializaciones
    contador = 0;
    numero = 1;
    //Inicio
    saludodesiempre();
    //Entrada
    while (contador < VECL)
    {
        printf("[%d]Por favor, ingrese un numero " , numero);
        scanf("%d" , &vec[contador]);
        res = res + vec[contador];
        contador++;
        numero++;
    }
    //Calculo
    prom = res / 10;
    //Salida
    printf("---------------\n");
    printf("Los numeros dados fueron:\n");
    for (contador = 0; contador < VECL; contador++)
        printf("[ %d ]" , vec[contador]);
    printf("\n");
    printf("---------------\n");
    printf("El promedio de los numeros dados es de %f" , prom);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle 10 numeros y voy a darle su promedio\n");
    printf("---------------\n");
}
