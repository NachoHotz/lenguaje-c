/*Un banco tiene un sistema la compra de dólares. Para la operación de compra se conoce la cantidad de dólares que
se quiere comprar y el importe de venta de cada dólar. Esta operación tiene una comisión administrativa 5% sobre el
importe total si la cantidad de dólares es más de 5000. Dicha comisión se adiciona al monto que el cliente debe pagar.
Realizar un algoritmo que usando subprogramas muestre un ticket indicando: la cantidad de dólares que se
compraron, el valor de cada dólar, el monto de la comisión y el monto total que el cliente debe abonar por la compra.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float cant (int xdol, float xval) {
  float total;
  total = xdol * xval;

  return total;
}

int main () {
  int dolares;
  float valor, com, total2, total_valor;

  printf ("Ingresar cantidad de dolares a comprar: $ ");
  scanf ("%d", &dolares);

  printf ("\nIngresar valor de un dolar: $ ");
  scanf ("%f", &valor);
  system ("cls");

  total_valor = cant (dolares, valor);

  printf("\n\t-- RESULTADOS --\n\n");

  printf ("Cantidad de dolares a comprar: $%d", dolares);
  printf ("\n\nValor del dolar: $%.2f pesos", valor);

  if (dolares >= 5000) {
    com = (total_valor * 5) / 100;
    total2 = (total_valor + com);

    printf ("\n\nComision a abonar: $%.2f pesos", com);
    printf ("\n\nTotal a abonar: $%.2f pesos\n\n", total2);

    }else {
      printf ("\n\nNo se agregara comision ya que el monto a comprar es menor a 5000.");
      printf ("\n\nTotal a abonar: $%.2f pesos\n\n", total_valor);
    }
  
  printf("Pulse cualquier tecla para cerrar el programa. ");
  getch();
}
