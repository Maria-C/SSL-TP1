/*Trabajo Practico No. 1 - Imprimir temperaturas Celsius
*Cordoba, Maria Noelia - K2051
*20150412*/

#include <stdio.h>
#include "stdafx.h"

int main()
{
	float celsius;
	
	printf("Tabla de conversion de grados Celsius a Fahreneit:\n\nCelsius:   Fahrenheit:\n");
	printf("--------------------------\n");
	for (celsius = -17.8; celsius <= 150; celsius += 11.1)
		printf("%6.2f %12.0f\n", celsius, celsius*9.0 / 5.0 + 32);
	
	return 0;
}