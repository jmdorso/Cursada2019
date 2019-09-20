/*
 * pantalla.c
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "pantalla.h"

int initLugarLibrePantalla(Pantalla *aArray, int cantidad)
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

int imprimirArrayPantallas(Pantalla *aArray, int cantidad)
{
	int i;
	int retorno = -1;
	if(aArray != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			printf("Status: %d\tId: %d\tNombre: %s\tDireccion: %s\tPrecio: %.2f\tTipo: %d\n",
			aArray[i].status,aArray[i].idPantalla,aArray[i].nombre,aArray[i].direccion,aArray[i].precio,aArray[i].tipo);
		}
	}
	return retorno;
}

int buscarLugarLibrePantalla(Pantalla *aArray, int cantidad)
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

int altaForzadaPantallas(Pantalla *aArray,int cantidad)
{
	int id[]={1,5,6,7,8};
	char nombre[][25] = {"Juan","Pedro","Maria","Abraham","Eva"};
	char direccion[][25] = {"Gomez","Perez","Lopez","Rodriguez","Peron"};
	float precio[]={20000.56,17000,26850,35200,15687};
	int tipo[]={1,1,2,2,1};

	int i;

	for(i=0;i<5;i++)
	{
		aArray[i].status = STATUS_NOT_EMPTY;
		aArray[i].idPantalla = id[i];
		strncpy(aArray[i].nombre,nombre[i],25);
		strncpy(aArray[i].direccion,direccion[i],25);
		aArray[i].precio = precio[i];
		aArray[i].tipo = tipo[i];
	}
	return 1;
}

int buscarPantallaPorId(Pantalla *aArray, int cantidad,int id)
{
	int retorno = -1;
	int i;

	if(aArray != NULL && cantidad >0 && id >= 0)
	{
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == 1)
			{
				if(aArray[i].idPantalla == id)
				{
				retorno = i;
				break;
				}
			}

		}
	}
	return retorno;
}

int altaPantallaPorId(Pantalla *aArray, int cantidad,Pantalla pantalla)
{
	int retorno = -1;
	int indice;
	int i;

	if(aArray != NULL && cantidad >0)
	{
		indice = buscarLugarLibrePantalla(aArray,cantidad);
		if(indice != -1 && buscarPantallaPorId(aArray,cantidad,pantalla.idPantalla) == -1)
			{
				pantalla.status=STATUS_NOT_EMPTY;
				pantalla.idPantalla=generarId();
				aArray[indice] = pantalla;
				retorno = 0;
			}
	}
	return retorno;
}

int imprimirArrayPantallasStatusOk(Pantalla *aArray, int cantidad)
{
	int i;
	int retorno = -1;
	if(aArray != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status==1)
			{
				printf("Status: %d\tId: %d\tNombre: %s\tDireccion: %s\tPrecio: %.2f\tTipo: %d\n",
				aArray[i].status,aArray[i].idPantalla,aArray[i].nombre,aArray[i].direccion,aArray[i].precio,aArray[i].tipo);
			}
			else
			{
				break;
			}
		}
	}
	return retorno;
}

int bajaPantallaPorId(Pantalla *aArray, int cantidad,int id)
{
	int i;
	int retorno = -1;
	int indice;
	if(aArray != NULL && cantidad>0 && id>=0)
	{
		indice = buscarPantallaPorId(aArray,cantidad,id);
		if(indice >= 0)
		{

		}
	}
}

/*int imprimoUnaPantalla(Pantalla pantalla)
{
	printf("La Pantalla con ID %d es:\n\n"
			"ID: %d\n"
			"Nombre: %s"
			"\nDireccion: %s"
			"\nPrecio: $%.2f"
			"\nTipo: %d"
			,idBusca
			,aPantallas[id].idPantalla
			,aPantallas[id].nombre
			,aPantallas[id].direccion
			,aPantallas[id].precio
			,aPantallas[id].tipo);
}*/


static int generarId(void)
{
	static int idIncremental=0;
	idIncremental++;

	return idIncremental;

}
