#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main() 
{
	system("color 71");
    int x,y,a,b;
    printf("este programa resuelve una operacion (X+Y)^2 (a-b)\n");
    printf("ingrese el valor X  ");
    scanf("%d",&x);
    printf("\ningrese el valor Y  ");
    scanf("%d",&y);
    printf("\ningrese el valor a  ");
    scanf("%d",&a);
    printf("\ningrese el valor b  ");
    scanf("%d",&b);
    int s1= x+y;
    int res = s1*s1*(a-b);
    printf("\nel valor de la exprecion (%d+%d)^2 (%d-%d) es %d",x,y,a,b,res); 
    getch();
}
