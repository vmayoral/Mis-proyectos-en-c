#include<stdio.h>
#include<string.h>

int main()
{
	char cadena[100];
	char *p;
	int espacios= 0, letras = 0, numeros= 0;
	int longitud_cadena, i;

	printf("Introduzca numero/palabra:%s", cadena);

	gets(cadena);
	longitud_cadena = strlen(cadena);

	for (i=0; i<longitud_cadena; i++){
		// Funciones sacadas de poner "man 3 isdigit" en la línea de comandos
		printf("caracter %c\n", cadena[i]);
		if (isdigit(cadena[i])){
			printf("número\n");
			numeros++;
		} else if (isspace(cadena[i])){
			printf("espacio\n");
			espacios++;
		} else {
			printf("letra\n");
			letras++;
		}
	}

	printf("La cadena introducida es %s\n", cadena);
	printf("  Número de espacios: %d\n", letras);
	printf("  Número de letras: %d\n", letras);
	printf("  Número de dígitos: %d\n", numeros);
	printf("La longitud total de la cadena es %d\n", longitud_cadena);
	return 0;
}
