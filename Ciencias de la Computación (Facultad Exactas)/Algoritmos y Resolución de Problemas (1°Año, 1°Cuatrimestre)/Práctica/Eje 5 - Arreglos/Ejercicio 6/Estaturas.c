#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 10

void carga (float A[N])
{
	int indice;

	printf("\n\t-- CARGA DEL ARREGLO -- : 10 COMPONENTES");

	printf("\n\nIngresar indice de la componente (finalizar con -1): ");
	scanf ("%d", &indice);

	while (indice != -1)
	{
		printf("\nA[%d] = ", indice);
		scanf("%f", &A[indice]);

		printf("\nIngresar indice de la siguiente componente (finalizar con -1): ");
		scanf ("%d", &indice);
	}
}

void muestra (float A[N])
{
    float alt;
    int a;

    a = 0;

	printf ("\nIngrese una estatura para saber si hay deportistas que poseen la misma: ");
	scanf ("%f", &alt);

	for (int i = 0; i < N; i++)
    {
        if (alt == A[i])
        {
            a = a+1;
        }
    }

    system ("cls");

	printf("\n -- RESULTADOS --\n");

	int c;

	float p, max, min, suma;

	suma = 0;

	c = 0;

	max = 0;

	min = 99999.99;

	for (int i = 0; i < N; i++)
	{
	    suma = suma + A[i];

	    p = suma / N;

		if (max < A[i])
		{
			max = A[i];

		}else if(min > A[i])
		{
			min = A[i];

		}else if (A[i] == p)
		{
			c = c+1;
		}
	}
		for (int i = 0; i < N; i++)
		{
			if (A[i] != 0)
			{
				printf ("\nA[%d] = %.2fmts", i, A[i]);
			}
		}

  	printf ("\n\nSuma de todas las estaturas: %.2fmts", suma);

	printf ("\n\nEstatura promedio: %.2fmts", p);

	printf ("\n\nEstatura maxima: %.2fmts", max);

	printf ("\n\nEstatura minima: %.2fmts", min);

	printf ("\n\nCantidad de estaturas iguales al promedio: %d", c);

	printf("\n\nCantidad de deportistas que poseen la misma estatura que la ingresada por teclado: %d\n\n", a);
	printf("Pulse cualquier tecla para cerrar el programa. ");
	getch();
}

int main ()
{
	float estatura[N];
	carga (estatura);
	muestra (estatura);
}
