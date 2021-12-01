/**
 (1649) Resolución de Problemas y algoritmos
 Clase N°7
 Tema: El lenguaje C

 Descripción: Dadas las variables inicializadas A=2, B=10 y C=40, Realice un programa de intercambio.
 Autor: Fernando Vilca
 Año: 2021

 B que intercambie con A. B=2
 C que intercambie con B  C=10
 A que intercambie con C  A=40
 A=40
 B=2
 C=10

 */

 #include <stdio.h>

 int main ()

 {
  int aux, A, B, C;
  A = 2;
  B = 10;
  C = 40;
    printf( "Los valores a cambiar son: \n");

    printf( "A:2 \n");

    printf( "B:10 \n");

    printf( "C:40 \n\n");


    printf( "Intercambiando...\n\n" );

    aux = C;
    C = B;
    B = A;
    A = aux;

    printf("Los nuevos valores son: \n" );
    printf( "A: %d \n", A );
    printf( "B: %d \n", B );
    printf( "C: %d \n", C );



    return 0;


 }
