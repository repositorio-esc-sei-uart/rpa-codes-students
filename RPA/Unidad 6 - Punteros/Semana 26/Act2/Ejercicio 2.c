/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 26
Tema: Pilas y colas dinamicas. otras listas

Descripcion: Cargar una cola con valores positivos solicitados por pantalla hasta que el usuario ingrese un valor negativo o cero.
Muestre por pantalla desencolando elementos.
Autor: Angel Alvarez
Año: 2021
*/
//.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Struct
struct nodo
{
    int num;
    struct nodo *sig;
};
typedef struct nodo Tcola;
typedef struct nodo *TPcola;
//Modulos
void saludodesiempre();
Tcola *crear(int aux);
void encolar(TPcola *C, int aux);
Tcola desencolar(TPcola *C);
int vacio(TPcola C);

int main ()
{
    //Inicio
    srand(time(0));
    //Definiciones
    int num;
    Tcola aux;
    TPcola cola = NULL;
    //Inicializaciones
    num = 1;
    //Inicio
    saludodesiempre();
    //Entrada
    while(num > 0)
        {
        printf("Ingrese un numero\n");
        scanf("%d", &num);
        encolar(&cola, num);
        }
    printf("--------------\n");
    //Salida
    printf("Desencolando...\n");
    printf("--------------\n");
    while( !vacio(cola) )
    {
        aux = desencolar(&cola);
        printf(" %d ", aux.num);
    }
    //Fin
    printf("\n");
    return 0;
}
//Modulos
void saludodesiempre()
{
    printf("Hola, mucho gusto, ahora voy a pedirle que ingrese numeros para una fila\nhasta que ingrese cero o un numero negativo cualquiera\n");
    printf("---------------\n");
    printf("Por favor,  ");
}

Tcola *crear(int aux)
{
    Tcola *nuevo = (Tcola *)malloc(sizeof(Tcola));

    nuevo->num = aux;
    nuevo->sig = NULL;

    return nuevo;
}

void encolar(TPcola *C, int aux)
{
    Tcola *nodo = crear(aux);

    if( vacio(*C) )
        *C = nodo;
    else
    {
        Tcola *aux = *C;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }

        aux->sig = nodo;
    }
}

Tcola desencolar(TPcola *C)
{

    Tcola *aux = NULL;

    aux = *C;
    *C = aux->sig;

    aux->sig = NULL;

    return *aux;
}

int vacio(TPcola C)
{
    return C == NULL;
}
