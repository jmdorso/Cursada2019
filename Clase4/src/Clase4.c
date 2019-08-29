/*
 ============================================================================
 Name        : Clase4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EXIT_ERROR -1

int main(void)
{
	int edad;
	float peso;
	char inicial;
	if(	getInt(&edad,"Edad?\n","Error\n",0,150,3)==0 &&
		getFloat(&peso,"Peso?\n","Error\n",0,350,3)==0 &&
		getChar(&inicial,"Inicial del nombre?\n","Error\n",'A','Z',3)==0)
	{
		printf("\n\tLa edad es: %d",edad);
		printf("\n\tEl peso es: %.2f Kg", peso);
		printf("\n\tSu inicial es: %c", inicial);
	}
	return EXIT_SUCCESS;
}

