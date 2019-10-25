/*
 ============================================================================
 Name        : Clase24del10ARCHIVOS2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"

int main(void) {

	 sCliente* listaClientes[1000];
	 int posicion = 0;

	 FILE *pFile;
	 int r;
	 char var1[50],var3[50],var2[50],var4[50],var5[50];

	 pFile = fopen("archivo.txt","r");
	 if(pFile == NULL)
	 {
		 printf("El archivo no existe");
		 exit(EXIT_FAILURE);
	 }

	 do
	 {
		 r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5);
		 if(r==5)
		 {
			 int id = atoi(var1);
			 printf("Lei: %s %s %s %s %s\n",var1,var2,var3,var4,var5);
			 sCliente* pc = new_clienteParametros(var2,var4,var5,var3,id,1);
			 if(pc!=NULL)
			 {
				 listaClientes[posicion]=pc;
				 posicion++;
				 if(posicion>=1000)
				 {
					 break;
				 }
			 }
		 }
		 else
		 break;
	 }while(!feof(pFile));

	 fclose(pFile);
	 exit(EXIT_SUCCESS);
}
