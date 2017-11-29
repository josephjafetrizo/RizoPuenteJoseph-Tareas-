#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char c[100];
	char *fecha;
	printf("Bienvenido, este programa recibe una fecha con formato dd/mm/aa\n y la pasa a formato dd de nombre del mes de aaaa\n");
	printf("Por favor introduzca la cadena \n");
	gets(c);
	fecha=strtok(c,"/");
	printf("La fecha es: \n %s de ",fecha);
	fecha = strtok (NULL,"/");
	int x = atoi(fecha);
	if(x==1)	printf("Enero de");
	if(x==2)	printf("Febrero del");
	if(x==3)	printf("Marzo del");
	if(x==4)	printf("Abril del");
	if(x==5)	printf("Mayo del");
	if(x==6)	printf("Junio del");
	if(x==7)	printf("Julio del");
	if(x==8)	printf("Agosto del");
	if(x==9)	printf("Septiembre del");
	if(x==10)	printf("Octubre del");
	if(x==11)	printf("Noviemre del");
	if(x==12)	printf("Diciembre del");
	fecha = strtok (NULL, "/");
	x=atoi(fecha);
	printf(" 20%d\n",x);
  system("PAUSE");
}
