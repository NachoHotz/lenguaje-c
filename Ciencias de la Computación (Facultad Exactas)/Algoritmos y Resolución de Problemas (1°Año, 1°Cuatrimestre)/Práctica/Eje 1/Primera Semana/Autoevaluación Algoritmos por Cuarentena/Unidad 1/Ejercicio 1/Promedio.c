#include <stdio.h>
#include <conio.h>

int main()
{
    float num1, num2, prom;

    printf("Ingresar primer numero: ");
    scanf("%f", &num1);

    printf("\nIngresar segundo numero: ");
    scanf ("%f", &num2);

    prom = (num1 + num2) / 2;

    printf("\nEl promedio es: %.2f\n\n", prom);
    
    printf("Pulse cualquier tecla para cerrar el programa. ");
    getch();

    return 0;
}
