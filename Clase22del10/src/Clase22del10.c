/*
 ============================================================================
 Name        : Clase22del10.c
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
#include "cliente.h"
#include "utn.h"

int main(void) {

	sCliente *pCliente = new_clienteParametros("IBM","CABA","9 DE JULIO","235654897",1,1);
	printf("%s %s %s %s %d %d",pCliente->nombre,pCliente->localidad,pCliente->direccion,pCliente->cuit,pCliente->id,pCliente->status);

	return EXIT_SUCCESS;
}
