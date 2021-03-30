/*Para realizar una recarga virtual de una determinada empresa de telefonía celular, se ingresan por teclado los datos
correspondientes al número de celular y el importe de la recarga. Considerar que si el importe de la recarga es mayor
o igual a $50, el importe acreditado se incrementará en un 20%, si la recarga es igual o superior a $70, el incremento
es del 50% y si la recarga supera los $90 el incremento será del 100%.
Realizar un algoritmo que utilizando subprogramas muestre el número de celular y el importe total acreditado de la
recarga.*/

#include <stdio.h>
#include <conio.h>

void acreditacion (int numeroCelular, int recarga)
{
	int incremento;

	if (recarga == 50 || recarga == 60)
	{
		incremento = (recarga * 20) / 100;
		recarga = recarga + incremento;

	}

	else if(recarga == 70 || recarga == 80)
	{
		incremento = (recarga * 50) / 100;
		recarga = recarga + incremento;
	}
	
	else if (recarga >= 90)
	{
		incremento = (recarga * 100) / 100;
		recarga = recarga + incremento;
	}

	printf("\nNumero de celular: %d", numeroCelular);
	printf("\nImporte a acreditar: $%d\n\n", recarga);

	printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
} 

int main ()
{
	int importe_recarga;
	int num_celular;

	printf("Ingresar numero de celular: ");
	scanf("%d", &num_celular);

	printf("\nAhora ingresar el importe de la recarga: $");
	scanf("%d", &importe_recarga);

	acreditacion (num_celular, importe_recarga);
}