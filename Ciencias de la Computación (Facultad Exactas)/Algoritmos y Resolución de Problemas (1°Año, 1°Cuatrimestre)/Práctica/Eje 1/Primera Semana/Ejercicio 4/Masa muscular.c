#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float calculo (float peso, float altura)
{
	float masa;

	masa = peso / (altura * altura);

	return masa;
}

int main ()
{
	float peso, altura;

	printf ("Ingresar altura: ");
	scanf ("%f", &altura);

	printf ("\nIngresar peso: ");
	scanf ("%f", &peso);
	system ("cls");

	printf ("\n\tEl indice de masa muscular es de: %.2f puntos\n\n", calculo (peso, altura));

	printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
    
	return 0;
}
