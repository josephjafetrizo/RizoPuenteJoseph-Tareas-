#include <stdlib.h>
#include <stdio.h>

const int g=386.22,nodevalvulas=4; 
void imprimetabla(float m[],float ae[],float ca,int c);
float volumende(float a,float b);
float pside(float m,float a);

int main()
{
	system("color 70");
	float carrcil,areacil[nodevalvulas],mas[nodevalvulas];
	int i,j;
	
	printf("este programa le indica la presion adecuada para levantar diferentes masas\n");
	printf("empleando valvulas, segun el area efectiva de la valvula y su carrera.\n");
	for(i=0;i<nodevalvulas;i++)
	{
		fflush(stdin);
		printf("introdusca la masa(libras) del objeto '%d' ",i+1);
		scanf("%f",&mas[i]);
		printf("introdusca el area(inch^2) efectiva de la valvula '%d' ",i+1);
		scanf("%f",&areacil[i]);
	}
	printf("introdusca la carrera(inch) de los cilindros ");
	scanf("%f",&carrcil);
	imprimetabla(mas,areacil,carrcil,nodevalvulas);
	system("pause");
}

void imprimetabla(float m[],float ae[],float ca,int c)
{
	printf("------------------------------------------------------------------------\n");
		printf("| valvula | masa | area efectiva | carrea | volumen de aceite | psi |\n");
	printf("------------------------------------------------------------------------\n");
	for(int i=0;i<c;i++)
	{
		printf("|    %d    |  %.2f  |  %.2f  |  %.2f  |  %.2f  |  %.2f  |\n",i+1,m[i],ae[i],ca,volumende(ae[i],ca),pside(m[i],ae[i]));
	}
}

float volumende(float a,float b)
{
	float c;
	c=a*b;
	return c;
}

float pside(float m,float a)
{
	float c;
	c=(m*g)/a;
	return c;
}
