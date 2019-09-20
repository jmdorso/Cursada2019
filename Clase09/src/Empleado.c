/*
 * Empleado.c
 *
 *  Created on: 17 sep. 2019
 *      Author: profesor
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Empleado.h"

int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad){
	int i;
	int retorno = -1;
	struct sEmpleado bEmpleado;
	int fSwap;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aEmpleado[i].nombre,aEmpleado[i+1].nombre,QTY_CARACTERES)>0)
				{
					fSwap = 1;
					bEmpleado = aEmpleado[i];
					aEmpleado[i]=aEmpleado[i+1];
					aEmpleado[i+1]=bEmpleado;
				}
				else if(strncmp(aEmpleado[i].nombre,aEmpleado[i+1].nombre,QTY_CARACTERES)==0)
				{
					if(strncmp(aEmpleado[i].apellido,aEmpleado[i+1].apellido,QTY_CARACTERES)>0)
					{
						fSwap = 1;
						bEmpleado = aEmpleado[i];
						aEmpleado[i]=aEmpleado[i+1];
						aEmpleado[i+1]=bEmpleado;
					}
				}
			}
		}while(fSwap);
	}
	return retorno;
}


int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad){
	int i;
	int retorno = -1;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			printf("Status: %d Id: %d - Nombre: %s - Apellido: %s \n",aEmpleado[i].status,aEmpleado[i].idEmpleado,aEmpleado[i].nombre,aEmpleado[i].apellido);
		}
	}
	return retorno;
}

int initLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad)
{
	int retorno = -1;
	int i;

	if(aArray != NULL && cantidad >0)
	{
		for(i=0;i<cantidad;i++)
		{
			aArray[i].status = STATUS_EMPTY;
		}
	retorno = 0;
	}
	return retorno;
}

int buscarLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad)
{
	int retorno = -1;
	int i;

	if(aArray != NULL && cantidad >0)
	{
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == STATUS_EMPTY)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int altaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,struct sEmpleado empleado)
{
	int retorno = -1;
	int indice;
	int i;

	if(aArray != NULL && cantidad >0)
	{
		indice = buscarLugarLibreEmpleado(aArray,cantidad);
		if(indice != -1 && buscarEmpleadoPorId(aArray,cantidad,empleado.idEmpleado) == -1)
			{
				empleado.status=STATUS_NOT_EMPTY;
				aArray[indice] = empleado;
				retorno = 0;
			}
	}
	return retorno;
}

int altaForzadaEmpleados(struct sEmpleado *aArray,int cantidad)
{
	int id[]={1,5,6,7,8};
	char nombre[][25] = {"Juan","Pedro","Maria","Abraham","Eva"};
	char apellido[][25] = {"Gomez","Perez","Lopez","Rodriguez","Peron"};

	int i;

	for(i=0;i<5;i++)
	{
		aArray[i].status = STATUS_NOT_EMPTY;
		aArray[i].idEmpleado = id[i];
		strncpy(aArray[i].nombre,nombre[i],25);
		strncpy(aArray[i].apellido,apellido[i],25);
	}
	return 1;
}

int buscarEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id)
{
	int retorno = -1;
	int i;

	if(aArray != NULL && cantidad >0 && id >= 0)
	{
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == 1)
			{
				if(aArray[i].idEmpleado == id)
				{
				retorno = i;
				break;
				}
			}

		}
	}
	return retorno;
}

int imprimirArrayEmpleadosStatusOk(struct sEmpleado *aEmpleado, int cantidad)
{
	int i;
	int retorno = -1;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			if(aEmpleado[i].status==1)
			{
				printf("Status: %d Id: %d - Nombre: %s - Apellido: %s \n",aEmpleado[i].status,aEmpleado[i].idEmpleado,aEmpleado[i].nombre,aEmpleado[i].apellido);
			}
			else
			{
				break;
			}
		}
	}
	return retorno;
}
