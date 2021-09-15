/*Diseñar un algoritmo que usando subprogramas permita:
1. Cargar dos arreglos A y B de M componentes enteros cada uno.
2. Generar un nuevo arreglo que almacene el resultado de multiplicar el primer elemento de A con el último
elemento de B, el segundo de A con el penúltimo de B y así sucesivamente.
3. Mostrar el nuevo arreglo en orden inverso.
4. Calcular y mostrar el producto escalar de los arreglos A y B.
Nota: El producto escalar se calcula: A[1]*B[1] + A[2]*B[2]+ A[3] *B[3]+…+ A[n] *B[n] = k siendo k un número
entero.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 10
#define P 10
#define S 10

void carga (int A[N], int B[P]) {
  printf("\n\t -- CARGA - ARREGLO A - -- : 10 COMPONENTES\n\n");

  for (int i = 0; i < N; i++) {
    printf("A[%d] = ", i);
    scanf("%d", &A[i]);
  }

  printf("\n\n");
  system("cls");

  printf("\n\t -- CARGA - ARREGLO B - -- : 10 COMPONENTES\n");

  for (int i = 0; i < P; i++) {
    printf("B[%d] = ", i);
    scanf("%d", &B[i]);
  }

  printf("\n\n");
  system("cls");
}

void carga_nuevo_arreglo (int A[N], int B[P], int C[S]) {
  for (int i = 0; i < S; i++) {
    C[i] = A[i] * B[i];
  }
}

void muestra (int C[S]) {
  printf("\n\t -- MUESTRA - ARREGLO C - --\n");
  printf("\n -- ARREGLO ORIGINAL --\n");

  for(int i = 0; i < S; i++) {
    printf("\nC[%d] = %d", i, C[i]);
  }

  printf("\n\n -- ARREGLO INVERTIDO --\n");

  for(int i = 9; i >= 0; i--) {
    printf("\nC[%d] = %d", i, C[i]);
  }
  printf("\n\n");
}

void producto_escalar (int A[N], int B[P]) {
  int escalar;

  for(int i = 0; i < N && i < P; i++) {
    escalar = (A[i] * B[i]) + (A[i] * B[i]);
  }

  printf("Producto escalar: %d.\n\n", escalar);
  printf("Pulse cualquier tecla para cerrar el programa. ");
  getch();
}

int main() {
  int arregloA[N], arregloB[P], arregloC[S];

  carga(arregloA, arregloB);
  carga_nuevo_arreglo(arregloA, arregloB, arregloC);
  muestra(arregloC);
  producto_escalar (arregloA, arregloB);

  return 0;
}
