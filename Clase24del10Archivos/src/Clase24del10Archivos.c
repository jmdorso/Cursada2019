/*
 ============================================================================
 Name        : Clase24del10Archivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* fp /*= fopen("archivo.txt","w")*/;
	/*if(fp!=NULL)
	{
		printf("Abri archivo\n");

		int i=4569784;
		//fwrite(&i,sizeof(int),1,fp);//binarios
		fprintf(fp,"%d",i);//texto
		fclose(fp);
	}*/
	fp = fopen("archivo.txt","r");
	if(fp!=NULL)
	{
		//fread(&i,sizeof(int),1,fp);

		int i;
		int r;
		//int j;
		char j[64];
		int k;
		int l;
		do{

			//fscanf(fp,"%d,%d,%d,%d\n",&i,&j,&k,&l);//caundo es entero
			r = fscanf(fp,"%d,%[^,],%d,%d\n",&i,j,&k,&l);//[^,] indica que usa todo menos la coma
			//printf("Lei: %d %d %d %d\n",i,j,k,l);//cuando es entero
			if(r==4)
			{
				printf("Lei: %d %s %d %d\n",i,j,k,l);
			}

		}while(!feof(fp));
		fclose(fp);
	}

	return EXIT_SUCCESS;
}
