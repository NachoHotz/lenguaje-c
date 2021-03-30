#include <stdio.h>
#include <stdlib.h>
#define N 4

struct categorias
{
	int codigo;
	float sueldo;
	int cant;
};

void Inicializar (categorias xcat[N])
{
	int i;

	for (i = 0; i < N; i++)
	{
		scanf("%d", &xcat[i].codigo);
		scanf("%f", &xcat[i].sueldo);

		xcat[i].cant = 0;
	}
}

void Carga (categorias xar[N])
{
	int cate, M, i;

	scanf("%d", &M);

	for (i = 0; i < M; i++)
	{
		scanf("%d", &cate);

		xar[cate - 1].cant = xar[cate - 1].cant + 1;
	}
}

void Informar (categorias xcat[N])
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("\nLa cantidad a pagar en sueldos para la categoria %d, es: %f", i+1, xcat[i].cant * xcat[i].sueldo);
	}
}

void Indicar (categorias xcat[N])
{
	int i, xmax, max, xmin;
	float min;

	max = xcat[0].cant;

	for (i = 0; i < N; i++)
	{
		if (xcat[i].cant > max)
		{
			max = xcat[i].cant;
			xmax = xcat[i].codigo;
		}
	}

	min = xcat[0].sueldo;

	for (i = 0; i < N; i++)
	{
		if (xcat[i].sueldo < min)
		{
			min = xcat[i].sueldo;
			xmin = xcat[i].codigo;
		}
	}

	if (xmax == xmin)
	{
		printf("\n\nLa categoria %d es la que tiene mas empleados y paga el menor sueldo", xmax);
	}
}

int main()
{
	categorias categ[N];

	Inicializar (categ);
	Carga (categ);
	Informar (categ);
	Indicar (categ);
}