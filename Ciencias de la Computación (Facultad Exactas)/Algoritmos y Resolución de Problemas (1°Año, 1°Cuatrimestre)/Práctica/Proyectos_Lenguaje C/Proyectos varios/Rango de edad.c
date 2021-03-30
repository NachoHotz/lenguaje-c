//* Indicar si la edad introducida por el usuario se encuentra dentro del rango (18 - 25)
#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	int edad;
	cout<<"Digite su edad: ";
	cin>>edad;
	
	if ((edad >=18) && (edad <=25))
	{
		  cout<<"\nSu edad se encuentra dentro del rango establecido (18 - 25)";
		
	}else cout<<"\nSu edad no se encuentra dentro del rango establecido (18 - 25)";
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
