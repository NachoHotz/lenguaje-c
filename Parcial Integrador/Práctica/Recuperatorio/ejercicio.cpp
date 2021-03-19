#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 5

struct Articulos
{
	int Codigo, cantidadVentas;
	char Nombre[20];
	float Precio, total;
};

struct Nuevo
{
	char nombre[20];
};

void Carga (Articulos A[N])
{
	for (int i = 0; i < N; i++)
	{
		A[i].total = 0;

		printf("\n\t-- CARGA -- 5 Articulos");
		printf("\n\n\t Articulo %d\n", i+1);

		printf("\nIngrese codigo de articulo: ");
		scanf("%d", &A[i].Codigo);

		fflush(stdin);
		printf("\nIngrese nombre del articulo: ");
		gets(A[i].Nombre);

		printf("\nIngrese precio del articulo: $");
		scanf("%f", &A[i].Precio);

		printf("\nIngrese cantidad de ventas: ");
		scanf("%d", &A[i].cantidadVentas);

		system("cls");
	}

	system("cls");
}

void totalVentas (Articulos A[N])
{
	for (int i = 0; i < N; i++)
	{
		A[i].total = A[i].Precio * A[i].cantidadVentas;
	}

	for (int i = 0; i < N; i++)
	{
		printf("\n\nTotal de dinero recaudado en ventas del articulo %d: $%.2f", i+1, A[i].total);
	}
}

float promedioPrecio (Articulos A[N])
{
	float totalAcumulado, promedio;

	totalAcumulado = 0;

	for (int i = 0; i < N; i++)
	{
		totalAcumulado = totalAcumulado + A[i].Precio;
	}

	promedio = totalAcumulado / N;

	return promedio;
}

void masVendido (Articulos A[N])
{
	int ventaMaxima, ventaMaximaCodigo, precioMinimoCodigo;
	float precioMinimo;

	ventaMaxima = A[0].cantidadVentas;

	for (int i = 0; i < N; i++)
	{
		if (A[i].cantidadVentas > ventaMaxima)
		{
			ventaMaxima = A[i].cantidadVentas;
			ventaMaximaCodigo = A[i].Codigo;
		}
	}

	precioMinimo = A[0].Precio;

	for (int i = 0; i < N; i++)
	{
		if (A[i].Precio < precioMinimo)
		{
			precioMinimo = A[i].Precio;
			precioMinimoCodigo = A[i].Codigo;
		}
	}

	if (ventaMaximaCodigo == precioMinimoCodigo)
	{
		printf("\nEl articulo %d es el mas economico y el mas vendido", ventaMaximaCodigo);
	}
}

int nuevaEstructura (Articulos A[N], Nuevo B[N])
{
	int cantidadComponentes;
	float precioNuevo;

	printf("\nIngresar precio: ");
	scanf("%f", &precioNuevo);

	for (int i = 0; i < N; i++)
	{
		if (A[i].Precio < precioNuevo)
		{
			B[i].nombre = A[i].Nombre;
			cantidadComponentes = cantidadComponentes + 1;
		}
	}

	return cantidadComponentes;
}

int main()
{
	Articulos datos[N];
	Nuevo datos2[N];

	Carga (datos);
	totalVentas (datos);

	printf("\nEl precio promedio es: $%.2f", promedioPrecio (datos));

	masVendido (datos);

	printf("\nLa dimension de la nueva estructura es: %d", nuevaEstructura (datos, datos2));
}