#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float cantidad (float galones)
{
    float litros;

    litros = galones / 0.2642;

    return litros;
}

float precio_final (float litros, float a_precio)
{
    float final;

    final = litros * a_precio;

    return final;
}

int main ()
{
    float galones, precio, litros, final;

    printf ("Ingresar cantidad de galones de nafta: ");
    scanf ("%f", &galones);

    printf ("\nIngresar el precio de los galones en litros: $");
    scanf ("%f", &precio);

    litros = cantidad (galones);

    final = precio_final (litros, precio);

    printf ("\nEl precio final a abonar por el cliente es de: $%.2f pesos\n\n", final);

    printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();

}
