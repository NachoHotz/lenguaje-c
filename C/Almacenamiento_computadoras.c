/*La capacidad de almacenamiento de las computadoras se describe en kilobytes de memoria. Un kilobyte equivale a
1.024 bytes. Un carácter necesita un byte de almacenamiento (una letra, un dígito, un signo de puntuación o un
símbolo).
a) Realice un algoritmo que a través de subprogramas determine la cantidad de caracteres que puede almacenar una
computadora de 2048 kilobytes de memoria.
b) Investigue e indique como se debería realizar el cálculo si se usa otra medida de almacenamiento (bytes y sus
múltiplos)
c) Implemente las modificaciones necesarias para una computadora cuya cantidad memoria es un valor ingresado
por teclado.*/

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
