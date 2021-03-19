#include <stdio.h>
#include <conio.h>
#define N 20
#define P 5

void carga(int A[N])
{
	printf("\n\t-- CARGA -- : 20 COMPONENTES\n");

	for(int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
}

int busqueda(int A[N], int num)
{
	int inferior, superior, medio;

	inferior = 0;
	superior = N-1;
	medio = (inferior + superior) / 2;

	while ((inferior <= superior) && (num != A[medio]))
	{
		if (num < A[medio])
		{
			superior = medio - 1;

		}else (num > A[medio])
		{
			inferior = medio + 1;
		}

		medio = (inferior + superior) / 2;
	}

	if (inferior <= superior)
	{
		return medio;

	}else
	{
		return -1;
	}
}

void cargaDivisores(int A[N], int B[P])
{
	for (int i = 0; i < P; i++)
	{
		if (A[i] % 2 == 0)
		{
			B[i] = A[i];
		}
	}

	printf("\n\t-- MUESTRA --");

	for (int p = 0; p < P; p++)
	{
		printf("\nB[%d] = %d", p, B[p]);
	}
}

int main()
{
	int primos[N], divisores[P], numero;

	carga(primos);

	printf("\nIngresar numero a buscar: ");
	scanf("%d", &numero);

	busqueda(primos, numero);

	printf("\nEl numero se encuentra en la pocision: A[%d]", busqueda);

	cargaDivisores (primos, divisores);
}