/**
 (1649) Resolución de Problemas y algoritmos
 Clase N°7
 Tema: El lenguaje C

 Descripción: Calcular el área de un círculo. Utilice una constante PI=3.141592.
 Autor: Fernando Vilca
 Año: 2021
 */

 #include <stdio.h>

 main ()
{

  float radio, area;
  printf ("Ingrese el radio\n");
  scanf ("%f", &radio);
  area = 3.141592 * (radio*radio);
  printf ("El area del circulo es: %f", area);

  return 0;


}
