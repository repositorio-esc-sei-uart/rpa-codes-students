/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 22
Tema: Arreglos de estructuras

Descripcion:
Se requiere definir dos estructuras:
> TipoProducto(codtipo, tipo)
> Producto(codprod, descripcion, codtipo, precio)
1 Cargar un arreglo con tres 3 tipos de productos, 'Lacteos', 'Gaseosas', 'Fideos' con códigos aleatorios asignados cada uno.
2 Cargar 5 productos en un arreglo. (Aclaración: El producto cargado debe tener un codtipo que exista en el arreglo de TipoProducto.
Se sugiere mostrarle al usuario los tipos existentes para que pueda seleccionar)
3 Buscar productos que sean Gaseosas.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Definiciones fijas
#define  MAX 50
#define  LIMP 5
//Struct
typedef struct
{
    int codtipo;
    char tipo[MAX];
} TipoProducto;
typedef struct
{
    int codprod;
    char descripcion[MAX];
    int codtipo;
    float precio;
} Producto;
//Modulos
void saludodesiempre();
int buscargaseosas(TipoProducto tipos[3], int cod);
void mostrarproductos(Producto Prod[LIMP], TipoProducto TP[3]);

int main ()
{
    //Inicio
    //Definiciones
    TipoProducto TP[3] = { {1, "Lacteos"}, {2, "Gaseosas"}, {3, "Fideos"} };
    Producto Prod[LIMP];
    int contador, aux;
    //Inicializaciones
    //Inicio
    saludodesiempre();
    //Entrada
    for(contador = 0; contador < LIMP; contador++) {
        aux = 0;

        printf("Codigo de los productos %s(%d) %s(%d) %s(%d): ", TP[0].tipo, TP[0].codtipo, TP[1].tipo, TP[1].codtipo, TP[2].tipo, TP[2].codtipo);
        scanf("%d", &aux);

        Prod[contador].codprod = aux;
        printf("¿Cual es el precio del producto? ");
        scanf("%f", &Prod[contador].precio);
        printf("Descripción del producto: ");
        fflush(stdin);
        gets(Prod[contador].descripcion);
    }
    //Salida
    mostrarproductos(Prod, TP);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a \n");
    printf("---------------\n");
    printf("Por favor, ");
}

int buscargaseosas(TipoProducto tipos[3], int cod)
{
    int band = 0;
    if(tipos[1].codtipo == cod)
        band = 1;
    return band;
}

void mostrarproductos(Producto Prod[LIMP], TipoProducto TP[3])
{
    int aux, band;

    for (int contador = 0; contador < LIMP; contador++)
    {
        aux = 0;
        printf("\nRegistro #%d", contador + 1);
        aux = buscargaseosas(TP, Prod[contador].codtipo);
        printf("\nProducto: %s", Prod[contador].codtipo);
        printf("\nPrecio: %f", Prod[contador].precio);
        printf("\nDescripcion: %s", Prod[contador].descripcion);
        band = aux + band;
    }
    printf("Se encontraron un total de %d gaseosas", aux);
}
