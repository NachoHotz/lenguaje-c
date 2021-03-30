#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 5

typedef struct
{
	char nombre[30], domicilio[30];
	int DNI, Edad;
	float importe;

}localComidas;

void carga (localComidas A[N]) 
{
	for (int i = 0; i < N; i++)
	{
		printf("\n\t-- CARGA -- : 5 CLIENTES");

		printf("\n\n\tCliente %d", i+1);

		fflush(stdin);
		printf("\n\nNombre y Apellido: ");
		gets(A[i].nombre);

		fflush(stdin);
		printf("\nDomicilio: ");
		gets(A[i].domicilio);

		printf("\nEdad: ");
		scanf("%d", &A[i].Edad);

		printf("\nDNI: ");
		scanf("%d", &A[i].DNI);

		printf("\nImporte a pagar: $");
		scanf("%f", &A[i].importe);	

		system("cls");
	}

	system("cls");
}

void muestraOrdenSeleccion (localComidas A[N])
{
	int max;
	localComidas aux;

	for (int i = 0; i < N-1; i++)
	{
		max = i;

		for (int j = i+1; j < N; j++)
		{
			if (A[j].importe > A[max].importe)
			{
				max = j;
			}
		}

		aux = A[i];
		A[i] = A[max];
		A[max] = aux;
	}

	printf("\n\t-- ORDEN DE IMPORTE DESCNENDENTE --\n");

	for (int i = 0; i < N; i++)
	{
		printf("\nA[%d] = $%.2f", i, A[i].importe);
	}
}

void muestraDatosMasMenosImporte (localComidas A[N])
{
	float max, min;

	max = 0;
	min = 9999.99;

	for (int i = 0; i < N; i++)
	{
		if (A[i].importe > max)
		{
			max = A[i].importe;
		}

		if (A[i].importe < min)
		{
			min = A[i].importe;
		}	
	}

	printf("\n\n\t-- CLIENTES QUE PAGARON MAS Y MENOS --\n");

	for (int i = 0; i < N; i++)
	{
		if (A[i].importe == max)
		{
			printf("\n\tCliente que pago mas");
			printf("\n\nNombre: %s \nDomicilio: %s \nEdad: %d \nDNI: %d \nImporte: $%.2f", A[i].nombre, A[i].domicilio, A[i].Edad, A[i].DNI, A[i].importe);
		}
	}

	for (int j = 0; j < N; j++)
	{
		if (A[j].importe == min)
		{
			printf("\n\n\tCliente que pago menos");
			printf("\n\nNombre: %s \nDomicilio: %s \nEdad: %d \nDNI: %d \nImporte: $%.2f", A[j].nombre, A[j].domicilio, A[j].Edad, A[j].DNI, A[j].importe);	
		}
	}
}

void promedioEdad (localComidas A[N])
{
	int acumuladorEdades = 0, promedio;

	for (int i = 0; i < N; i++)
	{
		acumuladorEdades = acumuladorEdades + A[i].Edad;
	}

	promedio = acumuladorEdades / N;

	printf("\n\nEdad promedio de los clientes: %d", promedio);
}

void busquedaBinariaImporte (localComidas A[N])
{
	float importe;
	int inferior = 0, superior = N - 1, medio;
	char letra;

	medio = (inferior + superior) / 2;

	printf("\n\nIngresar importe a buscar: $");
	scanf("%f", &importe);

	while ((inferior <= superior) && (importe != A[medio].importe))
	{
		if (importe < A[medio].importe)
		{
			superior = medio - 1;

		}else if (importe > A[medio].importe)
		{
			inferior = medio + 1;
		}

		medio = (inferior + superior) / 2;
	}

	if (inferior <= superior)
	{
		for (int i = 0; i < N; i++)
		{
			if (A[i].importe == A[medio].importe)
			{
				printf("\nEl importe buscado se encontro en el registro en la posicion A[%d]", medio);

				fflush(stdin);
				
				printf("\n\nDesea ver los datos del cliente con el importe buscado? (Y/N): ");
				scanf("%c", &letra);

				if (letra == 'Y' || (letra == 'y'))
				{
					printf("\nNombre: %s \nDomicilio: %s \nEdad: %d \nDNI: %d\n\n", A[i].nombre, A[i].domicilio, A[i].Edad, A[i].DNI);
				
					printf("Pulse cualquier tecla para salir. ");
					getch();

				}else if ((letra == 'N') || (letra == 'n'))
				{
					printf("\nPulse cualquier tecla para salir.	");
					getch();	
				}
			}  
		}

	}else 
	{
		printf("\nEl importe buscado no se encontro en el arreglo. Pulse cualquier tecla para salir. ");
		getch();	
	}
}

int main()
{
	localComidas datos[N];

	carga (datos);
	muestraOrdenSeleccion (datos);
	muestraDatosMasMenosImporte (datos);
	promedioEdad (datos);
	busquedaBinariaImporte (datos);
}