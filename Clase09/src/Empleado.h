/*
 * Empleado.h
 *
 *  Created on: 17 sep. 2019
 *      Author: profesor
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1
#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

struct sEmpleado
{
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
};
int initLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad);//OK

int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);//OK
int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);//Ok
int imprimirArrayEmpleadosStatusOk(struct sEmpleado *aEmpleado, int cantidad);

int buscarLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad);
int buscarEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id);
int bajaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id);
int modificarEmpleadoPorId(struct sEmpleado *aArray, int cantidad,struct sEmpleado empleado);
int altaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,struct sEmpleado empleado);

int altaForzadaEmpleados(struct sEmpleado *aArray,int cantidad);

#endif /* EMPLEADO_H_ */
