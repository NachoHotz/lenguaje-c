/*Hacer un algoritmo que resuelva el siguiente enunciado:
Se cuenta con las edades de 200 personas.
a) Cargue un arreglo.
b) Escriba la edad promedio.
c) Indique cuantas edades no superan a la edad promedio.
d) Informe si alguna de las edades coincide con la edad promedio.*/

#include <stdio.h>
#include <conio.h>
#define N 5

void carga (int A[N]) {
  printf("\n\t-- CARGA DEL ARREGLO -- : 5 COMPONENTES\n\n");

  for (int i = 0; i < N; i++) {
    printf("A[%d] = ", i);
    scanf("%d", &A[i]);
  }
}

void edad_promedio (int A[N]) {
  int sumaEdades, promEdades, edadMenor, edadIgual;

  edadMenor = 0;
  edadIgual = 0;
  sumaEdades = 0;

  for (int i = 0; i < N; i++) {
    sumaEdades = sumaEdades + A[i];
  }

  promEdades = sumaEdades / 5;

  printf("\nLa edad promedio es: %d", promEdades);

  for (int i = 0; i < N; i++) {
    if (A[i] < promEdades) {
      edadMenor = edadMenor + 1;

    }else if (A[i] == promEdades) {
      edadIgual = edadIgual + 1;
    }
  }

  printf ("\n\nLa cantidad de edades que no superan el promedio son: %d. %d Edades son iguales al promedio.\n\n", edadMenor, edadIgual);
  printf("Pulse cualquier tecla para cerrar el programa. ");
  getch();
}

int main () {
  int edad[N];

  carga(edad);
  edad_promedio(edad);

  return 0;
}
