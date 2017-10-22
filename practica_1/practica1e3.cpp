#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main() 
{
	system("color 71");
    int r,h;
    float g,v,a;
    const float pi=3.1416;
    printf("este programa calcula el valor del volumen y area de un cono \ncon los valores de radio y altura");
    printf("\ningrese la altura  ");
    scanf("%d",&h);
    printf("\ningrese el radio   ");
    scanf("%d",&r);
    g=sqrt(r*r+h*h);
    a=pi*r*g+pi*r*r;
	v=0.333333*pi*r*r*h;
	printf("\nel area es %f",a);
    printf("\nel volumen es %f",v);
    getch();
}
