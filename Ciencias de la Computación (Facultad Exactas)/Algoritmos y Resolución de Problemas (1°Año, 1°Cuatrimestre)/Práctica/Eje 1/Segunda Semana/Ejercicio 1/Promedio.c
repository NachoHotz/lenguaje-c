#include <stdio.h>
#include <stdlib.h>

float promedio (float nota1, float nota2, float nota3)
{
	float calculo;
	
	calculo = (nota1 + nota2 + nota3) / 3;
	
	return calculo;
}

int main ()
{
	float nota1;
	float nota2;
	float nota3;
	
	printf ("Ingresar primera nota: ");
	scanf ("%f", &nota1);
	
	printf ("\nIngresar segunda nota: ");
	scanf ("%f", &nota2);
	
	printf ("\nIngresar tercera nota: ");
	scanf ("%f", &nota3);
	system ("cls");
	
	printf ("\n\n\t\t\tEl promedio es de: %.2f", promedio(nota1, nota2, nota3));
	
	printf("\n\n");
	
	system ("pause");
	
	return 0;
}
