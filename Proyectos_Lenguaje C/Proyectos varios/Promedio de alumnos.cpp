#include <stdio.h>
#include <stdlib.h>

float p (float xn1, float xn2, float xn3)
{
    float prom;

    prom = (xn1 + xn2 + xn3) / 3;

    printf ("El promedio es: %.2f.", prom);

    if (prom >= 6)
	{
		printf (" El alumno aprobo la materia.");

	}else if   (prom < 6){
		printf (" El alumno reprobo la materia.");
	}
	printf ("\n\n");
	system ("pause");
}

int main ()
{
	float n1,n2,n3;
	float promedio;

	printf ("Ingrese las 3 notas del alumno: ");
	scanf  ("%f %f %f", &n1, &n2, &n3);

	system ("cls");

	promedio = p (n1, n2, n3);

	return 0;
}
