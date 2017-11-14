#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	float kwh, con;
	printf("este programa el consumo en $ de KWH que tiene\n");
	printf("introdusca el consumo de KWH que tiene ");
	scanf("%f",&kwh);
	if (kwh<=50 & kwh>0)
	{
		con=kwh*2.288;
	}
	else
	{
		if(kwh<=100 & kwh>0)
		{
			con=(50*2.288)+(kwh-50)*2.762;
		} 
		else 
		{
			if(kwh>0)
			{
			con=(50*2.288)+(50*2.762)+(kwh-100)*3.042;
			} 
			else 
			{
			printf("introdusca un valor valido de favor");
			return 0;
			}
		}
	}
	printf("el monto a pagar es %0.2f$",con+52.84);
	getch();
}
