/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 10
  Tema: El lenguaje C

  Descripci�n: Palabras.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  #include <string.h>



  int main()

  {
      char palabra1[20], palabra2[20], palabra3[20], palabra4[20], palabra5[20];
      int vocales=0;

      printf ("Ingrese la primera palabra: \n "); gets (palabra1);
      printf ("Ingrese la segunda palabra: \n "); gets (palabra2);
      printf ("Ingrese la tercera palabra: \n "); gets (palabra3);
      printf ("Ingrese la cuarta palabra: \n "); gets (palabra4);
      printf ("Ingrese la quinta palabra: \n "); gets (palabra5);

      if (strcmp(palabra1,'a')==0)
        printf ("Hay vocales A\n");
      else
        printf ("No hay vocales A\n ");



  }
