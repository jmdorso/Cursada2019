/*
 ============================================================================
 Name        : MODELO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "pantallas.h"

#define QTY_PANTALLAS 10
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1
#define QTY_REINTENTOS 2

int main(void) {

	int opcion;
	char seguir = 's';

	do
	{
		printf("\tModelo de Parcial - 2do Cuatrimestre 2017\n\n");
        printf("1. Alta Pantallas\n");
        printf("2. Modificar Pantallas\n");
        printf("3. Baja de Pantallas\n");
        printf("4. Alta Publicidad\n");
        printf("5. Modificar Publicidad\n");
        printf("6. Cancelar Contratacion\n");
        printf("7. Consultar Facturacion\n");
        printf("8. Listar Contrataciones\n");
        printf("9. Listar Pantallas\n");
        printf("10. Informar\n");
        printf("11. Salir\n\n");

        if(getInt(&opcion,"\tIngrese opcion: ","\nError",1,5,QTY_REINTENTOS)==0)
        {

        }

	}while(seguir=='s');


	return EXIT_SUCCESS;
}
