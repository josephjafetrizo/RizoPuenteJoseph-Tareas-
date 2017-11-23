#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	system("color 70");
	int A[7][8]={
	{1,1,1,1,1,1,1,1},
	{1,1,2,1,1,0,0,1},
	{1,1,0,1,1,0,1,1},
	{1,1,0,1,1,0,1,1},
	{1,1,0,0,0,0,1,1},
	{1,1,1,0,1,1,1,1},
	{1,1,1,1,1,1,1,1}
	};
	int i,j,x=1,y=2;
	char e;
	
	while (A[1][6]!=2)
	{
		system("cls");
		for(i=0;i<5;i++)
		{
			printf(" ------------------------------------\n");
			for(j=0;j<6;j++)
			{
				printf("|  %d  ",A[i+1][j+1]);
			}
			printf("|\n");
		}
		printf(" ------------------------------------\n");
		printf("para mover el user (el numero 2) siga las siguentes instrucciones\n");
		printf("introdusca 'a' para subir, 'b' bajar, \n'i' para moverte para la izquierda, 'd' para moverte para la derecha\n\t");
		scanf("%c",&e);
		fflush(stdin);
		switch (e)
		{
	 	case 'a':
			if(A[x-1][y]==1) printf("crushhhh!!! pegaste con un borde");
			if(A[x-1][y]==0) 
			{
				printf("wuuushhh!!! te moviste con exito");
				A[x][y]=0;
				x=x-1;
				A[x][y]=2;
			}		
		break;
		case 'b':
			if(A[x+1][y]==1) printf("crushhhh!!! pegaste con un borde");
			if(A[x+1][y]==0) 
			{
				printf("wuuushhh!!! te moviste con exito");
				A[x][y]=0;
				x=x+1;
				A[x][y]=2;
			}		
		break;
		case 'd':
			if(A[x][y+1]==1) printf("crushhhh!!! pegaste con un borde");
			if(A[x][y+1]==0) 
			{
				printf("wuuushhh!!! te moviste con exito");
				A[x][y]=0;
				y=y+1;
				A[x][y]=2;
			}
		break;
		case 'i':
			if(A[x][y-1]==1) printf("crushhhh!!! pegaste con un borde");
			if(A[x][y-1]==0) 
			{
				printf("wuuushhh!!! te moviste con exito");
				A[x][y]=0;
				y=y-1;
				A[x][y]=2;
			}		
		break;
		default: printf("introduse datos como se te muestra previamente :'(");
		}
		printf("\n");
		system("pause");
	}
	system("cls");
	for(i=0;i<5;i++)
	{
		printf(" ------------------------------------\n");
		for(j=0;j<6;j++)
		{
			printf("|  %d  ",A[i+1][j+1]);
		}
		printf("|\n");
	}
	printf(" ------------------------------------\n");
	printf("wuuuuuuuuussssssssshhhhhhhh!!!!!!!!! has salido del laberinto :D\n");
	system("pause");
}
