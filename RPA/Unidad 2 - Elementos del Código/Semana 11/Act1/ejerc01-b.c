/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 11
  Tema: El lenguaje C

  Descripci�n: Positivos m�ltiplos de 3.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>


  int main()
  {
     int num;
     int mult3=0;

     printf ("Hola, ingrese n�meros enteros positivos por favor. \n");
     printf ("El ciclo terminar� cuando ingrese 5 m�ltiplos de 3. \n");
     do {scanf("%d", &num);
         if (num%3==0)
             mult3=mult3+1;}
     while (mult3<5);
     printf ("Ya ha ingresado cinco m�ltiplos de 3.");
  }
