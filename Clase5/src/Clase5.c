/*
 ============================================================================
 Name        : Clase5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
#define QTY_EMPLEADOS 5

int initArrayInt(int array[],int limite,int valor );
int imprimirArrayInt(int array[],int limite);
int getArrayInt(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos);
int maximoArrayInt(int array[],int limite,int *pResultado );
int minimoArrayInt(int array[],int limite,int *pResultado );
int promedioArrayInt(int array[],int limite,float *pResultado );
int maximoPosArrayInt(int array[],int limite,int *pResultado );
int ordenarArrayInt(int array[],int limite);

int main(void) {

	int edadesEmpleados[QTY_EMPLEADOS];
	int cantDatos = getArrayInt(edadesEmpleados,QTY_EMPLEADOS,"Ingrese Edades: \n","Error\n",0,100,2);

	/*if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,5) == 0)
	{
		imprimirArrayInt(edadesEmpleados,QTY_EMPLEADOS);
	}*/
	if(cantDatos > 0)
	{
		printf("Numeros Ingresados:\n\n");
		imprimirArrayInt(edadesEmpleados,cantDatos);
		ordenarArrayInt(edadesEmpleados,cantDatos);
		imprimirArrayInt(edadesEmpleados,cantDatos);
	}


	return EXIT_SUCCESS;
}

int initArrayInt(int array[],int limite,int valor )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			array[i]=valor;
		}

	}
	return retorno;
}

int imprimirArrayInt(int array[],int limite)
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("%d\n", array[i]);
		}
	}
	return retorno;
}

int getArrayInt(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = -1;
	int i=0;
	int buffer;
	char respuesta = 'n';

	if(array != NULL && limite > 0)
	{
		do
		{
			if(getInt(&buffer,mensaje,mensajeError,minimo,maximo,reintentos)==0)
			{
				array[i]=buffer;
				i++;
				limite--;
			}
			printf("Continuar? (s/n)");
			__fpurge(stdin);
			scanf("%c",&respuesta);//PROBAR CON GETCHAR
		}while(respuesta=='s' && limite > 0);
		retorno = i;
	}
	return retorno;
}

int maximoArrayInt(int array[],int limite,int *pResultado )
{
	int i;
	int retorno = -1;
	int maximo;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		maximo = array[0];
		for(i=1;i<limite;i++)
		{
			if(array[i]>maximo)
			{
				maximo = array[i];
			}

		}
		*pResultado = maximo;
	}
	return retorno;
}

int maximoPosArrayInt(int array[],int limite,int *pResultado )
{
	int i;
	int retorno = -1;
	int maximo;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		maximo = 0;
		for(i=1;i<limite;i++)
		{
			if(array[i]>maximo)
			{
				maximo = i;
			}

		}
		*pResultado = maximo;
	}
	return retorno;
}

int ordenarArrayInt(int array[],int limite)
{
	int i;
	int retorno = -1;
	int posmaximo;
	int auxiliar;
	if(array != NULL && limite > 0)
	{
		for(i=1;i<limite;i++)
		{
			maximoPosArrayInt(&array[i],limite-i,&posMaximo);//array+i o &array[i]
			auxiliar=array[i];
			array[i]=array[posMaximo];
			array[posMaximo]=auxiliar;
		}
	}
	return retorno;
}
