#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float p1,p2,p3;
	float promedio_final;
	
	printf ("Digite los 3 promdios del alumno para saber su promedio final: ");
	scanf  ("%f %f %f", &p1,&p2,&p3);
	
	promedio_final = (p1+p2+p3) / 3;
	
	printf ("\nEl promedio final es: %.2f", promedio_final);
	printf ("\n\n");
	
	if (promedio_final >=6)
	{
		printf ("El alumno aprueba el año");
	}else if   (promedio_final <6)
	{
		printf ("El alumno no aprueba el año");
		printf ("\n\nEl alumno debe recursar");
		
	}
	printf ("\n\n");
	system ("pause");
	return 0;
}

