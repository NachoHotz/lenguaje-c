#include <stdio.h>
#include <conio.h>

float calculo (float monto, float descuento)
{
	float rebaja, total;
	rebaja = (monto * descuento) / 100;

	total = monto - rebaja;

	return total;
}

int main ()
{
	float monto, rebaja;

	printf ("Ingresar precio del producto: $ ");
	scanf ("%f", &monto);

	printf ("\nIngresar porcentaje de descuento a aplicar: ");
	scanf ("%f", &rebaja);

	printf ("\nEl precio final a abonar es de: $%.2f Pesos\n\n", calculo(monto, rebaja));

	printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();

	return 0;
}
