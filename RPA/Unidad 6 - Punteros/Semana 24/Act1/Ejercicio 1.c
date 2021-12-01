/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 24
Tema: Punteros y la memoria dinamica

Descripcion: Dada la siguiente estructura:
struct alumno
{
int legajo;
char *nombre;
char *apellido;
int notas[3];
float promedio;
}
Se desea almacenar la información de 4 alumnos en un arreglo mediante un puntero.
El promedio es un campo calculado de las 3 notas. Por último, ordenar por apellido.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Definiciones fijas
#define  MAX 20
#define  ALUM 4
#define  NOTA 3
//Struct
typedef struct
{
    int legajo;
    char *nombre;
    char *apellido;
    int notas[3];
    float promedio;
} Alumno;
//Modulos
void saludodesiempre();
void leerRegistro(Alumno *a);
float calcularPromedio(int nota[NOTA]);
void mostrarRegistro(Alumno A);

int main ()
{
    //Inicio
    //Definiciones
    int contador;
    Alumno Al[ALUM];
    Alumno *PAl[ALUM];
    //Inicializaciones
    PAl[ALUM] = &Al[ALUM];
    //Inicio
    saludodesiempre();
    //Entrada
    for (contador = 0; contador < ALUM; contador++)
    {
        printf("Ingrese los datos del alumno %d:\n" , contador+1);
        leerRegistro(PAl[contador]);
    }
    //Calculo
    for (contador = 0; contador < ALUM; contador++)
    {
    Al[contador].promedio = calcularPromedio(PAl[contador]->notas);
    }
    //Salida
    for (contador = 0; contador < ALUM; contador++)
    {
        printf("Estos son los datos del alumno %d:\n" , contador+1);
        mostrarRegistro(Al[contador]);
    }
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle los datos de un alumno, sus notas y voy a darle su promedio\n");
    printf("---------------\n");
    printf("Por favor, ");
}

void leerRegistro(Alumno *A)
{
    int contador;

    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(A->nombre);
    printf("Ingrese el apellido: ");
    fflush(stdin);
    gets(A->apellido);
    printf("Ingrese el legajo: ");
    scanf("%d", &A->legajo);
    printf("(Entre 1 y 10)\n");
    for (contador = 0; contador < NOTA; contador++)
    {
        printf("Ingrese la nota: ");
        scanf("%d", &A->notas[contador]);
        if(A->notas[contador] < 1 || A->notas[contador] > 10)
        {
            printf("El numero ingresado esta fuera del rango");
            contador--;
        }
    }
}

float calcularPromedio(int nota[NOTA])
{
    int contador;
    float total, suma;

    for (contador = 0; contador < NOTA; contador++)
    {
        suma = suma + nota[contador];
    }
    total = suma / NOTA;

    return total;
}

void mostrarRegistro(Alumno A)
{
    int contador;

    printf("\nDatos del Alumno\n");
    printf("Nombre: %s\n", A.nombre);
    printf("Apellido: %s\n", A.apellido);
    printf("Legajo: %d\n", A.legajo);
    for (contador = 0; contador < NOTA; contador++)
    {
        printf("Nota %d: %f\n", contador+1 , A.notas[contador]);
    }
    printf("Promedio: %f\n", A.promedio);
}
