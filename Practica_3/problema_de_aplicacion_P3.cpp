#include <stdlib.h>
#include <stdio.h>

int main()
{
	system("color 70");
	int fo,co,i,j;
	char fila,col;
	printf("ingrese el numero de filas de la matriz de oficinas\n");
	scanf("%d",&fo);
	printf("ingrese el numero de columnas de la matriz de oficinas\n");
	scanf("%d",&co);
	int A[fo][co];
	
	printf("| F-C ");
	for(j=0;j<co;j++)
	{
		printf("|  %c  ",j+65);
	}
	printf("|\n");
	for(i=0;i<fo;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("-------");
		}
		printf("\n");
		
		for(j=-1;j<co;j++)
		{
			if (j==-1) printf("|  %c  ",i+65);
			if (j!=-1)
			{
				A[i][j]=0;
				printf("|  %d  ",A[i][j]);
			}
		}
		printf("|\n");
	
	}
	for(j=0;j<co;j++)
	{
		printf("-------");
	}
	printf("\n");
	
	printf("introdusca la fila de la oficina que esta quemandose\n");
	fflush(stdin);
	scanf("%c",&fila);
	printf("introdusca la columna de la oficina que esta quemandose\n");
	fflush(stdin);
	scanf("%c",&col);
	printf("\n%d %d\n",fila,col);
	
	for (i=-2;i<3;i++)
	{
		for (j=-2;j<3;j++)
		{
			if(fila-65+i>-1 && fila-65+i<fo && col-65+j>-1 && col-65+j<co) A[fila-65+i][col-65+j]++;
		}
	}
	for (i=-1;i<2;i++)
	{
		for (j=-1;j<2;j++)
		{
			if(fila-65+i>-1 && fila-65+i<fo && col-65+j>-1 && col-65+j<co) A[fila-65+i][col-65+j]++;
		}
	}
	A[fila-65][col-65]++;
	
	printf("| F-C ");
	for(j=0;j<co;j++)
	{
		printf("|  %c  ",j+65);
	}
	printf("|\n");
	for(i=0;i<fo;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("-------");
		}
		printf("\n");
		
		for(j=-1;j<co;j++)
		{
			if (j==-1) printf("|  %c  ",i+65);
			if (j!=-1)
			{
				printf("|  %d  ",A[i][j]);
			}
		}
		printf("|\n");
	
	}
	for(j=0;j<co;j++)
	{
		printf("-------");
	}

	printf("\nlas casillas con el numero 1 estan con la alarma encendida\nlas casillas con el numero 2y3 tienen los roceadores encendidos\nla casilla con el numero 3 es la que origino el incendio\n");
}
