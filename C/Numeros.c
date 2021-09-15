/*Escribir un algoritmo que mediante subprogramas permita:
1. Generar y mostrar un arreglo de 10 componentes enteras.
2. Sumar al tercer elemento del arreglo un valor ingresado por teclado, y mostrar el arreglo modificado.
3. Intercambiar el elemento de la décima posición con el quinto elemento y mostrar el arreglo resultante.
4. Mostrar el resultado de multiplicar las componentes impares del arreglo por un valor ingresado por teclado.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 10

void carga (int A[N]) {
  printf("\n\t-- CARGA DEL ARREGLO -- : 10 COMPONENTES\n\n");

  for (int i = 0; i < N; i++) {
    printf("A[%d] = ", i);
    scanf("%d", &A[i]);
  }
  system("cls");
}

void muestra (int A[N]) {
  printf("\n\t-- MUESTRA DEL ARREGLO --\n");

  for (int i = 0; i < N; i++) {
    printf("\nA[%d] = %d", i, A[i]);
  }

  printf("\n\n");
  system("pause");
}

void suma (int A[N]) {
  int numero;

  printf("\nComponente del arreglo a modificar: \n\nA[2] = %d", A[2]);

  printf("\n\nIngresar un numero que se sumara a la componente: ");
  scanf("%d", &numero);

  A[2] = A[2] + numero;

  printf("\n\n-- PRIMERA MODIFICACION (ver segunda componente) --\n");

  for (int i = 0; i < N; i++) {
    printf("\nA[%d] = %d", i, A[i]);
  }

  printf("\n\n");
  system("pause");
  system("cls");

}

void cambio (int A[N]) {
  A[9] = A[4];

  printf("\n\n -- SEGUNDA MODIFICACION (Cambio de ultimo elemento por quinto elemento) --\n");

  for(int i = 0; i < N; i++) {
    printf("\nA[%d] = %d", i, A[i]);
  }
}

void multiplicacion_impar (int A[N]) {
  int numero;

  printf("\n\nIngresar numero para multiplicar componentes impares: ");
  scanf("%d", &numero);
  system("cls");

  printf("\n -- ARREGLO ANTES DE LA MODIFICACION --\n");

  for(int i = 0; i < N; i++) {
    printf("\nA[%d] = %d", i, A[i]);
  }

  for (int i = 0; i < N; i++) {
    if (A[i] % 2 != 0) {
      A[i] = A[i] * numero;
    }
  }

  printf("\n\n -- ARREGLO MODIFICADO (revisar componentes impares) --\n ");

  for(int i = 0; i < N; i++) {
    printf("\nA[%d] = %d", i, A[i]);
  }

  printf("\n\nPulse cualquier tecla para cerrar el programa. ");
  getch();
}

int main() {
  int numeros[N];

  carga (numeros);
  muestra (numeros);
  suma (numeros);
  cambio (numeros);
  multiplicacion_impar (numeros);

  return 0;
}
