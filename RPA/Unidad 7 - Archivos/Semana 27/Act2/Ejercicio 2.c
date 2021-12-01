/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 27
Tema: Archivos de acceso secuencial

Descripcion: Dada una lista simplemente enlazada (LSE) con la siguiente estructura de nodo:

struct Localidad
{
int codpostal;
char loc[20];
struct Localidad *sig;
}

Implementar un menú principal:
(1) cargar,
(2) borrar por codpostal,
(3) mostrar,
(4) salir.
Cada opción invocará las operaciones de una LSE y serán grabadas en un archivo de acceso secuencial denominado localidades.dat de la siguiente manera:
I cargar: agregar nodo a la LSE y almacenar como línea agregada al final de archivo;
I borrar: quitar nodo de la LSE en caso que exista, y cargar LSE actualizada en archivo;
I mostrar: imprimir por pantalla la LSE y el contenido de archivo para verificar que estén sincronizados, es decir, que sean iguales.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Definiciones fijas
#define MAX 20
//Struct
struct Localidad
{
    int codpostal;
    char loc[MAX];
    struct Localidad *sig;
};
typedef struct Localidad Local;
typedef Local *PLocal;
//Modulos
void saludodesiempre();
Local *crearNodo(int elem, char local[MAX]);
void insertar(PLocal *ch, int nu, char c[MAX]);
void insertarAlFinal(PLocal *ch, int nu, char c[MAX]);
void mostrarLista(PLocal ch);
Local *eliminar(PLocal *ch, int nu);
FILE* save(char *nombre, char *modo);

int main ()
{
    //Inicio
    //Definiciones
    int opcion, num;
    char ch[MAX];
    Local loc[MAX];
    char *nombre = "localidades.dat";
    FILE *archivo = fopen(nombre, "w");
    PLocal lista = NULL;
    //Inicializaciones
    opcion = -1;
    if(archivo == NULL)
    {
        printf("Archivo no encontrado\n");
        exit(404);
    }
    //Inicio
    saludodesiempre();
    //Entrada
    //Calculo
    while(opcion!=0)
        {
        printf("\n[ 1 ]Cargar\n[ 2 ]Borrar por codigo postal\n[ 3 ]Mostrar\n[ 0 ]Salir\n[ 4 ]NOTA PARA EL PROFE\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        printf("\n");
        fflush(stdin);

        switch (opcion)
            {
            case 1:
                printf("Eligio Cargar datos\n");
                printf("Ingrese CP: ");
                scanf("%d", &num);
                fflush(stdin);
                printf("Ingrese Localidad: ");
                gets(ch);
                insertar(&lista, num, ch);
                break;
            case 2:
                printf("Eligio Borrar por CP\n");
                printf("CP para eliminar: ");
                scanf("%d", &num);
                eliminar(&lista, num);
                break;
            case 3:
                printf("Eligio mostrar\n");
                mostrarLista(lista);
                break;
            case 0:
                printf("Saliendo...");
                break;
            case 4:
                printf("Puede que haya algo que no entendi bien, no pude hacer que se copie nada en el archivo,\ny los ejemplos no quieren crear archivos de .txt pero no hay problema con los .dat");
                break;
            default:
                printf("OPCION NO VALIDA\n");
                break;
            printf("---------------\n");
        }
    }
    //Salida
    fflush(archivo);
    fclose(archivo);
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a darle un menu para interactuar con un archivo que se encuentra en el archivo localidades.dat\n");
    printf("---------------\n");
}

FILE* abrir(char *loc, char *modo)
{
    FILE *archivo = fopen(loc, modo);
    if(archivo==NULL) {
        printf("No se pudo abrir el archivo %s\n", loc);
        exit(-1);
    }
    return archivo;
}

void insertar(PLocal *ch, int nu, char c[MAX])
{
    Local *aux, *ant;
    Local *nodo = crearNodo(nu, c);
    FILE* archivo;

    if(*ch == NULL)
    *ch = nodo;
    else
    {
        ant = NULL;
        aux = *ch;
        while (aux != NULL)
        {
            ant = aux;
            aux = aux->sig;
        }
        if(ant == NULL)
        {
            nodo->sig = *ch;
            *ch = nodo;
        }
        else
        {
            nodo->sig = aux;
            ant->sig = nodo;
        }
    }
}

Local *crearNodo(int elem, char local[MAX])
{
    Local *nuevo = (Local *)malloc(sizeof(Local));

    nuevo->codpostal = elem;
    strcpy(nuevo->loc, local);
    nuevo->sig = NULL;

    return nuevo;
}

void mostrarLista(PLocal ch)
{
    Local *aux = ch;

    while(aux != NULL)
    {
        printf("Codigo postal:%d - Localidad:%s\n", aux->codpostal, aux->loc);
        aux = aux->sig;
    }
    printf("\n");
}

Local *eliminar(PLocal *ch, int nu)
{
    Local *aux, *ant, *p;

    ant = NULL;
    aux = *ch;

    while( (aux != NULL) && (aux->codpostal != nu) )
    {
        ant = aux;
        aux = aux->sig;
    }

    if (aux != NULL)
    {
        if(ant == NULL)
        {
            *ch = aux->sig;
            printf("Localidad eliminada\n");
        }
        else
        {
            ant->sig = aux->sig;
            printf("Localidad eliminada\n");
        }
        p = aux;
        p->sig = NULL;
        return p;
    }
    else
    printf("No se encontro CP para eliminar\n");
    return NULL;
}
