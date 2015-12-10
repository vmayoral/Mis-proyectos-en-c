#include<stdio.h>
#include<string.h>

int main()
{
	char cadena[100];
	char *p;
	int espacios= 0, letras = 0, numeros= 0;

	p = cadena;

	printf("Introduzca numero/palabra:%s", cadena);
	scanf("%s", &cadena);



	while ( *p != "\0")
	{
		if ( *p == " ") espacios++;
		if ( *p == "abcdefghijklmnñopqrstuvwyzABCDEFGHIJKLMNÑOPKRSTUVWYZ") letras++;
		if (*p == "0123456789") numeros++;
		p++;
	}

	printf ("En la cadena \"%s\" hay:\n", cadena);
	printf ("%i espacios\n", espacios);
	printf ("%i letras\n", letras);
	printf ("%i numeros\n", numeros);
	printf ("La largura de la cadena es:\n" (strlen(cadena));



	return 0;
}
