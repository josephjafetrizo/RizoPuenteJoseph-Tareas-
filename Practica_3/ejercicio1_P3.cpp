#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	system("color 70");
	int A[10][10],a[10];
	int i,j,k;
	for(i=0;i<10;i++)
	{
		a[i]=0;
	}
	for (i=0;i<10;i++)
	{
		printf("\n ");
		for (j=0;j<10;j++)
		{
			A[i][j]=rand() % 10 +1;
			printf("%d\t",A[i][j]);
			for (k=1;k<11;k++)
			{
				if (A[i][j]==k) a[k-1]=a[k-1]+1;
			}
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("\n ");
		printf("%d=%d",i+1,a[i]);
		
	}
	printf("\n ");
	system("pause");
}
