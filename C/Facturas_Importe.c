/*Hacer un algoritmo que resuelva el siguiente enunciado:
Se cuenta con los importes de M facturas de venta.
a) Cargue un arreglo
b) Imprima los números de las facturas que registraron el menor importe.
c) Imprima los números de las facturas cuyo importe superan al importe promedio.
d) Ingrese por teclado un importe e informe el porcentaje de facturas cuyo importe lo superan*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 10

void carga (float A[N]) {
  printf("\n\t-- CARGA DEL ARREGLO -- : 10 COMPONENTES\n\n");

  for (int i = 0; i < N; i++) {
    printf("A[%d] = $", i);
    scanf("%f", &A[i]);
  }
  system("cls");
}

void importe (float A[N]) {
  printf("\n\t -- MUESTRA DEL ARREGLO --\n");

  float min, max, sumaTotalImportes, importePromedio;

  sumaTotalImportes = 0;
  max = 0;
  min = 99999.99;

  for (int i = 0; i < N; i++) {
    printf("\nA[%d] = $%.2f", i, A[i]);

    sumaTotalImportes = sumaTotalImportes + A[i];

    if (min > A[i]) {
      min = A[i];
    }else if (max < A[i]) {
      max = A[i];
    }
  }

  importePromedio = sumaTotalImportes / 10;

  printf("\n\n");
  system ("pause");
  system ("cls");
  printf("\n\t-- RESULTADOS --\n\n");
  printf("Numeros de facturas con menor importe:\n ");

  for (int i = 0; i < N; i++) {
    if (A[i] == min) {
      printf(" \nA[%d] = $%.2f", i, A[i]);
    }
  }

  printf("\n\nNumeros de facturas mayores al importe promedio:\n ");

  for (int i = 0; i < N; i++) {
    if (A[i] > importePromedio) {
      printf ("\nA[%d] = $%.2f", i, A[i]);
    }
  }
  printf("\n\nImporte promedio: $%.2f\n", importePromedio);
}

void teclado (float A[N]) {
  int facturasImporteMayor;
  float importe, sumaTotalImportes, porcentaje;

  facturasImporteMayor = 0;
  sumaTotalImportes = 0;

  printf("\nIngrese importe: $");
  scanf("%f", &importe);

  for (int i = 0; i < N; i++) {
    sumaTotalImportes = sumaTotalImportes + A[i];
  }

  for (int i = 0; i < N; i++) {
    if (A[i] > importe) {
      facturasImporteMayor = facturasImporteMayor + 1;
    }
  }

  porcentaje = (100 * facturasImporteMayor) / 10;

  printf("\nPorcentaje de facturas con importe mayor al importe ingresado por teclado: %.2f\n\n", porcentaje);
  printf("Pulse cualquier tecla para cerrar el programa. ");
  getch();
}

int main () {
  float facturas[N];
  carga (facturas);
  importe(facturas);
  teclado(facturas);

  return 0;
}
