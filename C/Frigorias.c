/*Para realizar el cálculo de la cantidad de frigorías que un aire acondicionado necesita para ambientar un lugar, es
necesario conocer el volumen en metros cúbicos de la habitación donde se va a instalar el aparato (Nota: el volumen
de la habitación se calcula multiplicando su ancho, largo y alto).
Realizar algoritmo con subprogramas y la implementación de un programa en Lenguaje C para calcular la cantidad de
frigorías necesarias para mantener un ambiente refrigerado.*/

#include <stdio.h>
#include <conio.h>

float metros (float xancho, float xlargo, float xalto) {
  float mts;
  mts = xancho * xlargo * xalto;

  return mts;
}

float aire (float xhabitacion) {
 float frig;
 frig = xhabitacion * 50;

 return frig;
}

int main () {
  float ancho, largo, alto, frigorias_aire, habitacion;

  printf ("Ingresar medidas de la habitacion en metros (ancho, largo y alto. Separar con espacios): ");
  scanf ("%f" "%f" "%f", &ancho, &largo, &alto);

  habitacion = metros (ancho, largo, alto);
  frigorias_aire = aire (habitacion);

  printf ("\nSe requieren de: %.0f frigorias,", frigorias_aire); printf(" para lograr refrigerar una habitacion de %.0f mts3\n\n", habitacion);
  printf("Pulse cualquier tecla para cerrar el programa. ");
  getch();
}
