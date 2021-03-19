//* Determinar si la letra introducida por el usuario es una vocal o una consonante//*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char letra;
	printf ("Digite un caracter: ");
	scanf ("%c", &letra);
	
	switch (letra)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' : printf ("\nEl caracter es una vocal minuscula");break;
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' : printf ("\nEl caracter es una vocal mayuscula");break;	
		default  : printf ("\nEl caracter es una consonante");     break;
	}
	printf("\n\n");
	system ("pause");
	
	return 0;
}
