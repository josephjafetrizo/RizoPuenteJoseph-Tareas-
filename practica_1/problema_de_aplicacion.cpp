#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	const float pi=3.1416,g=9.81,da=1000,dd=820;
	float v,d,h,a,p;
	char liquido;
	printf("este programa calcula el volumen de liquido en un contenedor\n");
	printf("debe ingresar el tipo de liquido del que se trata, el diametro \ndel contenedor y el valor de la presion mostrado en el sensor\n");
	printf("en caso de que el liquido sea diesel coloque una 'd' o  \nen caso de que el liquido sea agua coloque una 'a'\n");
	scanf("%c",&liquido);
	printf("ingrese el diametro del contenedor en metros\n");
	scanf("%f",&d);
	printf("ingrese el valor de la presion que marca el sensor del contenedor en bar\n");
	scanf("%f",&p);
	a=(pi*d*d)/4;
	(liquido=='a')?(h=(p*100)/(da*g)):((liquido=='d')?(h=(p*100)/(dd*g)):printf("no ingreso un liquido valido\n"));
	v=h*a;
	printf("el volumen es de %f metros cubicos de %s\n",v,(liquido=='a')?"agua":((liquido=='d')?"diesel":"\nno ingresaste un valor valido, favor de ingresar un liquido valido\n"));
	getch();
}
