/**
 (1649) Resolución de Problemas y algoritmos
 Clase N°7
 Tema: El lenguaje C

 Descripción: Obtener una temperatura en Fahrenheit y convertir a Celsius
 Autor: Fernando Vilca
 Año: 2021
 */

 #include <stdio.h>

 int main ()

 {
  float F, C, puntoc, equivfc;

  printf ("Ingrese los grados farenheit: \n");

  scanf ("%f", &F);

  puntoc= 32;
  equivfc= 1.8;

  C= (F-puntoc)/equivfc;

  printf("La temperatura en grados celsius es: %.2f", C);



 return 0;
 }
