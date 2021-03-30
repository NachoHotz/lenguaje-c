#include <stdio.h>
#include <conio.h>

void descuento(int xprecio, int xporcentaje)
{
	float total;

	total = (xprecio * xporcentaje) / 100;

	printf("\nEl precio final del producto con descuento es de: $%.2f\n\n", total);
	
	printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
}

int main()
{
	float precio, porcentajeDescuento;

	printf("Ingrese precio del producto: $");
	scanf("%f", &precio);

	printf("\nAhora ingrese porcentaje de descuento: ");
	scanf("%f", &porcentajeDescuento);

	descuento(precio, porcentajeDescuento);
}