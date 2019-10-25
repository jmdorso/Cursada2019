/*
 * cliente.h
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct
{
	int id;
	int status;
	//***************
	char nombre[51];
	char direccion[51];
	char cuit[51];
	char localidad[51];

}sCliente;

sCliente* new_cliente();
void delete_cliente(sCliente *this);
sCliente* new_clienteParametros(char *nombre,char *localidad,char *direccion,char *cuit,int id,int status);

int cli_setNombre(sCliente *this,char *nombre);
int cli_getNombre(sCliente *this,char *nombre);
static int isValidNombre(char *nombre);

int cli_setDireccion(sCliente *this,char *direccion);
int cli_getDireccion(sCliente *this,char *direccion);
static int isValidDireccion(char *direccion);

int cli_setLocalidad(sCliente *this,char *localidad);
int cli_getLocalidad(sCliente *this,char *localidad);
static int isValidLocalidad(char *localidad);

int cli_setCuit(sCliente *this,char *cuit);
int cli_getCuit(sCliente *this,char *cuit);
static int isValidCuit(char *cuit);

int cli_setId(sCliente *this,int id);
int cli_getId(sCliente *this,int *id);
static int isValidId(int *id);

int cli_setIdString(sCliente *this,char *id);
int cli_getIdString(sCliente *this,char *id);
static int isValidIdString(char *id);

#endif /* CLIENTE_H_ */
