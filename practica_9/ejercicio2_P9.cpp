#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
char anguloscodo(int lineas);

int main()
{
	system("color 70");
	struct lecturas
	{
		char fecha[12];
		char hora[8];
		int A_H;
		int A_C;
		int A_M;
	};
	char fechayhora[25];
    int i,j,recorrer;
	FILE *dat;
	while( !kbhit() )
	{
		j=0;	
		dat = fopen("angulos_del_braso.dat","a"); 	
		
		time_t current_time;
	    current_time=time(NULL);
	    strcpy(fechayhora, ctime(&current_time));
		
		lecturas.A_H=rand()%140;
		lecturas.A_C=rand()%180;
		lecturas.A_M=rand()%360;
		
		for (i=4;i<24;i++)
	    { 
			lecturas.fecha[i+1]=' ';		    
	    	lecturas.fecha[j]=fechayhora[i];
	    	if(i==10) i=i+9;
			j++;    	
		}
	    for (i=0;i<8;i++)
	    {
	    	lecturas.hora[i+1]=' ';
	    	lecturas.hora[i]=fechayhora[i+11];
		}
		
		fprintf(dat,"%s\n%s\n%d\n%d\n%d\n",lecturas.fecha,lecturas.hora,lecturas.A_H,lecturas.A_C,lecturas.A_M);
		fclose(dat);
		printf("%s\n%s\n%d\n%d\n%d\n",lecturas.fecha,lecturas.hora,lecturas.A_H,lecturas.A_C,lecturas.A_M);
		
		recorrer=sizeof(lecturas.hora)+sizeof(lecturas.fecha)+sizeof(lecturas.A_H)+4;
		anguloscodo(recorrer);
		Sleep(5000);
		
	}
	
	getch();
}

char anguloscodo(int lineas)
{
	char angulo[5],f[12],h[8];
	
	FILE *archivo;
	FILE *nuevo;
	archivo = fopen("angulos_del_braso.dat","r"); 	
	nuevo = fopen("angulos_de_codo.dat","a");
	
	fseek(archivo, lineas , SEEK_SET );
	fscanf (archivo, "%s", angulo);
	fclose(archivo);
	
	fprintf(nuevo, "\n%s",angulo);
	fclose(nuevo);
}
