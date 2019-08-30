/*
 ============================================================================
 Name        : Clase4MAXMIN.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANTMAXNUMPEDIR 5

int calcularMaxMinPromedio(int *max,int *min,float *promedio,int cantNum);

int main(void)
{
	int max;
	int min;
	float promedio;
	if(calcularMaxMinPromedio(&max,&min,&promedio,CANTMAXNUMPEDIR)==0)
	{
		printf("\n\nMAX: %d, MIN: %d, PROM: %.2f", max, min, promedio);
	}
	else
	{
		printf("Error");
	}

	return 0;
}

int calcularMaxMinPromedio(int *max,int *min,float *promedio,int cantNum)
{
	int retorno=0;
	int i=0;
	int num;
	int acum=0;
	int maxAux;
	int minAux;
	for(i=0;i<CANTMAXNUMPEDIR;i++)
	{
		/*printf("Ingrese numero: ");
		scanf("%d", &num);*/
		if(getInt(&num,"Ingrese Numero: ","Error\n",0,150,1)==0)
		{
			if(i==0)
			{
				maxAux=num;
				minAux=num;
			}
			if(num > maxAux)
			{
				maxAux=num;
			}
			if(num < minAux)
			{
				minAux=num;
			}
			acum=acum+num;
		}
	}
	*promedio=(float)acum/(float)CANTMAXNUMPEDIR;
	*max=maxAux;
	*min=minAux;

	return retorno;
}


