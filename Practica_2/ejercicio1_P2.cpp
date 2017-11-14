#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	int x;
	printf("este programa resulve la ecuacion \n");
	printf("\n         { x^2-x para x<=0 ");
	printf("\n    f(x)=<  ");
	printf("\n         { 3*x-x^2 para x>0\n");
	printf("\ningrese el valo de x ");
	scanf("%d",&x);
	if (x<=0)
	{
		printf("\nf(x)=%d",x*x-x);
	}
	else if(x>0)
	{
		printf("\nf(x)=%d",3*x-x*x);
	}
	getch();
}
