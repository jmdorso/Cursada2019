/*
 ============================================================================
 Name        : Clase_08.c
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
#include "Empleado.h"


#define QTY_EMPLEADOS 3
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1


int main(void)
{

	struct sEmpleado aEmpleados[QTY_EMPLEADOS];
	initLugarLibreEmpleado(aEmpleados, QTY_EMPLEADOS);
	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);
	int numero = buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);
	printf("%d",numero);
	aEmpleados[0].status=1;
	numero = buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);
	printf("%d",numero);

/*
	struct sEmpleado bEmpleado;
	int i;
	int idEmpleado = 0;

	for(i=0;i<3;i++){

		getString(bEmpleado.nombre,"Ingrese el nombre",
				"ERROR", 1, 49, 2);

		getString(bEmpleado.apellido,"Ingrese el apellido",
						"ERROR", 1, 49, 2);

		bEmpleado.idEmpleado = idEmpleado;
		idEmpleado++;
		bEmpleado.status = STATUS_NOT_EMPTY;

		aEmpleados[i] = bEmpleado;
	}
	imprimirArrayEmpleados(aEmpleados,3);
*/
	return EXIT_SUCCESS;
}
