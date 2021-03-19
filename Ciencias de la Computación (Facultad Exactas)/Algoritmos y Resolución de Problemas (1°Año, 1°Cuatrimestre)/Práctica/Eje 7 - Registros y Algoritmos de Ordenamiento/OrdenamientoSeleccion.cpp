#include <stdio.h>
#include <conio.h>
#define N 10

void carga (int A[N])
{
	printf("\n\t-- CARGA -- - 10 Numeros --\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	printf("\n\nPulse cualquier tecla para ordenar el arreglo de forma ascendente. \n");
	getch();

}

void ordenSeleccion (int A[N])
{
	int aux;

	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (A[j] < A[i])
			{
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;	
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}
}

bool busquedaSecuencial (int A[N])
{
	bool esta = false;
	int num, i, aux;

	printf("\n\nIngresar numero a buscar: ");
	scanf("%d", &num);

	for (i = 0; i < N; i++)
	{
		while ((i < N) && (esta == false))
			{
				if (A[i] == num)
				{
					esta = true;

					aux = i;

				}else
				{
					i = i+1;
				}
			}
	
	}

	if (esta == true)
	{
		printf("\nEl elemento esta en el arreglo, en la posicion A[%d]", aux);

	}else
		{
			printf("\nEl elemento no se encuentra en el arreglo\n\n");
		}

		printf("\n\nPulse cualquier tecla para salir. ");
		getch();

	return 0;
}

int main()
{
	int numeros[N];

	carga (numeros);
	ordenSeleccion (numeros);
	busquedaSecuencial (numeros);
}