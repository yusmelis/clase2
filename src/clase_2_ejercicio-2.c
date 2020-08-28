/*
 ============================================================================
 Name        : clase_2_ejercicio-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Solicitar al usuario que ingrese una serie de números
 la cual finaliza al introducir el 999 (el 999 no debe
 ser tenido en cuenta para dicho cálculo). Una vez finalizado
  el ingreso de números el programa deberá mostrar el promedio
   de dichos números por pantalla.


 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(void) {

	int numero;
	int acumulador = 0;
	int contador = 0;
	float promedio;

	while(1)
	{

		printf("igrese un numero");
		__fpurge(stdin);
		scanf("%d",&numero);
		if(numero != 999)
		{
			acumulador = acumulador + numero;
			contador++;
		}
		else
		{
			break;
		}
	}
	promedio = (float)acumulador/contador;

	printf(" el promedio es %.2f", promedio);
	return EXIT_SUCCESS;

}




