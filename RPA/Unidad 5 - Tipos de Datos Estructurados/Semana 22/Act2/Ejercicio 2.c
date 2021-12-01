/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 22
Tema: Arreglos de estructuras

Descripcion:
Dada la siguiente estructura:

struct Paciente
{
int dni;
char nombre[20];
char apellido[20];
struct Fecha fecnac;
float altura;
}

struct Fecha contiene dia, mes y año. Se pide crear un menú de opciones para trabajar con un arreglo de 5 pacientes:
1 Cargar paciente
2 Mostrar todos los pacientes
3 Mostrar todos los pacientes ordenados por apellido
4 Buscar paciente por dni
5 Buscar paciente por año de nacimiento
6 Calcular el promedio de alturas
7 Salir
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Definiciones fijas
#define  MAX 20
#define  VECL 2
//Struct
struct Fecha
{
    int dia;
    int mes;
    int ano;
};

typedef struct
{
    int dni;
    char nombre[MAX];
    char apellido[MAX];
    struct Fecha fecnac;
    float altura;
} Paciente;
//Modulos
void saludodesiempre();
Paciente CargarDatos();
void mostrarPacientes(Paciente P);
void mostrarPacientesOrdenApellido(Paciente P, char apellido[MAX]);
void buscarPacientePorDNI(Paciente P[VECL], int DNI);
void buscarPacientePorNacimiento(Paciente P[VECL], int A);
float calcularAlturaPromedio(Paciente P[VECL]);

int main ()
{
    //Inicio
    //Definiciones
    int opcion, contador;
    float aux;
    Paciente Pac[VECL];
    //Inicializaciones
    opcion = -1;
    //Inicio
    saludodesiempre();
    //Resto
    while(opcion != 0)
    {
        printf("\n[ 1 ]Cargar datos de los pacientes\n[ 2 ]Mostrar todos los pacientes\n[ 3 ]Mostrar todos los pacientes en orden por apellido\n[ 4 ]Buscar un paciente por DNI\n[ 5 ]Buscar un paciente por año de nacimiento\n[ 6 ]Calcular promedio de los pacientes\n[ 0 ]Salir\n");
        scanf("%d" , &opcion);
        printf("-----------------------------------\n");
        switch(opcion)
            {
            case 1:
                {
                    printf("Eligio cargar datos\n");
                    for (contador = 0; contador < VECL; contador++)
                    {
                        printf("---------------\n");
                        printf("Ingrese los datos del paciente %d:\n" , contador+1);
                        Pac[contador] = CargarDatos();
                    }
                    printf("---------------\n");
                break;
                }
            case 2:
                {
                    printf("Eligio mostrar pacientes\n");
                    for (contador = 0; contador < VECL; contador++)
                    {
                        printf("---------------\n");
                        printf("Estos son los datos del paciente %d:\n" , contador+1);
                        mostrarPacientes(Pac[contador]);
                        printf("\n---------------\n");
                    }
                break;
                }
            case 3:
                {
                    printf("Eligio mostrar pacientes por apellido\n");
                    printf("\n---------------\n");
                    printf("No pude hacer esta opcion, perdone.");
                    printf("\n---------------\n");
                break;
                }
            case 4:
                {
                    printf("Eligio buscar paciente por DNI\n");
                    printf("\n---------------\n");
                    printf("Ingrese el DNI del paciente: ");
                    scanf("%d", &contador);
                    buscarPacientePorDNI(Pac, contador);
                    printf("\n---------------\n");
                break;
                }
            case 5:
                {
                    printf("Eligio buscar paciente por fecha de nacimiento\n");
                    printf("\n---------------\n");
                    printf("Ingrese el año de nacimiento del paciente: ");
                    scanf("%d", &contador);
                    buscarPacientePorNacimiento(Pac, contador);
                    printf("\n---------------\n");
                break;
                }
            case 6:
                {
                    printf("Eligio calcular el promedio de alturas\n");
                    printf("---------------\n");
                    aux = calcularAlturaPromedio(Pac);
                    printf("El promedio de la altura de los pacientes es de %f", aux);
                    printf("\n---------------\n");
                break;
                }
            case 0:
                {
                printf("Saliendo...\n");
                break;
                }
            default:
                {
                printf("ERROR:Opcion no valida\n");
                printf("---------------\n");
                break;
                }
            }
    }
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a dar un menu de opciones para cargar y ver los datos de 5 pacientes\n");
    printf("---------------\n");
    printf("Por favor, elija una opcion");
}

