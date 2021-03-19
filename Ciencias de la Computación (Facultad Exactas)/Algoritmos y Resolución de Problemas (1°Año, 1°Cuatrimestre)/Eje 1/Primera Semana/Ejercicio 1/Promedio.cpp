#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void promedio (float nota1, float nota2, float nota3)
{
	float calculo;

	calculo = (nota1 + nota2 + nota3) / 3;

	printf ("\n\tEl promedio es: %.2f\n\n", calculo);

}

int main ()
{
	float nota1, nota2, nota3;

	printf ("Ingresar primera nota: ");
	scanf ("%f", &nota1);

	printf ("\nIngresar segunda nota: ");
	scanf ("%f", &nota2);

	printf ("\nIngresar tercera nota: ");
	scanf ("%f", &nota3);
	system ("cls");

	promedio (nota1, nota2, nota3);

	printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();

	return 0;
}
