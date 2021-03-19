#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 10

void carga (int A[N])
{
	printf("\n\t-- CARGA DEL ARREGLO -- : 10 COMPONENTES\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	system("cls");
}

void muestra (int A[N])
{
	printf("\n\t-- MUESTRA DEL ARREGLO --\n");

	for (int i = 0; i < N; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}
	printf("\n\n");
	system("pause");
}

void suma (int A[N]) //Se modifica el tercer elemento del arreglo al sumarlo con un numero ingresado por teclado
{
	int numero;
	
	printf("\nComponente del arreglo a modificar: \n\nA[2] = %d", A[2]);

	printf("\n\nIngresar un numero que se sumara a la componente: ");
	scanf("%d", &numero);

	A[2] = A[2] + numero;

	printf("\n\n-- PRIMERA MODIFICACION (ver segunda componente) --\n");

	for (int i = 0; i < N; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}

	printf("\n\n");
	system("pause");
	system("cls");
	
}

void cambio (int A[N]) //Cambia el valor del ultimo elemento por el valor del quinto elemento
{
	A[9] = A[4];

	printf("\n\n -- SEGUNDA MODIFICACION (Cambio de ultimo elemento por quinto elemento) --\n");

	for(int i = 0; i < N; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}
}

void multiplicacion_impar (int A[N]) //Multiplica todos los componentes impares del arreglo por un numero ingresado por teclado
{
	int numero;

	printf("\n\nIngresar numero para multiplicar componentes impares: ");
	scanf("%d", &numero);
	system("cls");

	printf("\n -- ARREGLO ANTES DE LA MODIFICACION --\n");

	for(int i = 0; i < N; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}

	//Se modifican los elementos del arreglo

	for (int i = 0; i < N; i++)
	{
		if (A[i] % 2 != 0)
		{
			A[i] = A[i] * numero;
		}
	}

	printf("\n\n -- ARREGLO MODIFICADO (revisar componentes impares) --\n ");

	for(int i = 0; i < N; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}

	printf("\n\nPulse cualquier tecla para cerrar el programa. ");
	getch();
}

int main()
{
	int numeros[N];
	carga (numeros);
	muestra (numeros);
	suma (numeros);
	cambio (numeros);
	multiplicacion_impar (numeros);
}