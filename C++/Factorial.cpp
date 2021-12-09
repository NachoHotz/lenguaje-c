#include <iostream>
#include <stdlib.h>

using namespace std;

void calcularFactorial (int numero) {
  int fact = 1;

  for (int i = 1; i <= numero; i++) {
    fact = fact * i;
  }

  cout<<"\nEl factorial es: "<<fact;
  cout<<"\n\n";
  system ("pause");
}

int main () {
  int n;

  cout<<"Introduce el numero del cual deseas obtener el factorial: ";
  cin>>n;

  calcularFactorial(n);

  return 0;
}
