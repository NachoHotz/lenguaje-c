#include <stdio.h>
#include <conio.h>

float cant (float cantidad_memoria_KByte, float Byte) {
  float almacenamiento;
  almacenamiento = Byte * cantidad_memoria_KByte;

  return almacenamiento;
}

int main () {
  float cantidad_memoria_KByte, Byte = 1024, cant_caracter;

  printf ("Ingresar capacidad de almacenamiento: ");
  scanf ("%f", &cantidad_memoria_KByte);

  cant_caracter = cant (cantidad_memoria_KByte, Byte);

  printf ("\nLa cantidad de caracteres a almacenar es de: %.2f\n\n", cant_caracter);
  printf("Pulse cualquier tecla para cerrar el programa. ");
  getch();
}
