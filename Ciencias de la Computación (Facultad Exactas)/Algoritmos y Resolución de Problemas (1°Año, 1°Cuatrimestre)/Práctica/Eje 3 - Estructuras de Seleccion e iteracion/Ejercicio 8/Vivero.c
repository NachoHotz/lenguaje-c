#include <stdio.h>
#include <string.h>
#include <conio.h>

void cultivar (char nombre, int xnum)
{
	switch(nombre)
	{
		case "rosa" : if ((xnum == 1) || (xnum == 2) || (xnum == 3)) 
						{
							printf("\n\nLa semilla ingresada es posible de cultivar en el mes ingreado. ");
							printf("\nPresione cualquier tecla para salir. ");
							getch();

						}else if (xnum == 4) 
							{
								printf("\nNo se puede cultivar esta semilla en el mes ingresado. Se puede cultivar camelias. ");
							} 
	}
}

int main()
{
	char nombreSemilla[10];
	int numeroMes;

	fflush(stdin);
	printf("\nIngresar nombre de la semilla a cultivar: ");
	gets(nombreSemilla);

	printf("\nAhora ingresar numero del mes: ");
	scanf("%d", &numeroMes);

	cultivar(nombreSemilla, numeroMes);
}