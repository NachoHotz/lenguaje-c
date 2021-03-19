#include <stdio.h>
#include <conio.h>
#define N 20

void carga(int A[N])
{
	printf("\n\t-- BUSQUEDA BINARIA --\n");
	printf("\n\t-- CARGA -- : 20 COMPONENTES\n\n");

	for(int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
}

int busqueda(int A[N], int num)
{
	int inferior = 0, superior = N-1, mitad = (inferior + superior) / 2;

	while((inferior <= superior) && (num != A[mitad]))
	{
		if (num < A[mitad])
		{
			superior = mitad - 1;
			
		}else if (num > A[mitad])
			{
				inferior = mitad + 1;
			}

		mitad = (inferior + superior) / 2;
	}

	if (inferior <= superior)
	{
		return mitad;
		
	}else
		{
			return -1;
		}
}

int main()
{
	int numeros[N], numero, encontrar;

	carga(numeros);

	printf("\nIngresar numero a buscar: ");
	scanf("%d", &numero);

	encontrar = busqueda(numeros, numero);

	if (encontrar != -1)
		{
			printf("\nEl elemento se encuentra en la posicion: A[%d]\n\n", encontrar);
			printf("Pulse cualquier tecla para salir. ");
			getch();

		}else
			{
				printf("\nEl elemento no se enuentra en el arreglo\n\n");
				printf("Pulse cualquier tecla para salir. ");
				getch();
			}

	return 0;
}