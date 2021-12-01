/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 26
Tema: Pilas y colas dinamicas. otras listas

Descripcion: Dada la siguiente estructura de nodo de una LDE:
    struct Nodo
    {
    int clave;
    struct Nodo *ant;
    struct Nodo *sig;
    }

La lista será manejada con dos punteros: listaini y listafin.
Crear un menú principal:
(1) cargar ordenado, invocar a [void insertarordenado(TListaDoble *lini, TListaDoble *lfin, int e);]
(2) mostrar ascendente, invocar a [void mostrarasc(TListaDoble lini);]
(3) mostrar descendente, invocar a [void mostrardesc(TListaDoble lfin);]
(4) salir.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//Definiciones fijas
#define  PI 3.141592
//Struct
struct Nodo
{
    int clave;
    struct Nodo *ant;
    struct Nodo *sig;
};
typedef struct Nodo TNodoDoble;
typedef struct Nodo *TListaDoble;
//Modulos
void saludodesiempre();
TNodoDoble *crearNodo(int e);
void insertarordenado(TListaDoble *lini, TListaDoble *lfin, int e);
void mostrarasc(TListaDoble lini);
void mostrardesc(TListaDoble lfin);

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int opcion, num;
    TNodoDoble lista;
    TListaDoble listaini = NULL;
    TListaDoble listafin = NULL;
    //Inicializaciones
    opcion = -1;
    //Inicio
    saludodesiempre();
    //Entrada
    while(opcion != 0)
    {
        printf("[1]Cargar ordenado\n[2]Mostrar acendiente\n[3]Mostrar decendiente\n[0]Salir\n");
        scanf("%d" , &opcion);
        switch (opcion)
        {
        case 1:
            printf("Eligio cargar ordenado\n");
            printf("que numero desea agregar: ");
            scanf("%d" , &num);
            insertarordenado(&listaini, &listafin, num);
            printf("Numero agregado\n");
            break;
        case 2:
            printf("Eligio mostrar acendente\nCargando...\n");
            mostrarasc(listaini);
            break;
        case 3:
            printf("Eligio mostrar decendente\nCargando...\n");
            mostrardesc(listafin);
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
        printf("Opcion invalida\n");
        }
        printf("---------------\n");
    }
    //Calculo
    //Salida
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a dar un menu para interactuar con un nodo\n");
    printf("---------------\n");
    printf("Por favor, elija una opcion\n");
}

TNodoDoble *crearNodo(int e)
{
    TNodoDoble *nuevo = (TNodoDoble *)malloc(sizeof(TNodoDoble));

    nuevo->clave = e;
    nuevo->ant = NULL;
    nuevo->sig = NULL;

    return nuevo;
}

void insertarordenado(TListaDoble *lini, TListaDoble *lfin, int e)
{
    TNodoDoble *nodo, *aux, *ant;

    nodo = crearNodo(e);

    if(*lini == NULL)
    {
        *lini = nodo;
    }
    else
    {
        aux = *lini;
        ant = NULL;
        while((aux != NULL) && (aux->clave < e))
        {
            ant = aux;
            aux = aux->sig;
        }

        if(ant == NULL)
        {
            (*lini)->ant = nodo;
            nodo->sig = *lini;
            *lini = nodo;
        } else

        {
            nodo->sig = aux;
            ant->sig = nodo;
            nodo->ant = ant;
            if(aux!=NULL) aux->ant = nodo;
        }
    }
}

void mostrarasc(TListaDoble lini)
{
    TNodoDoble *aux = lini;

    while( aux!=NULL )
    {
        printf(" %d ", aux->clave);
        aux = aux->sig;
    }
    printf("\n");
}

void mostrardesc(TListaDoble lfin)
{
    TNodoDoble *aux = lfin;

    while( aux->sig != NULL )
    {
        aux = aux->sig;
    }

    while(aux!=NULL)
    {
        printf(" %d ", aux->clave);
        aux = aux->ant;
    }
}
