#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	
	int i, fact = 1, n;
	
	cout<<"Introduce el numero del cual deseas obtener el factorial: ";
	cin>>n;
	
	for (i = 1; i <= n; i++)
		fact = fact * i;
	cout<<"\nEl factorial es: "<<fact;
	
	cout<<"\n\n";
	system ("pause");
	
	return 0;
}
