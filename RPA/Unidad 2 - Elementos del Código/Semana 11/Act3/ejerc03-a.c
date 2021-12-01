/**********
  (1649) Resolución de Problemas y Algoritmos.
  Clase N°: 11
  Tema: El lenguaje C

  Descripción: Potencia y factorial.
  Autor: Gabriel Isaías Rivera.
  Año: 2021
  **********/

  #include <stdio.h>
  #include <math.h>


  int main()

  {
        int opc, base, expo, i, num,n,pot, potencia;
        opc=0;
        long fact;
        do{
          printf ("Seleccione una opción del menú: \n");
          printf ("[1] Calcular la potencia. \n");
          printf ("[2] Calcular factorial. \n");
          printf ("[3] Salir. \n");
          scanf ("%d", &opc);
        switch (opc)
        {
        case 1:
            printf ("Ingrese la base. \n");
            scanf ("%d", &base);
            printf ("Ingrese el exponente. \n");
            scanf ("%d", &expo);
            //n=1;
            //while (n<expo)
            //{  potencia= base*base;
            //potencia= potencia*base;
            //n++;}
            pot=pow(base, expo);
            printf ("La poencia es: %d \n", pot);
            break;
        case 2:
        fact=1;
        i=1;
        printf("Ingrese un número. \n");
        scanf("%d", & num);
        for (i=1; i<=num; i++)
        fact=fact*i;
        printf("El factorial es: %d \n", fact);
        break;
        }
          } while (opc!=3);
              printf("Usted ha salido del menú. \n");
  }


