#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include "Empleado.h"

int parser_parseEmpleados(char* fileName, LinkedList* listaEmpleados)
{
	int retorno = -1;
	int contVar;
	int flag = 0;
	char id[256];
	char nombre[256];
	char horasTrabajadas[256];
	FILE* pFile;
	Empleado* this;

	pFile = fopen(fileName,"r");

	if(pFile != NULL && listaEmpleados != NULL)
	{
		if(ll_len(listaEmpleados) == 0)
		{
			while(!feof(pFile))
			{
				contVar = fscanf(pFile,"%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas);
				if(flag==0)
				{
					flag=1;
				}
				else if(contVar == 3 && flag == 1)
				{
					printf("%s %s %s \n",id,nombre,horasTrabajadas);
					this = employee_new();
					//this = employee_newParametros(id,nombre,horasTrabajadas,sueldo);
					if(this != NULL)
					{
						employee_setIdString(this, id);
						employee_setNombre(this,nombre);
						employee_setHorasTrabajadasString(this,horasTrabajadas);
						ll_add(listaEmpleados,this);
						//printf("\nCARGA EXITOSA\n");
						retorno = EXIT_SUCCESS;
					}

				}
			}
			if(retorno == EXIT_SUCCESS)
			{
				printf("\nCarga Exitosa. Tamaño linkedList %d\n",ll_len(listaEmpleados));
				retorno=1;
			}
			else
			{
				printf("\nNo se pudo cargar el archivo.\n");
			}
		}
		else
		{
			printf("\nLa Lista ya se encuentra cargada.\n");
		}
	}

	fclose(pFile);

    return retorno;
}


