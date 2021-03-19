#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
	int numero, unidades, decenas, centenas, millar;
	
	printf ("Digite un numero: ");
	scanf ("%d", &numero);
	
    unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /= 10;
	centenas = numero%10; numero /= 10;
	millar = numero%10; numero /= 10;
	
	switch (millar)
	{
		case 1: printf ("\nEl equivalente es: M"); break;
		case 2: printf ("\nEl equivalente es: MM"); break;
		case 3: printf ("\nEl equivalente es: MMM"); break;
	}
	
	switch (centenas)
	{
		case 1: printf ("\nEl equivalente es: C"); break;
		case 2: printf ("\nEl equivalente es: CC"); break;
		case 3: printf ("\nEl equivalente es: CCC"); break;
		case 4: printf ("\nEl equivalente es: DC"); break;
		case 5: printf ("\nEl equivalente es: D"); break;
		case 6: printf ("\nEl equivalente es: DC"); break;
		case 7: printf ("\nEl equivalente es: DCC"); break;
		case 8: printf ("\nEl equivalente es: DCCC"); break;
		case 9: printf ("\nEl equivalente es: CM"); break;
	}
	
	switch (decenas)
	{
		case 1: printf ("\nEl equivalente es: X"); break;
		case 2: printf ("\nEl equivalente es: XX"); break;
		case 3: printf ("\nEl equivalente es: XXX"); break;
		case 4: printf ("\nEl equivalente es: XL"); break;
		case 5: printf ("\nEl equivalente es: L"); break;
		case 6: printf ("\nEl equivalente es: LX"); break;
		case 7: printf ("\nEl equivalente es: LXX"); break;
		case 8: printf ("\nEl equivalente es: LXXX"); break;
		case 9: printf ("\nEl equivalente es: XC"); break;
	}
	
	switch (unidades)
	{
		case 1: printf ("\nEl equivalente es: I"); break;
		case 2: printf ("\nEl equivalente es: II"); break;
		case 3: printf ("\nEl equivalente es: III"); break;
		case 4: printf ("\nEl equivalente es: IV"); break;
		case 5: printf ("\nEl equivalente es: V"); break;
		case 6: printf ("\nEl equivalente es: VI"); break;
		case 7: printf ("\nEl equivalente es: VII"); break;
		case 8: printf ("\nEl equivalente es: VIII"); break;
		case 9: printf ("\nEl equivalente es: IX"); break;
	}
	cout<<"\n\n";
	system ("pause");

	return 0;
}
