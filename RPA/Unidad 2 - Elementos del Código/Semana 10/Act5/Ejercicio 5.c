/**
(1649) Resolucion de Problemas y algoritmos
Clase Nro: 10
Tema: Sentencia iterativa for

Descripcion: Obtener 5 palabras por teclado.
Mostrar cuántas vocales tiene cada palabra y concatenar todas las palabras en una cadena separadas con espacios y mostrar la cadena final por pantalla.
Autor: Angel Alvarez
Año: 2021
*/

/**
Hola, le aviso el el algoritmo no funciona bien del todo, probe de varias maneras pero no se porque cuando cuenta las vocales si la cantidad
es menor a la palabra anterior en vez de inicializarlo a cero y contar las nuevas vocales solo resta una a la cantidad anterior y lo deja en el siguiente
(ej: palabra 1 tiene 5 vocales y palabra 2 tiene 1, va a contar 5 vocales el palabra 1 y 4 en palabra 2) y si se clolocan las vocales de manera
decendiente estas se van restando de uno en uno (palabra uno 5 vocales, palabra dos 4 vocales, palabra tres 3 vocales, etc...) si puede decirme que
hice mal (porque esta claro que hice algo mal) me ayudaria mucho.

Gracias por leer.
Angel Alvarez.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    //Definiciones
    int cantpalabras, vocales1, vocales2, vocales3, vocales4, vocales5, aux, voc;
    char palabra[50] , palabraaux[5], palabraconca[1000];
    //Iniciales
    strcpy(palabraconca, "");
    strcpy(palabraaux, " ");
    voc = 0;
    //Inicio
    printf("Hola, mucho gusto, ahora le voy a pedir 5 palabras y le dire cuantas vocales tiene cada una y luego las unire\n");
    printf("(Maximo 50 caracteres incluyendo espacios)");
    printf("---------------\n");
    //Entrada
    for (cantpalabras = 1; cantpalabras < 6; cantpalabras++)
    {
        fflush(stdin);
        printf("Por favor, ingrese la palabra Nro%d: " , cantpalabras);
        gets(palabra);
        for(aux = 0; aux < 50; aux++)
        {
        if(palabra[aux]=='a'||palabra[aux]=='e'||palabra[aux]=='i'||palabra[aux]=='o'||palabra[aux]=='u'||palabra[aux]=='A'||palabra[aux]=='E'||palabra[aux]=='I'||palabra[aux]=='O'||palabra[aux]=='U')
           {
                voc++;
           }
        }
        fflush(stdin);
        strcat(palabraconca, palabra);
        strcat(palabraconca, palabraaux);
        if (cantpalabras == 1)
            vocales1 = voc;
        if (cantpalabras == 2)
            vocales2 = voc;
        if (cantpalabras == 3)
            vocales3 = voc;
        if (cantpalabras == 4)
            vocales4 = voc;
        if (cantpalabras == 5)
            vocales5 = voc;
        voc = 0;
    }
    //Salida
    printf("---------------\n");
    printf("En la primera palabra hay %d vocales\n" , vocales1);
    printf("En la primera segunda hay %d vocales\n" , vocales2);
    printf("En la primera tercera hay %d vocales\n" , vocales3);
    printf("En la primera cuarta hay %d vocales\n" , vocales4);
    printf("En la primera quinta hay %d vocales\n" , vocales5);
    printf("---------------\n");
    printf("Las palabras unidas son:\n");
    printf("%s" , palabraconca);
    //Fin
}
