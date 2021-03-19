#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float cant (int xdol, float xval)
{
    float total;

    total = xdol * xval;

    return total;
}

int main ()
{
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

    if (dolares >= 5000)
    {
        com = (total_valor * 5) / 100;
        total2 = (total_valor + com);

        printf ("\n\nComision a abonar: $%.2f pesos", com);

        printf ("\n\nTotal a abonar: $%.2f pesos\n\n", total2);
    }else
    {
        printf ("\n\nNo se agregara comision ya que el monto a comprar es menor a 5000.");
        printf ("\n\nTotal a abonar: $%.2f pesos\n\n", total_valor);
    }

    printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
}