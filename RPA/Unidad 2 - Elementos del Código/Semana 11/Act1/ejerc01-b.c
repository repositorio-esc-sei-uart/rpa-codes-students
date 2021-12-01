/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 11
  Tema: El lenguaje C

  Descripción: Positivos múltiplos de 3.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>


  int main()
  {
     int num;
     int mult3=0;

     printf ("Hola, ingrese números enteros positivos por favor. \n");
     printf ("El ciclo terminará cuando ingrese 5 múltiplos de 3. \n");
     do {scanf("%d", &num);
         if (num%3==0)
             mult3=mult3+1;}
     while (mult3<5);
     printf ("Ya ha ingresado cinco múltiplos de 3.");
  }
