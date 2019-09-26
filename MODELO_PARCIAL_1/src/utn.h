/*
 * utn.h
 *
 *  Created on: 12 sep. 2019
 *      Author: profesor
 */

#ifndef UTN_H_
#define UTN_H_

#define EXIT_ERROR -1


int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int getInt(		int *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int getFloat(	float *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);

int getChar(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);





#endif /* UTN_H_ */
