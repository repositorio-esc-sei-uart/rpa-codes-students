/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 07
  Tema: El lenguaje C

  Descripción: De Fahrenheit a Celsius.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  // Constantes.
  #define PUNTOCONGELACION 32
  #define EQUIVFC 1.8

  int main()

  {
      // Variantes.
      float Fahrenheit=0, Celsius=0;

      // Ingreso de variables.
      printf ("Hola, voy a convertir los grados de Fahrenheit a Celsius. \n");
      printf("Por favor ingrese los grados Fahrenheit: \n");
      scanf ("%f", &Fahrenheit);

      // Conversión y salida.
      Celsius= (Fahrenheit-PUNTOCONGELACION)/EQUIVFC;
      printf("Eso equiavle en grados Celsius a: %.2f", Celsius);


  }
