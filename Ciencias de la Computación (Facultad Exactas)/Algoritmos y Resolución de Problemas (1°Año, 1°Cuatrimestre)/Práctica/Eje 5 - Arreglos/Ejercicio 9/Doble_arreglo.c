#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 10
#define P 10
#define S 10

void carga (int A[N], int B[P])
{
	printf("\n\t -- CARGA - ARREGLO A - -- : 10 COMPONENTES\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}

	printf("\n\n");
	system("cls");

	printf("\n\t -- CARGA - ARREGLO B - -- : 10 COMPONENTES\n");

	for (int i = 0; i < P; i++)
	{
		printf("B[%d] = ", i);
		scanf("%d", &B[i]);
	}

	printf("\n\n");
	system("cls");
}

/* Funcion que carga un nuevo arreglo C, con el resultado de
multiplicar cada elemento del arreglo A, con cada elemento
del arreglo B. */

void carga_nuevo_arreglo (int A[N], int B[P], int C[S]) 
{

	for (int i = 0; i < S; i++)
	{
		C[i] = A[i] * B[i];
	}
}

//funcion que muestra el arreglo C original e invertido

void muestra (int C[S]) 
{
	printf("\n\t -- MUESTRA - ARREGLO C - --\n");
	printf("\n -- ARREGLO ORIGINAL --\n");

	for(int i = 0; i < S; i++)
		{
			printf("\nC[%d] = %d", i, C[i]);
		}

	printf("\n\n -- ARREGLO INVERTIDO --\n");
	
	for(int i = 9; i >= 0; i--)
	{
		printf("\nC[%d] = %d", i, C[i]);
	}
	printf("\n\n");
}

// funcion que calcula y muestra el producto escalar de los arreglos A y B

void producto_escalar (int A[N], int B[P]) 
{
	int escalar;

	for(int i = 0; i < N && i < P; i++)
	{
		escalar = (A[i] * B[i]) + (A[i] * B[i]);
	}

	printf("Producto escalar: %d.\n\n", escalar);
	printf("Pulse cualquier tecla para cerrar el programa. ");
	getch();
}

int main()
{
	int arregloA[N], arregloB[P], arregloC[S];

	carga(arregloA, arregloB);
	carga_nuevo_arreglo(arregloA, arregloB, arregloC);
	muestra(arregloC);
	producto_escalar (arregloA, arregloB);
}
