/*Realizar un algoritmo con subprogramas que determine si alcanzan los bancos existentes en un aula, de no ser así,
informar cuantos bancos es necesario agregar. Se cuenta con la cantidad de bancos del aula y la cantidad de alumnos
inscriptos para ese curso.*/

#include <stdio.h>
#include <conio.h>

void cant (int xcant_alum, int xcant_bancos) {
  int faltan;

  if (xcant_bancos < xcant_alum) {
    faltan = xcant_alum - xcant_bancos;

    printf ("\nEs necesario agregar %d", faltan); printf(" bancos.\n\n");
    printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();

  }else {
    printf ("\nLa cantidad de bancos alcanzan para todos los alumnos.\n\n");
    printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
  }
}

int main () {
  int cant_bancos, cant_alum;

  printf ("Ingresar cantidad de alumnos: ");
  scanf ("%d", &cant_alum);

  printf ("\nIngresar cantidad de bancos: ");
  scanf ("%d", &cant_bancos);

  cant (cant_alum, cant_bancos);
}
