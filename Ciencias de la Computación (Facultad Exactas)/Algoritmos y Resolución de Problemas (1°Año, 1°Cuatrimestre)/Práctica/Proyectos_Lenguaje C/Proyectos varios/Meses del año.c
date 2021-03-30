//* Hacer un programa que muestre los meses del año, y pedirle un numero al usuario de entre (1-12) y que muestre el mes al que pertenece//*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int mes;
	
	printf ("\t Meses:");
	
	printf ("\n  Enero\n  Febrero\n  Marzo\n  Abril\n  Mayo\n  Junio\n  Julio\n  Agosto\n  Septiembre\n  Octubre\n  Noviembre\n  Diciembre\n");
	
	printf ("\nAhora digite un numero entre (1 - 12) para saber el mes al que pertenece: ");
	scanf ("%d", &mes);
	
	switch (mes)
	{
		case 1: puts ("\nEl numero corresponde a: Enero"); break; 
		case 2: puts ("\nEl numero corresponde a: Febrero"); break; 
		case 3: puts ("\nEl numero corresponde a: Marzo"); break; 
		case 4: puts ("\nEl numero corresponde a: Abril"); break;
		case 5: puts ("\nEl numero corresponde a: Mayo"); break; 
		case 6: puts ("\nEl numero corresponde a: Junio"); break; 
		case 7: puts ("\nEl numero corresponde a: Julio"); break; 
		case 8: puts ("\nEl numero corresponde a: Agosto"); break; 
		case 9: puts ("\nEl numero corresponde a: Septiembre"); break; 
		case 10: puts ("\nEl numero corresponde a: Octubre"); break; 
		case 11: puts ("\nEl numero corresponde a: Noviembre"); break;
		case 12: puts ("\nEl numero corresponde a: Diciembre"); break;
	    
	}
	printf ("\n");
	system ("pause");
	
	return 0;
}

