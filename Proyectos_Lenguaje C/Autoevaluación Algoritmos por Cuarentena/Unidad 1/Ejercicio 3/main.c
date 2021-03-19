#include <stdio.h>
#include <conio.h>

float calculo (float pesos)
{
	float conversion;
	
	conversion = pesos * 72.50;
	
	return conversion;
}

int main() 
{	
	float pesos;
	
	printf ("Ingresar monto en Pesos: $");
	scanf ("%f", &pesos);
	
	printf ("\nEl monto en Euros es: %.2f\n\n", calculo(pesos));
	printf("Pulse cualquier tecla para salir. ");
	getch();
}

