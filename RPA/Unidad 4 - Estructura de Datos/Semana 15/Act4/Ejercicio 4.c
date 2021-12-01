/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 15
Tema: Arreglos como parametros de funciones

Descripcion:  Dado un vector con N=30 enteros que simula un tablero de interruptores con dos posibles valores 0-OFF y 1-ON,
inicializar el vector de interruptores en OFF, es decir, todos los elementos con valor cero, mediante la función void inicializar(int v[N]).
Luego manipular el tablero con las siguientes funciones:
# void encender(int v[N], int posicion) recibe una posición válida del tablero (entre 0 y N-1) que representa el interruptor que será encendido,
es decir, cambiará el contenido del elemento de la posición específca a 1.
# void contarInterruptores(int v[N]) muestra el detalle de cuántos interruptores están apagados (0-OFF) y cuántos están encendidos (1-ON).
Solicite al usuario qué interruptores desea encender hasta que ingrese -1 para terminar.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
//Modulos
void saludodesiempre();
void mostrarvector(int V[], int L);
void inicializar(int v[]);
void encender(int v[], int posicion);
void contarInterruptores(int v[]);
void mostrarPanel(int v[]);
//Definiciones fijas
#define VECL 30
//Variables globales
int ON;

int main ()
{
    //Inicio
    //Definiciones
    int interruptores[VECL];
    int posicion;
    //Inicio
    saludodesiempre();
    //Entrada
    inicializar(interruptores);
    //Calculo
    mostrarPanel(interruptores);
    //Salida
    printf("\n");
    printf("Adios, que tenga un buen dia.");
    //Fin
    printf("\n");
    return 0;
}
//Modulos
//Entrada: los interruptores y la posicion. Salida: un interruprtor encendido o un aviso de posicion invalida.
void encender(int v[], int posicion)
{
    v[posicion] = 1;
    if (posicion > 29 || posicion < -1)
    {
        printf("\n");
        printf("---------------------------------------------------------------------\n");
        printf("ERROR:El numero ingresado no es valido");
        printf("\n");
    }
}
//Entrada: los interruptores. Salida: Cantidad de interruptores encendidos.
void contarInterruptores(int v[])
{
    int contador;
    ON = 0;
    for (contador = 0; contador < VECL; contador++)
    {
        if (v[contador] == 1)
            ON++;
    }
}
//Entrada: los interruptores. Salida: Informacion visual de los interruptores y informacion de posibles acciones
void mostrarPanel(int v[])
{
    int opcion;
    printf("Elija que interruptores encender, una vez encendidos no se pueden volver a apagar\n\n");
    while (opcion != -1)
    {
    mostrarvector(v, VECL);
    printf("\n");
    contarInterruptores(v);
    printf("Hay un total de %d interruptores encendidos\n" , ON);
    printf("[0 - 29] Encender interruptor\t");
    printf("[-1] Salir\n");
    scanf("%d" , &opcion);
    encender(v, opcion);
    printf("---------------------------------------------------------------------\n");
    }
}
//Entrada: los interruptores. Salida: Los interruptores completamente apagados
void inicializar(int v[])
{
    int contador;
    for (contador = 0; contador < VECL; contador++)
        v[contador] = 0;
}
//Modulo para mostrar vectores
void mostrarvector(int V[] , int L)
{
    int contador;
    printf("\t\t\tPanel de interruptores\n");
    for (contador = 0; contador < L; contador++)
    {
        printf(" [ %d ] " , V[contador]);
        if (contador == 9 || contador == 19)
            printf("\n\n");
    }
    printf("\n");
}
//Saludo
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a mostrarle un panel con 30 interruptores apagados, encienda los que usted desee\n");
    printf("---------------\n");
}
