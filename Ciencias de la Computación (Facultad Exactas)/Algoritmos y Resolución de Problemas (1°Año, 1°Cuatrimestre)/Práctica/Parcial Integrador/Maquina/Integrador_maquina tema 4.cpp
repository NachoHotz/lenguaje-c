#include <stdio.h>
#define N 5

struct riego
{
	int tipo;
	float precio;
	int cant;
};

void Inicializar (riego xsr[N])
{
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &xsr[i].tipo);
		scanf("%f", &xsr[i].precio);
		xsr[i].cant = 0;
	}
}

void Carga (riego xsr[N])
{
	int tp, M, i;
	scanf("%d", &M);
	for (i = 0; i < M; i++)
	{
		scanf("%d", &tp);
		xsr[tp -1].cant = xsr[tp -1].cant +1;
	}
}

void Informar (riego xsr[N])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("\nEL total vendido para el tipo de sistema de riego %d es %f", xsr[i].tipo, xsr[i].cant * xsr[i].precio);
	}
}

void Indicar (riego xsr[N])
{
	int i, xmax, max, xmin;
	float min;

	max = xsr[0].cant;
	for (i = 0; i < N; i++)
	{
		if (xsr[i].cant > max)
		{
			max = xsr[i].cant;
			xmax = xsr[i].tipo;
		}
	}

	min = xsr[0].precio;
	for (i = 0; i < N; i++)
	{
		if (xsr[i].precio < min)
		{
			min = xsr[i].precio;
			xmin = xsr[i].tipo;
		}
	}

	if (xmax == xmin)
	{
		printf("\nEl tipo de sistem de riego %d es las mas vendida y el de menor precio", xmax);
	}
}

int main()
{
	riego TSR[N];

	Inicializar (TSR);
	Carga (TSR);
	Informar (TSR);
	Indicar (TSR);
}