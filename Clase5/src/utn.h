#define EXIT_ERROR -1

int getInt(	int *entero,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);

int getFloat(	float *flotante,
				char *mensaje,
				char *mensajeError,
				float minimo,
				float maximo,
				int reintentos);

int getChar(char *letra,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);
