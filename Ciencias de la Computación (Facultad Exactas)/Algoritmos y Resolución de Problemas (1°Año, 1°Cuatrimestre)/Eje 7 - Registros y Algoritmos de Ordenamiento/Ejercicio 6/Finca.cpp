#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define N 5

typedef struct 
{
	char nombrePropietario [20];
	int numeroLote;
	float superficie;
}Lotes;

void cerear (Lotes A[N])
{
	for (int i = 0; i < N; i++)
	{
		A[i].numeroLote = 0;
		A[i].superficie = 0;
	}
}

void carga (Lotes A[N])
{
	float sup;

	for (int i = 0; i < N; i++)
	{
		printf("\n\tCarga %d", i+1);

		printf("\n\nIngresar superficie del lote: ");
		scanf("%f", &sup);

		if (sup > 650)
		{
			A[i].superficie = sup;

			printf("\nIngresar numero del lote: ");
			scanf("%d", &A[i].numeroLote);

			fflush(stdin);

			printf("\nIngresar nombre del propietario: ");
			gets(A[i].nombrePropietario);

			system("cls");

		}else
		{
			printf("\nLa superficie ingresada no cumple con lo requerido. ");
			printf("\n\nPulse cualquier tecla para continuar. ");
			getch();

			system("cls");
		}
	}
}

void ordenar (Lotes A[N])
{
	Lotes aux;

	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (A[j].nombrePropietario < A[i].nombrePropietario)
			{	
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i].superficie != 0)
		{
			printf("\n\nA[%d] = Nombre: %s \nNumero de lote: %d \nSuperficie del lote: %.2fmts2", i, A[i].nombrePropietario, A[i].numeroLote, A[i].superficie);

		}
	} 
}

void ingreso (Lotes A[N])
{
	char nombre [30];
	
	fflush(stdin);
	printf("\n\nIngrese nombre de propietario: ");
	gets(nombre);

	for (int i = 0; i < N; i++)
	{
		if (strcmp (A[i].nombrePropietario, nombre) == 0)
		{
			printf("\nNumero del lote: %d \nSuperficie del lote: %.2fmts2", A[i].numeroLote, A[i].superficie);

			break;

		}else
		{
			printf("\nEl nombre ingresado no se encuentra registrado. Pulse cualquier tecla para salir. ");
			getch();

			break;
		}
	}
}

int main()
{
	Lotes datos[N];

	cerear (datos);
	carga (datos);
	ordenar (datos);
	ingreso (datos);
}