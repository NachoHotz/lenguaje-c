/*Escriba un algoritmo con subprogramas y su correspondiente programa en Lenguaje C para calcular la cantidad de
latas de pintura necesaria para pintar una habitación, ingresando como datos: las medidas de la habitación (ancho,
largo y alto) y la cantidad de cada tipo de aberturas que hay en ella.
Por otro lado se conoce que: las puertas son de 0,75 mts de ancho y 2,00 mts de alto y las ventanas tienen una medida
de 1,20 x 1,50 mts; y la pintura se vende en latas de un litro y cada litro rinde 12 m2*/

#include <stdio.h>
#include <conio.h>

#define alturaPuerta 2.00
#define anchoPuerta 0.75
#define alturaVentana 1.50
#define anchoVentana 1.20
#define litroPintura 12

void cantLatas(float ancho, float largo, float alto, int cant_puertas, int cant_ventanas) {
  float totalPuertas, totalVentanas, volumenHabitacion;
  int cant_latas;

  totalPuertas = (alturaPuerta * anchoPuerta) * cant_puertas;
  totalVentanas = (alturaVentana * anchoVentana) * cant_ventanas;
  volumenHabitacion = (ancho * largo * alto) - (totalPuertas - totalVentanas);

  cant_latas = volumenHabitacion / litroPintura;

  printf("\nCantidad de latas de pintura de 1 litro necesarias para una habitacion de %.2fmts3: %d", volumenHabitacion, cant_latas);
  printf("\n\nPulse calquier tecla para salir. ");
  getch();
}

int main() {
  int cantPuertas, cantVentanas;
  float altoHabitacion, anchoHabitacion, largoHabitacion;

  printf("Ingresar medidas de la habitacion (ancho, largo, alto): ");
  scanf("%f" "%f" "%f", &anchoHabitacion, &largoHabitacion, &altoHabitacion);

  printf("\nIngresar cantidad de aberturas (puertas, Ventanas): ");
  scanf("%d" "%d", &cantPuertas, &cantVentanas);

  cantLatas(anchoHabitacion, largoHabitacion, altoHabitacion, cantPuertas, cantVentanas);
}
