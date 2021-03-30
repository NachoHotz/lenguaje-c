#include <stdio.h>
#include <stdlib.h>
#define N 5

struct departamento
{
	int cant, sumae;
};

struct subdepartamento
{
	int ndpto, cante;
};

void Cerear (departamento xar[N])
{
	int i;

	for (i = 0; i < N; i++)
	{
		xar[i].cant = 0;
		xar[i].sumae = 0;
	}
}

void Carga (departamento xar[N])
{
	int canthijos, nd;

	scanf("%d", &canthijos);

	while (canthijos != 0)
	{
		scanf("%d", &nd);

		xar[nd - 1].cant = xar[nd - 1].cant + 1;
		xar[nd - 1].sumae = xar[nd - 1].sumae + canthijos;

		scanf("%d", &canthijos);
	}

	system("cls");
}

void Promedio (departamento xar[N])
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("\nLa cantidad de hijos promedio del departamento %d es %d", i+1, xar[i].sumae / xar[i].cant);
	} 
}

int Genero (departamento xar[N], subdepartamento nuevo[N])
{
	int i, c;

	c = 0;

	for (i = 0; i < N; i++)
	{
		if (xar[i].cant < 5)
		{
			nuevo[c].ndpto = i+1;
			nuevo[c].cante = xar[i].cant;

			c = c+1;
		}
	} 

	return c;
}

void Ornedar (subdepartamento a[N], int c)
{
	int k, i, cota;
	subdepartamento aux;

	cota = c;

	k = 1;

	while (k != -1)
	{
		k = -1;

		for (i = 0; i < cota; i++)
		{
			if (a[i].cante > a[i+1].cante)
			{
				aux = a[i];
				a[i] = a[i+1];
				a[i+1] = aux;

				k = i;
			}
		}

		cota = k;
	}
}

void Mostrar (subdepartamento Subarre[N], int c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		printf("\nLa cantidad de encuestados del departamento %d es %d", Subarre[i].ndpto, Subarre[i].cante);
	}
}

int main()
{
	departamento Dep[N];
	subdepartamento Subdep[N];

	int cant;

	Cerear (Dep);
	Carga (Dep);
	Promedio (Dep);

	cant = Genero (Dep, Subdep);

	Ornedar (Subdep, cant);
	Mostrar (Subdep, cant);

	return 0;
} 