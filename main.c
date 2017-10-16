#include <stdio.h>
#include <stdlib.h>

int main() 
{
	system ("color F0");	
	int ejec=1;
	int i=0,c=0,c1=0,c2=0,verific=0,sumatoria=0;
	int vector[100];
	int mav[100];
	int mev[100];	
	float promedio=0;
	
	printf("ingrese los valores a promediar, \nel programa seguira reciviendo datos mientras no ingrese el numero 0 ""\n");
	while (ejec==1)
	{
		printf("X%d = ",(c+1));
		scanf("%d",& verific);
		sumatoria=sumatoria + verific;
		if (verific != 0)
		{
			vector[c] = verific;
			c=c+1;  
		}
		if (verific == 0)
		{
			ejec = 0;
		}
	}
	
	float fs = sumatoria;
	promedio=(fs/c);
	printf("\nel prmedio es %f",promedio);
	
	for (i=0;i<c;i++)
	{
		if (vector[i]>=promedio)
		{
			mav[c1]=vector[i];
			c1++;
		}
		if (vector[i]<promedio)
		{
			mev[c2]=vector[i];
			c2++;
		}
	}
	
	printf("\nlos valores iguales y por encima del promedio son: \n");
	for (i=0;i<c1;i++)
	{
		printf("%d ",mav[i]);
	}
	printf("\nlos valores por debajo del promedio son: \n");
	for (i=0;i<c2;i++)
	{
		printf("%d ",mev[i]);
	}
	
	return 0;
}
