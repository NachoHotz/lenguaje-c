#include <stdio.h>
#include <conio.h>
#define N 20

void carga(int A[N])
{
	for (int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	printf("\nPulse cualquier tecla para ordenar el arreglo de forma ascendente. ");
	printf("\n");
	getch();
}

void ordenaBurbuja (int A[N])
{
	int aux, cota, k;
	cota = N;
	k=1;

	while(k != -1)
	{
		k = -1;

		for (int i = 0; i < cota; i++)
		{
			if (A[i] > A[i+1])
			{
				aux = A[i];
				A[i] = A[i+1];
				A[i+1] = aux;
				k = i;
			}
		}

		cota = k;
	}

	for (int i = 0; i < N; i++)
		{
			printf("\nA[%d] = %d", i, A[i]);
		}
}

void busquedaBinaria(int A[N])
{
	int inferior = 0, superior = N-1, mitad, num;

	mitad = (inferior + superior) / 2;

	printf("\n\nIngresar numero a buscar: ");
	scanf("%d", &num);

	while ((inferior <= superior) && (num != A[mitad]))
	{
		if (num < A[mitad])
		{
			superior = mitad - 1;

		}else

			if (num > A[mitad])
			{
				inferior = mitad + 1;
			}

		mitad = (inferior + superior) / 2;
	}

	if (inferior <= superior)
	{
		printf("\nEl elemento se encuentra en el arreglo en la posicion: A[%d]", mitad);
		printf("\n\nPulse cualquier tecla para salir. ");
		getch();

	}else
	{
		printf("\nEl elemento no se encontro en el arreglo. Pulse cualquier tecla para salir. ");
		getch();
	}
}

int main()
{
	int numeros[N];

	carga (numeros);
	ordenaBurbuja (numeros);
	busquedaBinaria (numeros);
}