/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Obtener dos caracteres car1 y car2, intercambiarlos y mostrarlos.
Autor: DAVID ZERPA
Año: 2021
 */
#include <stdio.h>
main()
{
float car1, car2, aux;
printf ("A) Ingrese un numero decimal: \n");
scanf ("%f", &car1);
printf ("B) Ingrese un numero decimal: \n");
scanf ("%f", &car2);
aux=car1;
car1=car2;
car2=aux;
printf ("Intercambio:");
printf ("\n A %f", car1);
printf ("\n B %f", car2);
return 0;
}
