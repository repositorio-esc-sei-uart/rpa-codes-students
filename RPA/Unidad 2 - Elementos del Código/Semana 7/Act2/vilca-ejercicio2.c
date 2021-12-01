/**
 (1649) Resolución de Problemas y algoritmos
 Clase N°7
 Tema: El lenguaje C

 Descripción: Codificar su algoritmo propuesto del ejercicio 2 de la clase 01.
 Autor: Fernando Vilca
 Año: 2021
 */

 #include <stdio.h>

 int main ()
 {
  int a, b, suma, resta, mult, div, mod;

  printf ("Ingrese un numero\n");

  scanf ("%d", &a);

  printf ("Ingrese otro numero\n");

  scanf ("%d", &b);

  suma = a + b;
  resta = a - b;
  mult = a * b;
  div = a / b;
  mod = a % b;

  printf ("La suma es %d \n", suma);
  printf ("La resta es %d \n", resta);
  printf ("La multiplicacion es %d \n", mult);
  printf ("La division es %d \n", div);
  printf ("El modulo es %d \n", mod);

  return 0;
 }
