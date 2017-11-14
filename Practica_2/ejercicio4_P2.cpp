#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	int t=0,s;
	printf("------------------------------------------------------\n");
	printf("1. hamburguesa chica con papas fritas y refresco $20\n");
	printf("2. hot dog y refresco                            $18\n");
	printf("3. ensalada rusa                                 $15\n");
	printf("------------------------------------------------------\n");
	while(s!=0)
	{
		printf("\nintrodusca el numero del paquete que quiere, el programa seguira \nmientras no intosdusca 0 como respuesta ");
		scanf("%d",&s);
		switch (s)
		{
		case 1: t+=20;
		break;
		case 2: t+=18;
		break;
		case 3: t+=15;
		break;
		case 0: t+=0; 
		break;
		default: printf("\nintroduca uno de los valores mostrados en el menu\n");
		}
	  	
	}
	printf("\nel monto a pagar es %d$",t);
	getch();
}
