#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	
	struct Casa
	{
		char* Direccion = "Quiroga 48 (E)";
		char* Localidad = "Rawson";
		char* Barrio = "San Ricardo";
		char* Nombre = "Hotz";
		char* Nombre2 = "Chavez";
		int Telefono = 4534675;
	
	}Casa, Chavez;
	
	cout <<"\n\t\tDatos de la casa 1";
	
	cout <<"\n\nNombre del propietario: "<<Casa.Nombre;
	cout <<"\n\nDireccion: "<<Casa.Direccion;
	cout <<"\n\nLocalidad: "<<Casa.Localidad;
	cout <<"\n\nBarrio: "<<Casa.Barrio;
	cout <<"\n\nTelefomo: "<<Casa.Telefono;
	
	Chavez = Casa;
	
	cout <<"\n\n\t\tDatos de la casa 2";
	cout <<"\n\nNombre del propietario: "<<Chavez.Nombre2;
	cout <<"\n\nDireccion: "<<Chavez.Direccion;
	cout <<"\n\nLocalidad: "<<Chavez.Localidad;
	cout <<"\n\nBarrio: "<<Chavez.Barrio;
	cout <<"\n\nTelefono: "<<Chavez.Telefono;
	
	cout <<"\n\n\n\t\t";
	system ("pause");
	return 0;
}
