/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 10
  Tema: El lenguaje C

  Descripci�n: Secuencia de n�meros impares.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>
  int main()
{
      short suma=0, num=0;
      long producto=1;


      printf ("Hola, voy a generar n�meros impares hasta 11. \n");
      for (num=1; num<=11; num+=2)
      {
        printf("N�mero: %d \n", num);
        suma= suma+num;
        producto= producto*num;

      }

      printf ("La suma de los n�meros es: %d \n", suma);
      printf ("El producto de todos los n�meros es: %d \n", producto);


}



