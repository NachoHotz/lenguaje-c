#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float producto;
	float porcentaje;
	float total;
	float descuento;
	
	printf("Ingresar valor del producto: ");
	scanf ("%f", &producto);
	
	printf("\nAhora ingresar descuento a aplicar: ");
	scanf ("%f", &porcentaje);
	
	descuento = (producto * porcentaje) / 100;
	
	total = producto - descuento;
	
	printf("\n\t\t Total a abonar: $%.2f pesos", total);
	
	return 0;
}
