/*Una distribuidora de gaseosas posee 5 sucursales codificadas: 1: Zona Centro; 2: Zona Sur; 3: Zona Este; 4: Zona Oeste;
5: Zona Norte.
Se leen los datos de una factura: número de sucursal en la que se realizó la venta, importe, fecha de vencimiento y día
de pago.
Realizar un algoritmo que usando subprogramas permita:
1. Si la factura es de la sucursal 2 o 5, escriba el nombre de la sucursal y el importe a cobrar, sabiendo que, si la fecha
de pago es posterior a la de vencimiento, se tendrá un recargo del 1,5%.
2. Si la sucursal es 1, 3 o 4, muestre el nombre de la sucursal, y el importe a cobrar, sabiendo que, si la fecha de pago
es igual o menor a la de vencimiento, tendrá un descuento del 2,5%.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void sucursal (int xnum, int xfecha, int xdia, float ximporte) {
  float total_importe, imp;

  printf("\n\t-- RESULTADOS --\n");

  switch(xnum) {
    case 1 :
      if(xdia <= xfecha) {
        imp = (ximporte * 2.5) / 100;
        total_importe = ximporte - imp;

        printf("\nSucursal: Zona Centro");
        printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();

        }else {
          printf("\nFecha de pago mayor a la fecha de venciminto\n\n");
          printf("Pulse cualquier tecla para cerrar el programa. ");
          getch();
        }
      break;
    case 2 :
      if(xdia > xfecha) {
        imp = (ximporte * 1.5) / 100;
        total_importe = ximporte + imp;

        printf("\nSucursal: Zona Sur");
        printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();

      }else {
        printf("\nFecha de pago inferior a fecha de venciminto\n\n");
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();
      }
      break;
    case 3 :
      if(xdia <= xfecha) {
        imp = (ximporte * 2.5) / 100;
        total_importe = ximporte - imp;

        printf("\nSucursal: Zona Este");
        printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();
        }else {
          printf("\nFecha de pago mayor a la fecha de venciminto\n\n");
          printf("Pulse cualquier tecla para cerrar el programa. ");
          getch();
        }
      break;
    case 4 :
      if(xdia <= xfecha) {
        imp = (ximporte * 2.5) / 100;
        total_importe = ximporte - imp;

        printf("\nSucursal: Zona Oeste");
        printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();
        }else {
          printf("\nFecha de pago mayor a la fecha de venciminto\n\n");
          printf("Pulse cualquier tecla para cerrar el programa. ");
          getch();
        }
      break;
    case 5 :
      if(xdia > xfecha) {
        imp = (ximporte * 1.5) / 100;
        total_importe = ximporte + imp;

        printf("\nSucursal: Zona Sur");
        printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();
      }else {
        printf("\nFecha de pago inferior a fecha de venciminto\n\n");
        printf("Pulse cualquier tecla para cerrar el programa. ");
        getch();
      }
    break;
  default :
    printf("\nNumero de sucursal incorrecto\n\n");
    printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();
  }
}

int main() {
  int numeroSucursal, fechaVencimiento, diaPago;
  float importe;

  printf("\n\t-- CARGA DE DATOS --\n");

  printf("\nNumero de sucursal (entre 1 y 5): ");
  scanf("%d", &numeroSucursal);

  printf("\nImporte a pagr: $");
  scanf("%f", &importe);

  printf("\nFecha de venciminto: ");
  scanf("%d", &fechaVencimiento);

  printf("\nDia de pago: ");
  scanf("%d", &diaPago);
  system("cls");

  sucursal (numeroSucursal, fechaVencimiento, diaPago, importe);
}
