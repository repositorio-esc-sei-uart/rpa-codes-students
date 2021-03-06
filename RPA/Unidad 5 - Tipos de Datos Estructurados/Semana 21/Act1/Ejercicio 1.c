/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 21
Tema: Estructuras y Tipos derivados

Descripcion:
Se desea registrar los datos de un alumno en una estructura con los campos:
legajo, nombre, apellido, 4 notas, y promedio. Crear tres funciones:
> Alumno leerRegistro(); // lee datos por teclado, sin el promedio
> float calcularPromedio(float notas[4]);
> void mostrarRegistro(Alumno a);

Autor: Angel Alvarez
A?o: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Definiciones fijas
#define  MAX 20
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
    Alumno Al;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    Al = leerRegistro();
    //Calculo
    Al.promedio = calcularPromedio(Al.nota1, Al.nota2, Al.nota3, Al.nota4);
    //Salida
    mostrarRegistro(Al);
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
    printf("\nDatos del Alumno\n");
    printf("Nombre: %s\n", A.nombre);
    printf("Apellido: %s\n", A.apellido);
    printf("Legajo: %d\n", A.legajo);
    printf("Nota 1: %f\n", A.nota1);
    printf("Nota 2: %f\n", A.nota2);
    printf("Nota 3: %f\n", A.nota3);
    printf("Nota 4: %f\n", A.nota4);
    printf("Promedio: %f\n", A.promedio);
}
