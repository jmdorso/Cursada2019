/*
 ============================================================================
 Name        : Clase10ModParcial.c
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
#include "pantalla.h"

#define QTY_PANTALLAS 10
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

int main(void)
{
	Pantalla aPantallas[QTY_PANTALLAS];
	Pantalla auxPantalla={18,0,"TvLED","Av. Cordoba 2813",28975.5689,PANTALLA_LED_GIGANTE};
	Pantalla auxPantallaDos={198,0,"TvLCD","Av. Rivadavia 1813",18975.5689,PANTALLA_LCD};
	int id;
	int idBusca;

	printf("\n\t--PRUEBO INIT--\n\n");
	initLugarLibrePantalla(aPantallas,QTY_PANTALLAS);
	imprimirArrayPantallas(aPantallas,QTY_PANTALLAS);
	//PRUEBO INIT

	printf("\n\t--PRUEBO FORZARALTA--\n\n");
	altaForzadaPantallas(aPantallas,QTY_PANTALLAS);
	imprimirArrayPantallas(aPantallas,QTY_PANTALLAS);
	//PRUEBO ALTA FORZADA

	printf("\n\t--PRUEBO BUSCARLUGARLIBRE--\n\n");
	int posMemoria = buscarLugarLibrePantalla(aPantallas,QTY_PANTALLAS);
	printf("Proximo INDICE libre en ARRAY: %d\n",posMemoria);
	//PRUEBO BUSCARLUGARLIBRE

	printf("\n\t--PRUEBO ALTA y IMPRIMO POR STATUS OK--\n\n");
	altaPantallaPorId(aPantallas,QTY_PANTALLAS,auxPantalla);
	altaPantallaPorId(aPantallas,QTY_PANTALLAS,auxPantallaDos);
	altaPantallaPorId(aPantallas,QTY_PANTALLAS,auxPantalla);
	altaPantallaPorId(aPantallas,QTY_PANTALLAS,auxPantallaDos);
	altaPantallaPorId(aPantallas,QTY_PANTALLAS,auxPantalla);
	altaPantallaPorId(aPantallas,QTY_PANTALLAS,auxPantallaDos);
	imprimirArrayPantallasStatusOk(aPantallas,QTY_PANTALLAS);
	//PRUEBO ALTA

	printf("\n\t--PRUEBO BUSCAR POR ID--\n\n");
	idBusca=2;
	id = buscarPantallaPorId(aPantallas,QTY_PANTALLAS,idBusca);
	/*printf("La Pantalla con ID %d es:\n\n"
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
			,aPantallas[id].tipo);*/
	imprimoUnaPantalla(aPantallas[id]);
	//PRUEBO BUSCARxID

	printf("\n\t--PRUEBO BAJA--\n\n");
	bajaPantallaPorId(aPantallas,QTY_PANTALLAS,idBusca);
	imprimirArrayPantallasStatusOk(aPantallas,QTY_PANTALLAS);

	return EXIT_SUCCESS;
}
