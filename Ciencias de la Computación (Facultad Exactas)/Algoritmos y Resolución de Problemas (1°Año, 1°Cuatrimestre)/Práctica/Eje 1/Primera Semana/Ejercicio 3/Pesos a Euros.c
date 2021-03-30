#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float calculo (float monto, float cambio)
{
	float euros;

	euros = monto * cambio;

	return euros;
}

int main ()
{
	float pesos, valor;

	printf ("Ingresar monto a convertir: ");
	scanf ("%f", &pesos);

	printf ("\nIngresar valor del Euro en Pesos: ");
	scanf ("%f", &valor);
	system ("cls");

	printf ("\n\tEl monto en Euros es de: $%.2f Euros\n\n", calculo(pesos, valor));
	
	printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
}
