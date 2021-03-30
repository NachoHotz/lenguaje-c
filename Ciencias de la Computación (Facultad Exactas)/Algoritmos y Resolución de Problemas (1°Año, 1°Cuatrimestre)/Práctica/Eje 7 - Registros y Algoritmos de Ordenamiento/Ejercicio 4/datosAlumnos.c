#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 5

typedef struct 
{
	char Nombre[15];
	int Registro;
	float Nota;

}estudiantes;

void carga (estudiantes A[N])
{

	for (int i = 0; i < N; i++)
	{
		printf("\n\t-- CARGA DATOS-ESTUDIANTES -- 5 ESTUDIANTES\n");

		printf("\n\tEstudiante %d", i+1);

		fflush(stdin);
		printf("\n\nNombre: ");
		gets(A[i].Nombre);

		printf("\nRegistro: ");
		scanf("%d", &A[i].Registro);

		printf("\nNota: ");
		scanf("%f", &A[i].Nota);

		system("cls");
	}

	system("cls");

}

void cargaNuevasEstructuras (estudiantes A[N], estudiantes B[N], estudiantes C[N])
{
	for (int i = 0; i < N; i++)
	{
		if (A[i].Nota >= 6)
		{
			B[i] = A[i];

	    }else
	    {
	    	C[i] = A[i];
	    }

	}
}

void notaMasObtenida (estudiantes B[N], estudiantes C[N])
{
	float sumaNotas = 0;

	for (int i = 0; i < N; i++)
	{
		sumaNotas = sumaNotas + (B[i].Nota + C[i].Nota);
	}

	printf ("\n%.1f", sumaNotas);
}

int main()
{
	estudiantes lista[N], aprobados[N], reprobados[N];
	
	carga (lista);
	cargaNuevasEstructuras (lista, aprobados, reprobados);
	notaMasObtenida (aprobados, reprobados);

}