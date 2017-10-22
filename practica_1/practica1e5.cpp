#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	char ref;
    float n;
	printf("este programa convierte un valor entero de grados celsius a farenheit\no de manera inversa, ingresando primero la tempreatura y despues una 'f' \nen caso de estar en grados farenheit y una 'c' en caso de estar en celsius\n");
	scanf("%f %c",&n,&ref);
	(ref=='c')?printf("%.1f cesius es equivalente a %.1f grados Farenheit\n",n,(((9*n)/5)+32)):((ref=='f')?printf("%.1f Farenheit es equivalente a %.1f grados cesius\n",n,(5*(n-32))/9):printf("usted ingreso un tipo de dato invalido, favor de introdicir los datos de la \nforma indicada anteriormente\n"));
	getch();
}
