/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 22
Tema: Arreglos de estructuras

Descripcion: Como continuación del ejercicio 1 de la clase 21, se pide almacenar los registros de 4 alumnos en un arreglo.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Definiciones fijas
#define  MAX 20
#define  VECL 4
//Struct
typedef struct
{
    char nombre[MAX];
    char apellido[MAX];
    int legajo;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float promedio;
} Alumno;
//Modulos
void saludodesiempre();
Alumno leerRegistro();
float calcularPromedio(float N1,float N2,float N3,float N4);
void mostrarRegistro(Alumno A);

int main ()
{
    //Inicio
    //Definiciones
    int contador;
    Alumno Al[VECL];
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    for (contador = 0; contador < VECL; contador++)
    {
        printf("Ingrese los datos del alumno %d:\n" , contador+1);
        Al[contador] = leerRegistro();
        printf("---------------\n");
    }
    //Calculo
    for (contador = 0; contador < VECL; contador++)
        Al[contador].promedio = calcularPromedio(Al[contador].nota1, Al[contador].nota2, Al[contador].nota3, Al[contador].nota4);
    //Salida
    for (contador = 0; contador < VECL; contador++)
    {
        printf("Estos son los datos del alumno %d:\n" , contador+1);
        mostrarRegistro(Al[contador]);
        printf("---------------\n");
    }
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle los datos de 4 alumnos, sus notas y voy a darle su promedio\n");
    printf("---------------\n");
    printf("Por favor, ");
}

Alumno leerRegistro()
{
    Alumno A;

    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(A.nombre);
    printf("Ingrese el apellido: ");
    fflush(stdin);
    gets(A.apellido);
    printf("Ingrese el legajo: ");
    scanf("%d", &A.legajo);
    printf("Ingrese la primera nota: ");
    scanf("%f", &A.nota1);
    printf("Ingrese la Segunda nota: ");
    scanf("%f", &A.nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &A.nota3);
    printf("Ingrese la cuarta nota: ");
    scanf("%f", &A.nota4);

    return A;
}

float calcularPromedio(float N1,float N2,float N3,float N4)
{
    float total;
    total = (N1 + N2 + N3 + N4) / 4;

    return total;
}

void mostrarRegistro(Alumno A)
{
    printf("Nombre: %s\n", A.nombre);
    printf("Apellido: %s\n", A.apellido);
    printf("Legajo: %d\n", A.legajo);
    printf("Nota 1: %f\n", A.nota1);
    printf("Nota 2: %f\n", A.nota2);
    printf("Nota 3: %f\n", A.nota3);
    printf("Nota 4: %f\n", A.nota4);
    printf("Promedio: %f\n", A.promedio);
}
