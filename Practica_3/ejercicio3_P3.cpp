#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	system("color 70");
	int C[12],A[10][12]={
		{90,90,40,60,20,80,10,10,30,70,50,25},
		{100,80,50,10,60,40,100,40,80,70,100,56},
		{70,90,60,20 ,80 ,50 ,20 ,60 ,30 ,70 ,110 ,60},
		{50, 60, 50, 30, 20, 80, 50, 40, 20, 70, 200, 70},
		{90, 90, 60, 40, 80, 70, 60, 40, 30 ,50 ,10, 40},
		{40, 10, 50, 40, 30, 90, 30, 80, 80, 60, 90, 86},
		{100, 40, 20, 50, 10, 100, 90, 80, 100, 70, 130, 120},
		{70, 10, 90, 70, 50, 30, 70, 60, 20, 50, 40, 89},
		{40, 30, 40, 70, 10, 100, 20, 20, 70, 20, 90, 66},
		{10, 60, 100, 50 ,60, 40, 50, 100 ,90 ,20 ,15 ,30}
	};
	char E[10][20]= {"Sonora", "Aguascalientes", "Oaxaca", "Colima","Chihuahua", "San Luis Potosi","Durango","Veracruz","Yucatan","Tabasco"};
	char M[12][20]= {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int aux,i,j,a=0,b=0,c=0,mayore=0,menore=0;
	
	printf("esta ordenado por mes empezando desde enero y los estados son respectivamente:\n");
	for(i=0;i<10;i++)
	{
		printf(" ------------------------------------\n");
		for(j=0;j<20;j++)
		{
			printf("%c",E[i][j]);
		}
		printf("|\n");
	}
	for(i=0;i<10;i++)
	{
		a=0;
		printf(" ------------------------------------\n");
		for(j=0;j<12;j++)
		{
			printf("| %d ",A[i][j]);
			a=a+A[i][j];
		}
		if (a>b) 
		{
			b=a;
			mayore=i;
		}
		if (a<c) 
		{
			c=a;
			menore=i;
		}
		printf("|\n");
	}
	
	
	printf("el estado con mayor presipitacion fue: ");
	for(j=0;j<20;j++)
	{
		printf("%c",E[mayore][j]);
	}
	printf("\nel estado con menor presipitacion fue: ");
	for(j=0;j<20;j++)
	{
		printf("%c",E[menore][j]);
	}
	printf("\nlos meses con mayor precipitacion en el estado de aguascalientes fueron:\n");
	for (j=0;j<12;j++) C[j]=A[1][j];
	for(j=0;j<12;j++)
	{
		for(i=0;i<11;i++)
		{
			if(C[i]<C[i+1])
			{
				aux=C[i];
				C[i]=C[i+1];
				C[i+1]=aux;
			}
		}
	}
	for (j=0;j<12;j++)
	{
		if(C[0]==A[1][j])
		{
			for(i=0;i<20;i++)
			{
				printf("%c",M[j][i]);
			}
			printf(",\n");
		}
	}
	
	
	system("pause");
}
