// Comprobar si un numero introducido por el usuario es positivo o negativo\*

#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	int numero;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero == 0 )
	{
		cout<<"\nEl numero es cero";
	
	}else if (numero > 0)
	{
		cout<<"\nEl numero es positivo";
		
	}else
	{
		cout<<"\nEl numero es negativo";
	}
	cout<<"\n\n";
    system ("pause");
	return 0;
}
