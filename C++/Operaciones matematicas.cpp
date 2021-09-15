#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

void mostrarMensaje () {
  printf ("\n\n\t\tCerrando programa");

  for (int i = 0; i < 3; i++) {
    Sleep (600);
    printf (".");
  }
  return 0;
}

int main () {
  int sum1, sum2, res1, res2, multi1, multi2, div1, div2, raiz, raiz1, sum, res, multi, div, opc, fact = 1, fact1, potencia, pot1, pot2, num, por, porcentaje;
  float raiz2, raiz3;
  char letra;

  Menu: {
    printf ("\tOperaciones matematicas");
    printf ("\n\n1. Suma de 2 numeros");
    printf ("\n2. Resta de 2 numeros");
    printf ("\n3. Multiplicacion de 2 numeros");
    printf ("\n4. Division  de 2 numeros");
    printf ("\n5. Factorial de un numero");
    printf ("\n6. Raiz cuadrada de un numero");
    printf ("\n7. Raiz cubica de un numero");
    printf ("\n8. Potencia de un numero");
    printf ("\n9. Porcentaje de un numero");
    printf ("\n10. Salir");
    printf ("\n\nIntroduzca la operacion a realizar: ");

    Scan: {
      scanf ("%d", &opc);
    }
  }
  switch (opc) {
    case 1:
      printf ("\nIntroduzca los numeros a sumar: ");
      scanf ("%d %d", &sum1, &sum2);

      sum = sum1 + sum2;

      printf ("\nEl resultado es: %d", sum);

      printf ("\n\nDesea realizar otra operacion? (y/n): ");
      scanf (" %c", &letra);

      if ((letra == 'y') || (letra == 'Y')) {
	printf ("\nDesplegando menu de opciones");

        for (int i = 0; i < 3; i++) {
          Sleep (600);
          printf (".");
        }

	system ("cls");

        goto Menu;
	return 0;
      }else if ((letra == 'n') || (letra == 'N')) {
        mostrarMensaje();
      }
    case 2:
      printf ("\nIntroduzca los numeros a restar: ");
      scanf ("%d %d", &res1, &res2);

      res = res1 - res2;

      printf ("\nEl resultado es: %d", res);

      printf ("\n\nDesea realizar otra operacion? (y/n): ");
      scanf (" %c", &letra);

      if ((letra == 'y') || (letra == 'Y')) {
	printf ("\nDesplegando menu de opciones");

        for (int i = 0; i < 3; i++) {
          Sleep (600);
          printf (".");
        }

	system ("cls");

	goto Menu;
	return 0;
      }else if ((letra == 'n') || (letra == 'N')) {
        mostrarMensaje();
      }
    case 3:
      printf ("\nIntroduzca el numero: ");
      scanf ("%d", &multi1);

      printf ("\nAhora digite el numero por el cual se multiplicara: ");
      scanf ("%d", &multi2);

      multi = multi1 * multi2;

      printf ("\nEl resultado es: %d", multi);

      printf ("\n\nDesea realizar otra operacion? (y/n): ");
      scanf (" %c", &letra);

      if ((letra == 'y') || (letra == 'Y')) {
	printf ("\nDesplegando menu de opciones");

        for (int i = 0; i < 3; i++) {
          Sleep (600);
          printf (".");
        }

	system ("cls");

	goto Menu;
	return 0;
      }else if ((letra == 'n') || (letra == 'N')) {
        mostrarMensaje();
      }
    case 4:
      printf ("\nDigite el primer numero: ");
      scanf ("%d", &div1);

      printf ("\nAhora digite el numero por el cual se dividira: ");
      scanf ("%d", &div2);

      div = div1 / div2;

      printf ("\nEl resultado es: %d", div);

      printf ("\n\nDesea realizar otra operacion? (y/n): ");
      scanf (" %c", &letra);

      if ((letra == 'y') || (letra == 'Y')) {
	printf ("\nDesplegando menu de opciones");

        for (int i = 0; i < 3; i++) {
          Sleep (600);
          printf (".");
        }

	system ("cls");

	goto Menu;
        return 0;

	}else if ((letra == 'n') || (letra == 'N')) {
          mostrarMensaje();
	}
    case 5:
      printf ("\nIntroduzca el numero del cual desea saber su factorial: ");
      scanf ("%d", &fact1);

      for (int i = 1; i <= fact1; i++) {
        fact = fact * i;
      }

      printf ("\nEl factorial del numero es: %d", fact);

      printf ("\n\nDesea realizar otra operacion? (y/n): ");
      scanf (" %c", &letra);

      if ((letra == 'y') || (letra == 'Y')) {
        printf ("\nDesplegando menu de opciones");

        for (int i = 0; i < 3; i++) {
          Sleep (600);
          printf (".");
        }

	system ("cls");

        goto Menu;
	return 0;

	}else if ((letra == 'n') || (letra == 'N')) {
          mostrarMensaje();
	}
      case 6:
        printf ("\nIngrese el numero del cual desea saber su raiz cuadrada: ");
        scanf ("%d", &raiz1);

	raiz = sqrt (raiz1);

	printf ("\nLa raiz cuadrada del numero es: %d", raiz);

	printf ("\n\nDesea realizar otra operacion? (y/n): ");
	scanf (" %c", &letra);

	if ((letra == 'y') || (letra == 'Y')) {
	  printf ("\nDesplegando menu de opciones");

          for (int i = 0; i < 3; i++) {
           Sleep (600);
           printf (".");
          }

	  system ("cls");

	  goto Menu;
	  return 0;
	}else if ((letra == 'n') || (letra == 'N')) {
          mostrarMensaje();
	}
      case 7:
	printf ("\nIngrese el numero del cual desea saber su raiz cubica: ");
	scanf ("%f", &raiz3);

	raiz2 = pow (raiz3, 0.33333333333);

	printf ("\nLa raiz cubica del numero es: %.2f", raiz2);

	printf ("\n\nDesea realizar otra operacion? (y/n): ");
	scanf (" %c", &letra);

	if ((letra == 'y') || (letra == 'Y')) {
	  printf ("\nDesplegando menu de opciones");

          for (int i = 0; i < 3; i++) {
           Sleep (600);
           printf (".");
          }

	  system ("cls");

	  goto Menu;
          return 0;
	}else if ((letra == 'n') || (letra == 'N')) {
          mostrarMensaje();
	}
      case 8:
	printf ("\nIngrese el numero del cual desea saber su potencia: ");
        scanf ("%d", &pot1);

	printf ("\nAhora ingrese la potencia: ");
	scanf ("%d", &pot2);

	potencia = pow (pot1, pot2);

	printf ("\nLa potencia del numero es: %d", potencia);

	printf ("\n\nDesea realizar otra operacion? (y/n): ");
        scanf (" %c", &letra);

        if ((letra == 'y') || (letra == 'Y')) {
	  printf ("\nDesplegando menu de opciones");

          for (int i = 0; i < 3; i++) {
           Sleep (600);
           printf (".");
          }

          system ("cls");

	  goto Menu;
          return 0;
	}else if ((letra == 'n') || (letra == 'N')) {
          mostrarMensaje();
	}
      case 9:
	printf ("\nIntroduzca el porcentaje que desea saber de un numero: ");
	scanf ("%d", &por);

	printf ("\nAhora ingrese el numero del cual desea saber el porcentaje: ");
	scanf ("%d", &num);

	porcentaje = (num*por) / 100;

	printf ("\nEl porcentaje del numero es: %d", porcentaje);

	printf ("\n\nDesea realizar otra operacion? (y/n): ");
        scanf (" %c", &letra);

	if ((letra == 'y') || (letra == 'Y')) {
          printf ("\nDesplegando menu de opciones");

          for (int i = 0; i < 3; i++) {
            Sleep (600);
            printf (".");
          }

	  system ("cls");

	  goto Menu;
	  return 0;
	}else if ((letra == 'n') || (letra == 'N')) {
          mostrarMensaje();
	}
      case 10: mostrarMensaje();

      default:
        printf ("\nUsted no ha seleccionado ninguna opcion. Seleccione una: ");

	goto Scan;
	system ("pause");
	return 0;
  }
  return 0;
}
