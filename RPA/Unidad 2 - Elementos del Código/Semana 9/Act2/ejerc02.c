/**********
  (1649) Resoluci�n de Problemas y Algoritmos.
  Clase N�: 09
  Tema: El lenguaje C

  Descripci�n: Calculadora.
  Autor: Gabriel Isa�as Rivera.
  A�o: 2021
  **********/

  #include <stdio.h>

  int main ()
{
    char opcion;
    float valor1, valor2, suma, resta, multiplicacion, division ;
    int valor3, valor4, modulo;
    printf (" Hola, por favor elija que operaci�n desea realizar: \n");
    printf ( "Presione [+] para sumar: \n");
    printf ( "Presione [-] para restar: \n");
    printf ( "Presione [*] para multiplicar: \n");
    printf ( "Presione [/] para dividir: \n");
    printf ( "Presione [%] para sacar el m�dulo: \n");
    scanf ("%c", &opcion);

    switch (opcion)
    {
      case '+':
          printf (" Ingrese el primer valor: \n");
          scanf ("%f", &valor1);
          printf (" Ingrese el segundo valor: \n");
          scanf ("%f", &valor2);
          suma= valor1+valor2;
          printf (" El resultado de la suma es: %2.f \n", suma);
          break;

      case '-':
          printf (" Ingrese el primer valor: \n");
          scanf ("%f", &valor1);
          printf (" Ingrese el segundo valor: \n");
          scanf ("%f", &valor2);
          resta= valor1-valor2;
          printf (" El resultado de la resta es: %2.f \n", resta);
          break;

      case '*':
          printf (" Ingrese el primer valor: \n");
          scanf ("%f", &valor1);
          printf (" Ingrese el segundo valor: \n");
          scanf ("%f", &valor2);
          multiplicacion= valor1*valor2;
          printf (" El resultado de la multiplicaci�n es: %2.f \n", multiplicacion);
          break;

      case '/':
          printf (" Ingrese el primer valor: \n");
          scanf ("%f", &valor1);
          printf (" Ingrese el segundo valor: \n");
          scanf ("%f", &valor2);
          if (valor2>0)
          {division= valor1/valor2;
          printf (" El resultado de la divisi�n es: %2.f \n", division);}
          else
            printf (" La operaci�n no es posible. \n");
          break;

      case '%':
          printf (" Ingrese el primer valor: \n");
          scanf ("%d", &valor3);
          printf (" Ingrese el segundo valor: \n");
          scanf ("%d", &valor4);
          modulo= valor3%valor4;
          printf (" El resto de la divisi�n es: %d \n", modulo);
          break;

      default: printf (" La opci�n es inv�lida.");


    }

}
