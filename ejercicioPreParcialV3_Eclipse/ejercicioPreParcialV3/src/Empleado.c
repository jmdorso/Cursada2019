/*    Luego, debera calcular el campo "sueldo" de cada uno de los empleados leidos, segun la horas que trabajaron, con el
    siguiente criterio:
    Los valores de horas varian entre 80 y 240.
    - Las primeras 120 horas la hora vale $180
    - De 120 a 160 horas, la hora vale $240
    - De 160 a 240 horas, la hora vale $350*/

#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>

static int isValidId(int *id);
static int isValidIdString(char *id);
static int isValidNombre(char *nombre);
static int isValidHorasTrabajadas(int *horasTrabajadas);
static int isValidHorasTrabajadasString(char *horasTrabajadas);


void em_calcularSueldo(void* p)
{
	if(p != NULL)
	{
		if(((Empleado*)p)->horasTrabajadas > 0 && ((Empleado*)p)->horasTrabajadas <= 120)
		{
			((Empleado*)p)->sueldo = 180 * ((Empleado*)p)->horasTrabajadas;
		}
		if(((Empleado*)p)->horasTrabajadas > 120 && ((Empleado*)p)->horasTrabajadas <= 160)
		{
			((Empleado*)p)->sueldo = 240 * ((Empleado*)p)->horasTrabajadas;
		}
		if(((Empleado*)p)->horasTrabajadas > 160 && ((Empleado*)p)->horasTrabajadas <= 240)
		{
			((Empleado*)p)->sueldo = 350 * ((Empleado*)p)->horasTrabajadas;
		}
	}
	// recibo elemento empleado como void.
	// hacer calculo de sueldo y escribirlo en campo sueldo del empleado
}

int em_filtrarListaPorSueldo(void* p)
{
	int retorno = -1;

	if(p != NULL)
	{
		if(((Empleado*)p)->sueldo >= 20000)
		{
			retorno = 1;
		}
		else
		{
			retorno = 0;
		}
	}

	return retorno;
}

int em_reduceListaPorId(void* p)
{
	int retorno = -1;

	if(p != NULL)
	{
		if(((Empleado*)p)->id > 50)
		{
			retorno = 1;
		}
		else
		{
			retorno = 0;
		}
	}

	return retorno;
}

Empleado* employee_new()
{
	return malloc(sizeof(Empleado));
}

void employee_delete(Empleado *this)
{
	free(this);
}

int employee_setId(Empleado* this,int id)
{
	int retorno = -1;

	if(this != NULL && isValidId(&id) == EXIT_SUCCESS)
	{
		this->id=id;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_getId(Empleado* this,int* id)
{
	int retorno = -1;

	if(this != NULL && id != NULL)
	{
		*id=this->id;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

static int isValidId(int *id)
{
	int retorno = -1;

	if(id != NULL)
	{
		if(id > 0)
		{
			retorno = EXIT_SUCCESS;
		}
	}
	return retorno;
}

int employee_setIdString(Empleado *this,char *id)
{
	int retorno = -1;

	if(this != NULL && isValidIdString(id)==EXIT_SUCCESS)
	{
		this->id=atoi(id);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

static int isValidIdString(char *id)
{
	int retorno = -1;

	if(id != NULL)
	{
		//if(esSoloNumerosPositivos(id,"\nERROR"))
		//{
			retorno = EXIT_SUCCESS;
		//}
	}

	return retorno;
}

int employee_setNombre(Empleado *this,char *nombre)
{
	int retorno = -1;

	if(this != NULL && isValidNombre(nombre)==EXIT_SUCCESS)
	{
		strcpy(this->nombre,nombre);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_getNombre(Empleado *this,char *nombre)
{
	int retorno = -1;

	if(this != NULL && nombre != NULL)
	{
		strcpy(nombre,this->nombre);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

static int isValidNombre(char *nombre)
{
	int retorno = -1;

	if(nombre != NULL)
	{
		//esNombreOApellido(nombre,"\nERROR");
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_setHorasTrabajadas(Empleado* this,int horasTrabajadas)
{
	int retorno = -1;

	if(this != NULL && isValidHorasTrabajadas(&horasTrabajadas) == EXIT_SUCCESS)
	{
		this->horasTrabajadas=horasTrabajadas;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_getHorasTrabajadas(Empleado* this,int* horasTrabajadas)
{
	int retorno = -1;

	if(this != NULL && horasTrabajadas != NULL)
	{
		*horasTrabajadas=this->horasTrabajadas;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

static int isValidHorasTrabajadas(int *horasTrabajadas)
{
	int retorno = -1;

	if(horasTrabajadas != NULL)
	{
		if(horasTrabajadas >= 0)
		{
			retorno = EXIT_SUCCESS;
		}
	}
	return retorno;
}

int employee_setHorasTrabajadasString(Empleado *this,char *horasTrabajadas)
{
	int retorno = -1;

	if(this != NULL && isValidHorasTrabajadasString(horasTrabajadas)==EXIT_SUCCESS)
	{
		this->horasTrabajadas=atoi(horasTrabajadas);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

static int isValidHorasTrabajadasString(char *horasTrabajadas)
{
	int retorno = -1;

	if(horasTrabajadas != NULL)
	{
		//if(esSoloNumerosPositivos(horasTrabajadas,"\nERROR"))
		//{
			retorno = EXIT_SUCCESS;
			//}
	}

	return retorno;
}
