#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	float prom,v,sum;
	printf("este programa da el promedio de 5 calificaciones obteniadas\n");
	for(int i=0; i<5 ; i++)
	{
		printf("\ningrese el valor de la calificacion %d = ",i+1);
		scanf("%f",&v);
		sum+=v;
	}
	prom=sum/5;
	printf("el promedio es = %0.2f",prom);
	getch();
}
