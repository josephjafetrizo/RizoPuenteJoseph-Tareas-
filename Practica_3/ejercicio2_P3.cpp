#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	system("color 70");
	int A[10],a[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("introdusca un numero \t");
		scanf("%d",&A[i]);
		a[i]=A[i];
		for(j=0;j<10;j++)
		{
		if(A[i]==A[j] && i!=j) a[i]=0;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d    ",a[i]);
	}
	printf("\n");
	system("pause");
}
