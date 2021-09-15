#include <iostream>
#include <stdlib.h>

using namespace std;

void tabla (int numero) {
  for (int i = 1; i<=10; i++) {
    cout<<"\n";
    cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
  }
}

int main () {
  int numero;

  do {
    cout<<"Digite un numero: "; cin>>numero;
  }while ((numero<1) || (numero>10));

  tabla(numero);

  cout<<"\n";
  system ("pause");

  return 0;
}
