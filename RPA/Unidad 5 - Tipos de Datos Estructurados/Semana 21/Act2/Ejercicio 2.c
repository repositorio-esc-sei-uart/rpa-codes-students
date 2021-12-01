/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 21
Tema: Estructuras y Tipos derivados

Descripcion:
Dado el siguiente anidamiento de estructura:

struct Cliente
{
int nrocliente;
char nombre[20];
char apellido[20];
struct Direccion direccion;
};

struct Direccion
{
char calle[40];
int numero;
char ciudad[40];
int codpostal;
};

Definir funciones para registrar datos de cliente y mostrar rótulo para envío de pedido:
Sr./Sra. <nombre> <apellido>
<calle> <numero>
C.P. <codpostal> - <ciudad>

Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Definiciones fijas
#define  MAX 40
//Struct
struct Direccion
{
char calle[MAX];
int numero;
char ciudad[MAX];
int codpostal;
};
struct Cliente
{
int nrocliente;
char nombre[MAX];
char apellido[MAX];
struct Direccion direccion;
};
typedef struct Cliente Cliente;
//Modulos
void saludodesiempre();
Cliente llenarDatos();
void mostrarRotulo(struct Cliente C);

int main ()
{
    //Inicio
    //Definiciones
    struct Cliente Clie;
    //Inicio
    saludodesiempre();
    //Entrada
    Clie = llenarDatos();
    //Salida
    mostrarRotulo(Clie);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle los datos de un cliente y mostrarselo como rotulo de envio\n");
    printf("---------------\n");
    printf("Por favor, ");
}

Cliente llenarDatos()
{
    Cliente C;

    printf("Ingrese el numero de cliente: ");
    scanf("%d", &C.nrocliente);
    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(C.nombre);
    printf("Ingrese el apellido: ");
    fflush(stdin);
    gets(C.apellido);
    printf("Ingrese el nombre de la calle: ");
    fflush(stdin);
    gets(C.direccion.calle);
    printf("Ingrese el numero de la calle: ");
    scanf("%d", &C.direccion.numero);
    printf("Ingrese el nombre de la ciudad: ");
    fflush(stdin);
    gets(C.direccion.ciudad);
    printf("Ingrese el codigo postal: ");
    scanf("%d", &C.direccion.codpostal);

    return C;
}

void mostrarRotulo(struct Cliente C)
{
    printf("\n---------------\n");
    printf("Sr./Sra. %s %s\n%s %d\nC.P. %d - %s" , C.nombre, C.apellido, C.direccion.calle, C.direccion.numero, C.direccion.codpostal, C.direccion.ciudad);
}
