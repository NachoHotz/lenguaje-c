#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float prom;

    printf("Ingresar primer numero; ");
    scanf("%f", &num1);

    printf("Ingresar segundo numero: ");
    scanf ("%f", &num2);

    prom = (num1 + num2) / 2;

    printf("El promedio es: %.2f", prom);

    return 0;
}
