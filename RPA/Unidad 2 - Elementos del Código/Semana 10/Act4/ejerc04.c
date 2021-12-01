/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 10
  Tema: El lenguaje C

  Descripción: Promedio de notas.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  int main()

  {
      int notas,nota, suma, alumno,n,x;
      float promedio;
      srand(time(0));

      printf("Hola, cuántos alumnos desea procesar? \n");
      scanf ("%d", &alumno);
      printf("Y cuántas notas para cada uno va a ingresar? \n");
      scanf("%d", &notas);
      for (n=1; n<=alumno; n++)
        {
          printf ("Alumno:%d\n", n);
          suma=0;
          for (x=1; x<=notas; x++)
          {

              nota=1+rand()%10;
              printf ("Nota:%d\n",nota);
              suma=suma+nota;}
              promedio=(float)suma/notas;
              printf("EL promedio del alumno es: %.2f \n", promedio);
        }

 }


