/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 25
Tema: Lista simplemente enlazada

Descripcion: Dada la siguiente estructura:
struct Nodo
{
int clave;
struct Nodo *sig;
}
Se pide implementar un menú principal que muestre las siguientes opciones:
(1) cargar (con submenú: (1.a) al inicio, (1.b) al final)
(2) borrar
(3) mostrar
(4) buscar
(5) ordenar
(6) salir
Cada opción invocará las funciones correspondientes a cada operación de una lista simplemente enlazada de claves numéricas.
Autor: Angel Alvarez
Año: 2021
*/
#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int clave;
    struct nodo *sig;
};
typedef struct nodo TNodo;
typedef TNodo *TLista;

void saludodesiempre();
TNodo *crearNodo(int elem);
void ingresarInicio(TLista *PA, int A);
void ingresarFinal(TLista *PA, int A);
void mostrar(TLista l);
void buscar(TLista l, int A);
TNodo *borrar(TLista *PA, int A);
void ordenar(TLista *PA);
void ordenarAux(TLista *PA, int A);

int main()
{
    //Inicio
    //Definiciones
    int opcion, num;
    TLista lista = NULL;
    //Inicializaciones
    opcion = -1;
    //Inicio
    saludodesiempre();
    //Entrada
    while (opcion != 0)
    {

    printf("\n[ 1 ]Cargar numero\n[ 2 ]Borrar\n[ 3 ]Ver\n[ 4 ]Buscar\n[ 5 ]Ordenar\n[ 0 ]Salir\n");
    scanf("%d" , &opcion);
    printf("-----------------------------------\n");

    switch(opcion)
        {
        case 1:
            {
                printf("¿Desa cargar al inicio o al final del nodo?\n[ 1 ]Inicio\n[ 2 ]Final\n");
                scanf("%d" , &opcion);
                if(opcion == 1)
                {
                    printf("Ingrese un numero\n");
                    scanf("%d" , &num);
                    ingresarInicio(&lista, num);
                }
                if(opcion == 2)
                {
                    printf("Ingrese un numero\n");
                    scanf("%d" , &num);
                    ingresarFinal(&lista, num);
                }
                if(opcion != 1 && opcion != 2)
                {
                    printf("ERROR:Opcion no valida\n");
                }
                break;
            }
        case 2:
            {
                printf("¿Que numero desea borrar?\n");
                scanf("%d" , &num);
                borrar(&lista, num);
                break;
            }
        case 3:
            {
                printf("Mostrando...\n");
                mostrar(lista);
                break;
            }
        case 4:
            {
                printf("¿Que numero desea buscar?\n");
                scanf("%d" , &num);
                buscar(lista, num);
                break;
            }
        case 5:
            {
                printf("Ordenando...\n");
                ordenar(&lista);
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
                break;
            }
        }
    printf("-----------------------------------\n");
    }
    //Salida
    //Fin
    printf("\n");
    return 0;
}

//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora le voy a dar un menu con el cual interactuar con el nodo\n");
    printf("---------------\n");
    printf("Por favor, elija una opcion ");
}

void ingresarInicio(TLista *PA, int A)
{
    TNodo *nodo = crearNodo(A);

    if (*PA != NULL)
    {
        nodo->sig = *PA;
    }

    *PA = nodo;
}

void ingresarFinal(TLista *PA, int A)
{
    TNodo *aux;
    TNodo *nodo = crearNodo(A);

    if(*PA == NULL)
    {
        *PA = nodo;
    }
    else
    {
        aux = *PA;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nodo;
    }
}

TNodo *crearNodo(int elem)
{
    TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));

    nuevo->clave = elem;
    nuevo->sig = NULL;

    return nuevo;
}

void mostrar(TLista l)
{
    TNodo *aux = l;

    while(aux != NULL)
    {
        printf(" %d ", aux->clave);
        aux = aux->sig;
    }
    printf("\n");
}

void buscar(TLista l, int A)
{
    if (l == NULL)
        printf("Lista vacía\n");
    else
    {
        TNodo *aux = l;

        while( (aux != NULL) && (aux->clave != A) )
        {
            aux = aux->sig;
        }

        if (aux != NULL)
        {
            printf("El numero SI se encuentra\n");
        }
        else
        {
            printf("El numero NO se encuentra\n");
        }
    }
}

TNodo *borrar(TLista *PA, int A)
{
    TNodo *aux, *ant, *P;

    ant = NULL;
    aux = *PA;

    while( (aux != NULL) && (aux->clave != A) )
    {
        ant = aux;
        aux = aux->sig;
    }

    if (aux != NULL)
    {
        if(ant == NULL)
        {
            *PA = aux->sig;
        }
        else
        {
            ant->sig = aux->sig;
        }

        P = aux;
        P->sig = NULL;
        return P;
    }
    else
    {
        return NULL;
    }
}

void ordenar(TLista *PA)
{
    TNodo *P;
    TLista lordenada = NULL;

    while ( *PA != NULL )
    {
        P = borrar(PA, (*PA)->clave);
        ordenarAux(&lordenada, P->clave);
    }

    *PA = lordenada;
}

void ordenarAux(TLista *PA, int A)
{   TNodo *aux, *ant;
    TNodo *nodo = crearNodo(A);

    if(*PA == NULL)
        *PA = nodo;
    else
    {
        ant = NULL;
        aux = *PA;
        while ((aux!=NULL) && (aux->clave < A)) {
            ant = aux;
            aux = aux->sig;
        }
        if(ant == NULL)
        {
            nodo->sig = *PA;
            *PA = nodo;
        }
        else
        {
            nodo->sig = aux;
            ant->sig = nodo;
        }
    }
}
