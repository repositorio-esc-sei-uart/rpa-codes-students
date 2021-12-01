/*******************************************************************************
(1649) Resolucion de Problemas y Algoritmos
Clase Nro: 08
Tema: Sentencia de Selección if-else

Descripcion: En una elección presidencial se presentaron 3 candidatos.
Para que un cantidato gane en primera vuelta debe obtener más votos que
cada uno de los otros cantidatos. Pero eso no alcanza: además, debe
obtener al menos el 45% de todos los votos, o al menos el 40% de todos los
votos y al menos un 10% más de votos que cada uno de los otros candidatos.
Un periodista requiere tener la primicia y necesita un programa para procesar
datos boca de urna. Obtener la cantidad de votos de los tres candidatos y
decir si algún candidato ganó en primera vuelta o si hay segunda vuelta.
Autor: Pablo Laime
Año: 2021
*******************************************************************************/
#include <stdio.h>

int main ()
{
    //Defino las variables y las inicializo en 0
    int candidato1=0, candidato2=0, candidato3=0, total=0;

    //Leo los votos de los candidatos ordenados
    printf ("Ingresar los votos del candidato mas votado ");
    scanf ("%d", candidato1);

    printf ("Ingresar los votos del segundo candidato mas votado ");
    scanf ("%d", candidato2);

    printf ("Ingresar los votos del tercer candidato mas votado ");
    scanf("%d", candidato3);

    //Asigno la expresion al total
    total = candidato1+candidato2+candidato3;

    //Uso las condiciones para saber si el candidato mas votado gana en primera vuelta
    if (candidato1>=total*0.45)
        printf ("El candidato gano en primera vuelta");
    else
        if ((candidato1>=total*0.40) && (candidato1-candidato2>total*0.10) && (candidato1-candidato3>total*0.10))
            printf ("\nEl candidato gana en primera vuelta ");
        else
            printf("\nLa eleccion se va a segunda vuelta ");

return 0;





}
