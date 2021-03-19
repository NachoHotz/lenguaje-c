#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int precio()
{
	int opcion;

	Menu:
	{
		printf("\n\t-- OPCIONES ..");
		printf("\n\n1. Saber precio final a abonar de combustible");
		printf("\n2. Saber cantidad de litros a cargar");
		printf("\n\nIngresar opcion: ");
		scanf("%d", &opcion);
	}

	switch(opcion)
	{
		case 1 : int litros;
				float precioLitro;
				float precioFinal;
				int litros2;
				char op;

				printf("\nIngresar litros de combustible a cargar: ");
				scanf("%d", &litros);

				printf("\nIngresar precio del litro de combustible: $");
				scanf("%f", &precioLitro);

				litros2 = litros / 0.2642;

				precioFinal = litros2 * precioLitro;

				printf("\nPrecio final: $%.2f", precioFinal);

				fflush(stdin);
				printf("\n\nQuiere realizar otra operacion? (y/n): ");
				scanf("%c", &op);

				if ((op == 'y') || (op == 'Y'))
				{
					system("cls");
					goto Menu;

				}else if ((op == 'n') || (op == 'N'))
				{
					return 0;
				}

				break;

		case 2 : float precioAbonar;
				
				printf("\nIngresar precio a abonar: $");
				scanf("%f", &precioAbonar);

				printf("\nIngresar precio del litro de combustible a cargar: $");
				scanf("%f", &precioLitro);

				precioFinal = (precioAbonar / precioLitro) * 0.2642;

				printf("\nLitros a cargar: %.0f", precioFinal);

				fflush(stdin);
				printf("\n\nQuiere realizar otra operacion? (y/n): ");
				scanf("%c", &op);

				if ((op == 'y') || (op == 'Y'))
				{
					system("cls");
					goto Menu;

				}else if ((op == 'n') || (op == 'N'))
				{
					return 0;
				}

				break;

		default : 
				fflush(stdin);
				printf("\nCodigo de operacion incorrecto. Desea intentar de nuevo? (y/n): ");
				scanf("%c", &op);

				if ((op == 'y') || (op == 'Y'))
				{
					system("cls");
					goto Menu;

				}else if ((op == 'n') || (op == 'N'))
				{
					return 0;
				}		

	}

	return 0;
}

int main()
{
	precio();
}