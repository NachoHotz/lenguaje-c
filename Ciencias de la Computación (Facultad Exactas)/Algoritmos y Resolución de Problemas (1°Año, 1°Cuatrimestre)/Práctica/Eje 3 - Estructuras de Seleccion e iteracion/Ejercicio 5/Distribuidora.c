#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void sucursal (int xnum, int xfecha, int xdia, float ximporte) {
  float total_importe, imp;

  printf("\n\t-- RESULTADOS --\n");

  switch(xnum) {
    case 1 : if(xdia <= xfecha) {
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

    case 2 : if(xdia > xfecha) {
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

        case 3 : if(xdia <= xfecha)
                {
                    imp = (ximporte * 2.5) / 100;

                    total_importe = ximporte - imp;

                    printf("\nSucursal: Zona Este");

                    printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
                    printf("Pulse cualquier tecla para cerrar el programa. ");
                    getch();

                }else

                {
                    printf("\nFecha de pago mayor a la fecha de venciminto\n\n");
                    printf("Pulse cualquier tecla para cerrar el programa. ");
                    getch();
                }

                break;  

        case 4 : if(xdia <= xfecha)
                {
                    imp = (ximporte * 2.5) / 100;

                    total_importe = ximporte - imp;

                    printf("\nSucursal: Zona Oeste");

                    printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
                    printf("Pulse cualquier tecla para cerrar el programa. ");
                    getch();
                    
                }else

                {
                    printf("\nFecha de pago mayor a la fecha de venciminto\n\n");
                    printf("Pulse cualquier tecla para cerrar el programa. ");
                    getch();
                }

                break;

        case 5 : if(xdia > xfecha)
                    {
                        imp = (ximporte * 1.5) / 100;

                        total_importe = ximporte + imp;

                        printf("\nSucursal: Zona Sur");

                        printf("\n\nTotal a pagar: $%.2f\n\n", total_importe);
                        printf("Pulse cualquier tecla para cerrar el programa. ");
                        getch();

                    }else

                    {
                        printf("\nFecha de pago inferior a fecha de venciminto\n\n");
                        printf("Pulse cualquier tecla para cerrar el programa. ");
                        getch();
                    }

                    break;
                    
        default :   printf("\nNumero de sucursal incorrecto\n\n");
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
