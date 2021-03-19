#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main ()
{
	int dinero_ahorro = 50000, dinero_corriente = 35000, opc, opc2, deposito, deposito2, retiro, retiro2; 
	short clave_tarjeta;
	char letra;
	
	printf ("\tBienvenido al cajero automatico");
	printf ("\n\nIntroduciendo tarjeta de debito");
	
	Sleep (750);
	printf (".");
	
	Sleep (750);
	printf (".");
	
	Sleep (750);
	printf (".");
	
	printf ("\n\nTarjeta introducida: Tarjeta de debito VISA Santander Rio");
	
	Cuentas:
		{
			printf ("\n\n\tCuentas Bancarias");
	
			printf ("\n\n1. Caja de ahorro");
			printf ("\n2. Cuenta corriente");
	
			printf ("\n\nSeleccione la cuenta a abrir: ");
			scanf ("%d", &opc);
		}

	switch (opc)
	{
		case 1:
			Clave1:
				{
					printf ("\nIntroduzca la clave de la Caja de Ahorro (4 digitos): ");
					scanf (" %d", &clave_tarjeta);
				}
				
			printf ("\nIntroduciendo clave");
			
			Sleep (750);
			printf (".");
	
			Sleep (750);
			printf (".");
	
			Sleep (750);
			printf (".");
			
			if (clave_tarjeta >= 1000)
			{
				printf ("\n\nClave valida, abriendo caja de ahorro");
				
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					printf ("\n\nCuenta abierta con exito. Abriendo menu");
					
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					system ("cls");
					goto Caja_ahorro;
					system ("pause");
					return 0;
	
			}else 
			{
				printf ("\n\nLa clave introducida no es valida. Desea reintentar? (y/n): ");
				scanf (" %c", &letra);
				
				if ((letra == 'y') || (letra == 'Y'))
				{
					goto Clave1;
					system ("pause");
					return 0;
					
				}else if ((letra == 'n') || (letra == 'N'))
				{
					system ("cls");
					printf ("\n\tGracias por utilizar este cajero!");
					
					printf ("\n\nRetirando tarjeta de debito");
					
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					return 0;
				}
			}
			
		case 2:
			Clave2:
				{
					printf ("\nIntroduzca la clave de la cuenta corriente (4 digitos): ");
					scanf (" %d", &clave_tarjeta);
				}
			
				printf ("\nIntroduciendo clave");
				
			
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
			
			if (clave_tarjeta >= 1000)
			{
				printf ("\n\nClave valida, abriendo cuenta corriente");
				
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					printf ("\n\nCuenta abierta con exito. Abriendo menu");
					
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					system ("cls");
					goto Cuenta_corriente;
					system ("pause");
					return 0;
	
			}else 
			{
				printf ("\n\nLa clave introducida no es valida. Desea reintentar? (y/n): ");
				scanf (" %c", &letra);
				
				if ((letra == 'y') || (letra == 'Y'))
				{
					goto Clave2;
					system ("pause");
					return 0;
					
				}else if ((letra == 'n') || (letra == 'N'))
				{
					system ("cls");
					printf ("\n\tGracias por utilizar este cajero!");
					
					printf ("\n\nRetirando tarjeta de debito");
					
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					
					return 0;
				}
			}
			
	}
	
	Caja_ahorro:
		{
			printf ("\n\tBienvenido Sr.Hotz");
			printf ("\n\n\tDetalles de la tarjeta");
			{
				printf ("\n\nTipo de tarjeta: Debito");
			}
	
			printf ("\n\n\tDetalles de la cuenta bancaria");
			{
				printf ("\n\nTipo de cuenta: Caja de ahorro");
				printf ("\n\nBanco: Santander Rio");
				printf ("\n\nPropietario: Hotz");
				printf ("\n\nDinero actual en caja de ahorro: %d", dinero_ahorro);
			
				
				Menu1:
					{
						printf ("\n\n\tMenu de opciones - Caja de Ahorro");
						printf ("\n\n1. Depositar en Caja de Ahorro");
						printf ("\n\n2. Retirar dinero de Caja de Ahorro");
						printf ("\n\n3. Consultar saldo en Caja de Ahorro");
						printf ("\n\n4. Abrir otra cuenta");
						printf ("\n\n5. Cerrar cuenta y cajero");
						printf ("\n\nElija la operacion a realizar: ");
						scanf (" %d", &opc);
					}
			
			}
			
			switch (opc)
			{
				case 1:
					system ("cls");
					printf ("\nIngrese el dinero a depositar: ");
					scanf (" %d", &deposito);
					
					printf ("\nDinero a depositar: %d", deposito);
					
					deposito = dinero_ahorro + deposito;
					
					printf ("\n\nDinero en Caja de Ahorro: %d", deposito);
					
					printf ("\n\nDesea realizar otra operacion? (y/n): ");
					scanf (" %c", &letra);
					
					if ((letra == 'y') || (letra == 'Y'))
					{
						printf ("\n\tVolviendo al menu");
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
						system ("cls");
						goto Menu1;
						system ("pause");
						return 0;
					}else if ((letra == 'n') || (letra == 'N'))
					{
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}
					
				case 2:
					system ("cls");
					Retiro:
						{
							printf ("\nIngrese el dinero a retirar: ");
							scanf (" %d", &retiro);
						}
					
					printf ("\nDinero a retirar: %d", retiro);
					
					if (retiro <= dinero_ahorro)
					{
						retiro = dinero_ahorro - retiro;
					
						printf ("\n\nDinero actual en Caja de Ahorro: %d", retiro);
						printf ("\n\nDesea realizar otra operacion? (y/n): ");
						scanf (" %c", &letra);
					
					if ((letra == 'y') || (letra == 'Y'))
					{
						printf ("\n\tVolviendo al menu");
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
						system ("cls");
						goto Menu1;
						system ("pause");
						return 0;
					}else if ((letra == 'n') || (letra == 'N'))
					{
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}
					
					} else if (retiro > dinero_ahorro)
					{
						printf ("\n\nNo cuenta con esta cantidad de dinero. Desea reintentar? (y/n): ");
						scanf (" %c", &letra);
						
						if ((letra == 'y') || (letra == 'Y'))
						{
							system ("cls");
							goto Retiro;
							system ("pause");
							return 0;
							
							
						}else if ((letra == 'n') || (letra == 'N'))
						{
							system ("cls");
							printf ("\n\tGracias por utilizar este cajero!");
							printf ("\n\nCerrando cuenta");
					
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
					
							printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
					
							printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
					
							return 0;
						}
						
					}
						
				case 3:
					system ("cls");
					printf ("\nDinero actual en Caja de Ahorro: %d", dinero_ahorro);
					printf ("\n\nDesea realizar otra operacion? (y/n): ");
					scanf (" %c", &letra);
					
					if ((letra == 'y') || (letra == 'Y'))
					{
						printf ("\n\tVolviendo al menu");
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
						system ("cls");
						goto Menu1;
						system ("pause");
						return 0;
					}else if ((letra == 'n') || (letra == 'N'))
					{
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}
					
				case 4:
					printf ("\n\tVolviendo al menu de cuentas");
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					system ("cls");
					goto Cuentas;
					system ("pause");
					return 0; 	
					
				case 5:
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}			
			}
			
			Cuenta_corriente:
			{
			printf ("\n\tBienvenido Sr.Hotz");
			printf ("\n\n\tDetalles de la tarjeta");
			{
				printf ("\n\nTipo de tarjeta: Debito");
			}
	
			printf ("\n\n\tDetalles de la cuenta bancaria");
			{
				printf ("\n\nTipo de cuenta: Cuenta Corriente");
				printf ("\n\nBanco: Santander Rio");
				printf ("\n\nPropietario: Hotz");
				printf ("\n\nDinero actual en cuenta corriente: %d", dinero_corriente);
				
					Menu2:
					{
						printf ("\n\n\tMenu de opciones - Cuenta Corriente");
						printf ("\n\n1. Depositar en Cuenta Corriente");
						printf ("\n\n2. Retirar dinero de Cuenta Corriente");
						printf ("\n\n3. Consultar saldo en Cuenta Corriente");
						printf ("\n\n4. Abrir otra cuenta");
						printf ("\n\n5. Cerrar cuenta y cajero");
						printf ("\n\nElija la operacion a realizar: ");
						scanf (" %d", &opc2);
					}
			
			}
			
			switch (opc2)
			{
				case 1:
					system ("cls");
					printf ("\nIngrese el dinero a depositar: ");
					scanf (" %d", &deposito2);
					
					printf ("\nDinero a depositar: %d", deposito2);
					
					deposito2 = dinero_corriente + deposito2;
					
					printf ("\n\nDinero actual en Cuenta Corriente: %d", deposito2);
					
					printf ("\n\nDesea realizar otra operacion? (y/n): ");
					scanf (" %c", &letra);
					
					if ((letra == 'y') || (letra == 'Y'))
					{
						printf ("\n\tVolviendo al menu");
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
						system ("cls");
						goto Menu2;
						system ("pause");
						return 0;
						
					}else if ((letra == 'n') || (letra == 'N'))
					{
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}
					
				case 2:
					system ("cls");
					Retiro2:
						{
							printf ("\nIngrese el dinero a retirar: ");
							scanf (" %d", &retiro2);
						}
					
					printf ("\n\nDinero a retirar: %d", retiro2);
					
					if (retiro2 <= dinero_corriente)
					{
						retiro2 = dinero_corriente - retiro2;	
					
					printf ("\n\nDinero actual en Cuenta Corriente: %d", retiro2);
					printf ("\n\nDesea realizar otra operacion? (y/n): ");
					scanf (" %c", &letra);
					
					if ((letra == 'y') || (letra == 'Y'))
					{
						printf ("\n\tVolviendo al menu");
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
						system ("cls");
						goto Menu2;
						system ("pause");
						return 0;
						
					}else if ((letra == 'n') || (letra == 'N'))
					{
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}
					} else
					{
						printf ("\n\nNo cuenta con esta cantidad de dinero. Desea reintentar? (y/n): ");
						scanf (" %c", &letra);
						
						if ((letra == 'y') || (letra == 'Y'))
						{
							system ("cls");
							goto Retiro2;
							system ("pause");
							return 0;
							
							
						}else if ((letra == 'n') || (letra == 'N'))
						{
							system ("cls");
							printf ("\n\tGracias por utilizar este cajero!");
							printf ("\n\nCerrando cuenta");
					
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
					
							printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
					
							printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
	
							Sleep (750);
							printf (".");
					
							return 0;
						}
						
					}
					
				case 3:
					system ("cls");
					printf ("\nDinero actual en Cuenta Corriente: %d", dinero_corriente);
					printf ("\n\nDesea realizar otra operacion? (y/n): ");
					scanf (" %c", &letra);
					
					if ((letra == 'y') || (letra == 'Y'))
					{
						printf ("\n\tVolviendo al menu");
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
						system ("cls");
						goto Menu2;
						system ("pause");
						return 0;
						
					}else if ((letra == 'n') || (letra == 'N'))
					{
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;
					}
					
				case 4:
					printf ("\n\tVolviendo al menu de cuentas");
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
	
					Sleep (750);
					printf (".");
					system ("cls");
					goto Cuentas;
					system ("pause");
					return 0; 	
					
				case 5:
						system ("cls");
						printf ("\n\tGracias por utilizar este cajero!");
						printf ("\n\nCerrando cuenta");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nCuenta cerrada con exito. Retirando tarjeta de debito");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						printf ("\n\nTarjeta retirada con exito. Cerrando cajero");
					
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
	
						Sleep (750);
						printf (".");
					
						return 0;			
			}
		
		}
			
	return 0;
								
}