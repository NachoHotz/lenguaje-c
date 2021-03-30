#include <stdio.h>
#include <conio.h>

void edad (int a1, int a2)
{
	int Edad;

	Edad = a1 - a2;

	printf("\nEdad: %d \n\nPrecionar cualquier tecla para salir. ", Edad);
	getch();
}

int main()
{
	int fechaNacimiento, fechaActual;

	printf("\nIngresar año actual: ");
	scanf("%d", &fechaNacimiento);

	printf("\nAhora ingresar año de nacimiento: ");
	scanf("%d", &fechaActual);

	edad(fechaNacimiento, fechaActual);
}