#include <stdio.h>
#include <conio.h>
#define N 20
#define B 20

void carga(int A[N])
{
	printf("\n\t-- CARGA DEL ARREGLO -- : 20 COMPONENTES\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
}

bool busqueda(int A[N], int xedad)
{
	bool posicion = false;
	int i;

	for(i = 0; i < N; i++)
	{

		while((i < N) && (posicion == false))
		{
			if(A[i] == xedad)
			{
				posicion = true;

			}else
				{
					i = i+1;
				}
		}

	}

	return posicion;
}

int main()
{
	int edades[N], edad;
	bool encontrar;

	carga(edades);

	printf("\nIngresar edad a buscar: ");
	scanf("%d", &edad);

	encontrar = busqueda(edades, edad);

	if (encontrar == true)
	{
		printf("\nEl elemento se encuentra en el arreglo. Pulse cualquier tecla para cerrar el programa. ");
		getch();

	}else
		{
			printf("\nEl elemento no se encuentra en el arreglo. Pulse cualquier tecla para cerrar el programa. ");
			getch();
		}

}
