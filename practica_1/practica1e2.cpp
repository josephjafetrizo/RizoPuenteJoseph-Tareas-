#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main() 
{
	system("color 71");
    int x;
    float pulgadas,yardas;
    printf("este programa convierte el valor en pies que ingrese a \nyardas, pulgdas, centimetros, metros");
    printf("\ningrese el valor a convertir  ");
    scanf("%d",&x);
    pulgadas=x*12;
    yardas=x*0.33;
    printf("\n%d pies es igual a %f yardas",x,yardas);
    printf("\n%d pies es igual a %f pulgadas",x,pulgadas);
    printf("\n%d pies es igual a %f centimetros",x,pulgadas*2.54);
    printf("\n%d pies es igual a %f metros",x,pulgadas*2.54*0.01);
    getch();   
}
