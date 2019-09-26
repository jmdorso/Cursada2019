/*
 * pantalla.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#ifndef PANTALLA_H_
#define PANTALLA_H_

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1
#define PANTALLA_LCD 1
#define PANTALLA_LED_GIGANTE 2

/*struct sPantalla
{
	int idPantalla;
	int status;
	//***************
	char nombre[50];
	char direccion[50];
	float precio;
	int tipo;

};
typedef struct sPantalla Pantalla;*/

typedef struct
{
	int idPantalla;
	int status;
	//***************
	char nombre[50];
	char direccion[50];
	float precio;
	int tipo;

}Pantalla;

int initLugarLibrePantalla(Pantalla *aArray, int cantidad);
int imprimirArrayPantallas(Pantalla *aArray, int cantidad);
int buscarLugarLibrePantalla(Pantalla *aArray, int cantidad);
int altaForzadaPantallas(Pantalla *aArray,int cantidad);
int buscarPantallaPorId(Pantalla *aArray, int cantidad,int id);
int altaPantallaPorId(Pantalla *aArray, int cantidad,Pantalla pantalla);
int imprimirArrayPantallasStatusOk(Pantalla *aArray, int cantidad);
int bajaPantallaPorId(Pantalla *aArray, int cantidad,int id);
int imprimoUnaPantalla(Pantalla pantalla);
int modificarPantallaPorId(Pantalla *aArray, int cantidad,Pantalla pantalla);

static int generarId(void);



#endif /* PANTALLA_H_ */
