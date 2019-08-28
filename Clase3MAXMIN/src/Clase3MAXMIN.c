/*
 ============================================================================
 Name        : Clase3MAXMIN.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

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
	for(i=0;i<5;i++)
	{
		printf("Ingrese numero: ");
		scanf("%d", &num);
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
	*promedio=(float)acum/(float)CANTMAXNUMPEDIR;
	*max=maxAux;
	*min=minAux;

	return retorno;
}
