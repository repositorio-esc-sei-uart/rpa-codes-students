/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 07
  Tema: El lenguaje C

  Descripci�n: Calcular el �rea de un c�rculo.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  // Constante
  #define PI 3.141592
  int main ()
  {
      float area, radio;
      radio = 0.0;
      area = 0.0;
  printf( "El radio es:");
  scanf("%f", &radio);
  area=PI*(radio*radio);
  printf("El area del circulo es: %f\n", area);

  }