Paciente CargarDatos()
{
    Paciente P;

    printf("Ingrese el DNI: ");
    scanf("%d", &P.dni);
    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(P.nombre);
    printf("Ingrese el apellido: ");
    fflush(stdin);
    gets(P.apellido);
    printf("Ingrese el dia de nacimiento: ");
    scanf("%d", &P.fecnac.dia);
    printf("Ingrese el mes de nacimiento: ");
    scanf("%d", &P.fecnac.mes);
    printf("Ingrese el año de nacimiento: ");
    scanf("%d", &P.fecnac.ano);
    printf("Ingrese la altura: ");
    scanf("%d", &P.altura);
    fflush(stdin);

    return P;
}

void mostrarPacientes(Paciente P)
{
    printf("DNI: %d\n", P.dni);
    printf("Nombre: %s\n", P.nombre);
    printf("Apellido: %s\n", P.apellido);
    printf("Fecha de nacimiento: El %d del %d de %d\n", P.fecnac.dia, P.fecnac.mes , P.fecnac.ano);
    printf("Altura: %f", P.altura);
}

void mostrarPacientesOrdenApellido(Paciente P, char apellido[MAX])
{
    //???
    printf("DNI: %d\n", P.dni);
    printf("Nombre: %s\n", P.nombre);
    printf("Apellido: %s\n", P.apellido);
    printf("Fecha de nacimiento: El %d del %d de %d", P.fecnac.dia, P.fecnac.mes , P.fecnac.ano);
    printf("Altura: %f", P.altura);
}

void buscarPacientePorDNI(Paciente P[VECL], int DNI)
{
    int pos = -1;

    for(int contador = 0; (contador < VECL) && (pos == -1); contador++)
    {
        if (P[contador].dni == DNI)
            pos = contador;
    }

    if (pos != -1)
    {
        printf("DNI: %d\n", P[pos].dni);
        printf("Nombre: %s\n", P[pos].nombre);
        printf("Apellido: %s\n", P[pos].apellido);
        printf("Fecha de nacimiento: El %d del %d de %d\n", P[pos].fecnac.dia, P[pos].fecnac.mes , P[pos].fecnac.ano);
        printf("Altura: %f\n", P[pos].altura);
    }
    else
        printf("El DNI ingresado no coincide con ningun paciente\n");
}

void buscarPacientePorNacimiento(Paciente P[VECL], int A)
{
    int pos = -1;

    for(int contador = 0; (contador < VECL) && (pos == -1); contador++)
    {
        if (P[contador].fecnac.ano == A)
            pos = contador;
    }

    if (pos != -1)
    {
        printf("DNI: %d\n", P[pos].dni);
        printf("Nombre: %s\n", P[pos].nombre);
        printf("Apellido: %s\n", P[pos].apellido);
        printf("Fecha de nacimiento: El %d del %d de %d\n", P[pos].fecnac.dia, P[pos].fecnac.mes , P[pos].fecnac.ano);
        printf("Altura: %f\n", P[pos].altura);
    }
    else
        printf("El año ingresado no coincide con ningun paciente\n");
}

float calcularAlturaPromedio(Paciente P[VECL])
{
    int contador;
    float total = 0;

    for (contador = 0; contador < VECL; contador++)
    {
        total = total + P[contador].altura;
        total = total / 2;
    }
    return total;
}
