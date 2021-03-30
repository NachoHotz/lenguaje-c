#include <stdio.h>
#include <conio.h>
#define alturaPuerta 2.00
#define anchoPuerta 0.75
#define alturaVentana 1.50
#define anchoVentana 1.20
#define litroPintura 12

void cantLatas(float ancho, float largo, float alto, int cant_puertas, int cant_ventanas)
{
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

int main()
{
	int cantPuertas, cantVentanas;
	float altoHabitacion, anchoHabitacion, largoHabitacion;

	printf("Ingresar medidas de la habitacion (ancho, largo, alto): ");
	scanf("%f" "%f" "%f", &anchoHabitacion, &largoHabitacion, &altoHabitacion);

	printf("\nIngresar cantidad de aberturas (puertas, Ventanas): ");
	scanf("%d" "%d", &cantPuertas, &cantVentanas);

	cantLatas(anchoHabitacion, largoHabitacion, altoHabitacion, cantPuertas, cantVentanas);
}