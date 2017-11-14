/*	programado por joseph jafet rizo puente
/*	del grupo 1MV2 el semestre agosto-diciembre del 2017*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
int main() 
{
	system("color 71");
	
	int const t[2]={50,60},m[2]={60,70},p[2]={70,90},c[2]={55,80};
	int o,hr;
	char ca;
	while(o!=4)
	{
	hr=1;
	system("cls");
	printf("------------------------------------------------------------------\n");
	printf("          Este programa tiene como motivo el monitoreo de   \n");
	printf("       un invernadero con las siguientes opciones de cultivo\n\n");
	printf("      1. tomate con una humedad relativa de %d a %d porciento\n",t[0],t[1]);
	printf("      2. melon  con una humedad relativa de %d a %d porciento\n",m[0],m[1]);
	printf("      3. pepino con una humedad relativa de %d a %d porciento\n",p[0],p[1]);
	printf("      4. salir del programa, introdusca 4 mas una letra cualquiera \n\n");
	printf("     se tiene una verdura de cultivo optativo que es sumativa \n");
	printf("      a la primera opcion escogida esta es la calabacita con \n          una humedad relativa de %d a %d porciento\n",c[0],c[1]);
	printf("------------------------------------------------------------------\n");
	printf("      introdusca entre las tres opciones de cultivo tecleando\n     solo una opcion de cultivo y en caso de sumar al cultivo\n  calabacitas introdusca la letra 'c' despues del numero escogido\n    en el caso de no querer calabacitas introdusca la letra 's'\n\t\t\t\t");
	scanf("%d %c",&o,&ca);
	while (0<o && o<4)
	{
		printf("          introdusca la humedad relativa del invernadero\n     si quiere salir de esta opcion introdusca un numero negativo\n\t\t\t\t");
		scanf("%d",&hr);
		if (hr>0)
		{
		switch (o)
		{
			case 1: 
				if(ca!='c')
				{
					while(hr<t[0])
					{
						printf("se riega el invernadero por tres segundos y la HR pasa de ser %d a %d\n",hr,hr+4);
						hr=hr+4;
						Sleep(1000);
					}
					while(hr>t[1])
					{
						printf("se abren ventilas del invernadero por cinco segundos y la HR pasa de ser %d a %d\n",hr,hr-3);
						hr=hr-3;
						Sleep(1000);
					}
				}
				if(ca=='c')
				{
					while(hr<t[0] || hr<c[0])
					{
						printf("se riega el invernadero por tres segundos y la HR pasa de ser %d a %d\n",hr,hr+4);
						hr=hr+4;
						Sleep(1000);
					}
					while(hr>t[1] || hr>c[1])
					{
						printf("se abren ventilas del invernadero por cinco segundos y la HR pasa de ser %d a %d\n",hr,hr-3);
						hr=hr-3;
						Sleep(1000);
					}
				}
			break;
			case 2: 
				if(ca!='c')
				{
					while(hr<m[0])
					{
						printf("se riega el invernadero por tres segundos y la HR pasa de ser %d a %d\n",hr,hr+4);
						hr=hr+4;
						Sleep(1000);
					}
					while(hr>m[1])
					{
						printf("se abren ventilas del invernadero por cinco segundos y la HR pasa de ser %d a %d\n",hr,hr-3);
						hr=hr-3;
						Sleep(1000);
					}
				}
				if(ca=='c')
				{
					while(hr<m[0] || hr<c[0])
					{
						printf("se riega el invernadero por tres segundos y la HR pasa de ser %d a %d\n",hr,hr+4);
						hr=hr+4;
						Sleep(1000);
					}
					while(hr>m[1] || hr>c[1])
					{
						printf("se abren ventilas del invernadero por cinco segundos y la HR pasa de ser %d a %d\n",hr,hr-3);
						hr=hr-3;
						Sleep(1000);
					}
				}
			break;
			case 3: 
				if(ca!='c')
				{
					while(hr<p[0])
					{
						printf("se riega el invernadero por tres segundos y la HR pasa de ser %d a %d\n",hr,hr+4);
						hr=hr+4;
						Sleep(1000);
					}
					while(hr>p[1])
					{
						printf("se abren ventilas del invernadero por cinco segundos y la HR pasa de ser %d a %d\n",hr,hr-3);
						hr=hr-3;
						Sleep(1000);
					}
				}
				if(ca=='c')
				{
					while(hr<p[0] || hr<c[0])
					{
						printf("se riega el invernadero por tres segundos y la HR pasa de ser %d a %d\n",hr,hr+4);
						hr=hr+4;
						Sleep(1000);
					}
					while(hr>p[1] || hr>c[1])
					{
						printf("se abren ventilas del invernadero por cinco segundos y la HR pasa de ser %d a %d\n",hr,hr-3);
						hr=hr-3;
						Sleep(1000);
					}
				}
			break;
			case 0:
			break;
			default: printf("\nintroduca uno de los valores mostrados en el menu\n");
		}
		}
		else {
			o=5;
		}
		printf("\npasan 10 segundos a causa de inactividad se tiene que ingresar de nuevo la HR\n");
		Sleep(3000);
	}
	}
}
