#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system ("color F0");	
	int ejec=1;
	int i=0,c=0,c1=0,c2=0,verific=0,sumatoria=0;
	int vector[100];
	int mav[100];
	int mev[100];	
	float promedio=0;
	
	printf("ingrese los valores a promediar, \nel programa seguira reciviendo datos mientras no ingrese el numero '0' \nno ingrese caracteres o letras \n");
	while (ejec==1)
	{
		printf("X%d = ",(c+1));
		scanf("%d",& verific);
		fflush( stdin );
		if (verific > 0)
		{
			vector[c] = verific;
			c=c+1; 
            sumatoria=sumatoria + verific;
		}
		else if (verific == 0)
		{
			ejec = 0;
		}
		else
		{
            printf("\ningrese solo datos numericos mayores a cero y si quiere \nterminar de ingresr valores ingrese el valor numerico cero\n");
        }   
            
	}
	
	float fs = sumatoria;
	promedio=(fs/c);
	printf("\nel promedio es %f",promedio);
	
	getch();
	return 0;
}
