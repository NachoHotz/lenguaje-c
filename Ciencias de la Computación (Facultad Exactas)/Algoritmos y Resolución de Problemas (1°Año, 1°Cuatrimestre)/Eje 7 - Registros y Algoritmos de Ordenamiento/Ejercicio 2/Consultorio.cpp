#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 2

struct consultorio
	{
		char nombrePaciente[30], obraSocial[20];
		int Edad;
		float horarioTurno;
	};

void carga (consultorio A[N])

{	

	for (int i = 0; i < N; i++)
	{

		printf("\n\t-- CARGA DE PACIENTES -- - 5 PACIENTEs -\n");

		printf("\n\tPaciente %d", i+1);

		printf("\n\nNombre: ");
		fflush(stdin);
		gets(A[i].nombrePaciente);		

		printf("\nEdad: ");
		scanf("%d", &A[i].Edad);
		
		printf("\nObra Social: ");
		fflush(stdin);
		gets(A[i].obraSocial);

		printf("\nHorario del turno: ");
		scanf("%f", &A[i].horarioTurno);

		system("cls");
	}

	system("cls");
}

void muestraDatos (consultorio A[N])
{	
	char nombre[30];

	printf("\n\t-- MUESTRA_DATOS --\n\n");

	printf("Ingresar nombre de paciente: ");
	fflush(stdin);
	gets(nombre);

	for (int i = 0; i < N; i++)
	{
		if (strcmp(A[i].nombrePaciente, nombre) == 0)
		{
			printf("\n\tEdad: %d \n\n\tObra Social: %s \n\n\tHorario del turno: %.2f", A[i].Edad, A[i].obraSocial, A[i].horarioTurno);
			break;

		}else 
			{
				printf("\nNo se encontro ningun paciente registrado con el nombre %s", nombre);
				break;
			}
	}
}

void menorEdad (consultorio A[N])
{
	int contador;

	contador = 0;

	for (int i = 0; i < N; i++)
	{
		if (A[i].Edad < 18)
		{
			contador = contador + 1;
		}
	}

	printf("\n\nPacientes menores de edad: %d", contador);
}

void obrasocial (consultorio A[N])
{
	char obra_social[20];

	fflush(stdin);
	printf("\n\nIngresar Obra Social: ");
	gets(obra_social);

	for (int i = 0; i < N; i++)
	{
		if (strcmp (A[i].obraSocial, obra_social) == 0)
		{
			printf("\nLos siguientes pacientes poseen la obra social ingresada: \n\n\t%d_ %s", i+1, A[i].nombrePaciente);
			
		}else
			{
				printf("\nNo hay pacientes que posean la obra social ingresada. ");
				break;
			}
	}

	printf("\n\nPulse cualquier tecla para salir. ");
	getch();
}

int main()
{
	consultorio datos[N];

	carga (datos);
	muestraDatos (datos);
	menorEdad (datos);
	obrasocial(datos);
}