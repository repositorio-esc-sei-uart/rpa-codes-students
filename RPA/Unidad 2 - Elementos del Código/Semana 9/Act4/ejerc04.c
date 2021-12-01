/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 09
  Tema: El lenguaje C

  Descripción: Cadenas.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #include <string.h>

  int main ()
  {
      char palabra1[20], palabra2[20], palabra3[20];
      printf ("Ingrese la primera palabra: \n "); gets (palabra1);
      printf ("Ingrese la segunda palabra: \n "); gets (palabra2);
      printf ("Ingrese la tercera palabra: \n "); gets (palabra3);
      if (strcmp (palabra1, palabra2)==0)
        printf ("Las palabras %s y %s son iguales. \n", palabra1, palabra2);
      else
        printf ("Las palabras %s y %s son distintas. \n", palabra1, palabra2);
      if (strcmp (palabra1, palabra3)==0)
        printf ("Las palabras %s y %s son iguales. \n", palabra1, palabra3);
      else
        printf ("Las palabras %s y %s son distintas. \n", palabra1, palabra3);
      if (strcmp (palabra3, palabra2)==0)
        printf ("Las palabras %s y %s son iguales. \n", palabra2, palabra3);
      else
        printf ("Las palabras %s y %s son distintas. \n", palabra2, palabra3);

    strcat (palabra1, palabra2);
    strcat (palabra1, palabra3);
    printf ("La frase concatenada es: %s.", palabra1);



  }
