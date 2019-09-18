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


#define QTY_EMPLEADOS 10
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1


int main(void)
{
	struct sEmpleado aEmpleados[QTY_EMPLEADOS];
	struct sEmpleado auxEmpleado = {4,STATUS_NOT_EMPTY,"Juan","Perez"};
	struct sEmpleado auxEmpleadoDos = {15,STATUS_NOT_EMPTY,"Aas","qweq"};

	printf("\n\t--PRUEBO INIT--\n\n");
	initLugarLibreEmpleado(aEmpleados, QTY_EMPLEADOS);
	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);

	//PRUEBO INIT

	printf("\n\t--PRUEBO FORZARALTA--\n\n");
	altaForzadaEmpleados(aEmpleados,QTY_EMPLEADOS);
	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);

	//PRUEBO ALTA FORZADA

	printf("\n\t--PRUEBO BUSCARLUGARLIBRE--\n\n");
	int numero = buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);
	printf("%d",numero);
	aEmpleados[0].status=1;
	numero = buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);
	printf("\n%d",numero);

	//PRUEBO BUSCARLUGARLIBRE

	printf("\n\t--PRUEBO ALTA--\n\n");
	altaEmpleadoPorId(aEmpleados,QTY_EMPLEADOS,auxEmpleado);
	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);


	//PRUEBO ALTA
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
