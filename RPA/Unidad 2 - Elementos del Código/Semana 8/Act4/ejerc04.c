/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 08
  Tema: El lenguaje C

  Descripción: Elección presidencial.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>

  int main()

  {
      int candidato1=0, candidato2=0, candidato3=0, total=0;
      printf ("Ingresar los votos del candidato mas votado. \n");
      scanf ("%d", &candidato1);
      printf ("Ingresar los votos del segundo candidato mas votado. \n");
      scanf ("%d", &candidato2);
      printf ("Ingresar los votos del tercer candidato mas votado. \n");
      scanf ("%d", &candidato3);

      total = candidato1+candidato2+candidato3;

      if (candidato1>=total*0.45)
        printf ("El candidato gano en primera vuelta. \n");
      else
        if ((candidato1>=total*0.40) && (candidato1-candidato2>total*0.10) && (candidato1-candidato3>total*0.10))
        printf ("El candidato gano en primera vuelta. \n");

        else printf ("La eleccion se va a segunda vuelta. \n");



  }
