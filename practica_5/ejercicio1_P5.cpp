#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char c[100];
	char *palabra;
	printf("Bienvenido, este programa recibe una cadena y la separa \npor palabras,");
	printf(" Por favor introduzca la cadena \n");
	gets(c);
	palabra=strtok(c," ,.-");
	printf("Las palabras son: \n");
  while (palabra != NULL)
  {
    printf ("%s\n",palabra);
    palabra = strtok (NULL, " ,.-");
  }
  system("PAUSE");
}
