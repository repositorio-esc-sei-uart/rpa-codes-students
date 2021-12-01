/**
(1649) Resolucion de problemas y algoritmos
Clase Nro: 07
Tema: le lenguaje C

Descripcion: Obtener una temperatura en Fahrenheit y convertir a Celsius, cuya fórmula
de conversión es la siguiente:
celsius =
farhr 􀀀32
1:8
donde el punto de congelación del agua es 32º F y una diferencia de 1,8
grados Fahrenheit equivale a una diferencia de 1 grado Celsius. Dena las
constantes PUNTOCONGELACION=32 y EQUIVFC=1.8. Mostrar
resultado con dos dígitos de precisión.
Autor: DAVID ZERPA
Año: 2021
 */
#include <stdio.h>
#define PUNTOCONGELACION 32
#define EQUIVFC 1.8
int main ()
{
float fahr, celsius;
printf ("Ingrese temperatura en Fahrenheit: \n");
scanf ("%f", &fahr);
celsius=(fahr-PUNTOCONGELACION)/EQUIVFC;
printf("\n %f ºF", fahr);
printf("\t equivale a %f ºC", celsius);
return 0;
}
