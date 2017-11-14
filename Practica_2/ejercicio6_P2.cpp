#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main() 
{
	system("color 71");
	float y,i;
	printf("este programa da el valor de la funcion f(x)=sin(2x)-x\n");
	for( i=1; i<10.5 ; i=i+0.5)
	{
		y=sin(2*i)-i;
		printf("\nel valor de la funcion en x=%.2f es %.2f ",i,y);
	}
	getch();
}
