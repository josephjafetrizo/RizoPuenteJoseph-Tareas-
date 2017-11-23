#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#define SUBM(fil,col) float SM##fil##col[2][2]
#define subm(k,w,i,j) SM##k##w[i][j]

int main()
{
	system("color 70");
	int C[10];
	int i,j,k,w,aux;
  	float A[3][3]={{2,0,1},{3,0,0},{5,1,1}};
 	float B[3][3];
  	float det=0;
	printf("parte 'a' del progama ''Metodo de la burbuja''\n");
	printf("introduce los elementos de tu arreglo\n");
	for(i=0;i<10;i++)
	{
		printf("x%d = ",i);
		scanf("%d",&C[i]);
	}
	for(j=0;j<10;j++)
	{
		for(i=0;i<9;i++)
		{
			if(C[i]>C[i+1])
			{
				aux=C[i];
				C[i]=C[i+1];
				C[i+1]=aux;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("x%d = %d\n",i,C[i]);
	}
	system("pause");
	
	printf("parte 'b','c','d' del progama ''determinante, transpuesta e \ninversa de una funcion''\n");
	printf("matriz inicial\n");
	for(i=0;i<3;i++){
      for(j=0;j<3;j++)
      {           
        printf("\t%.2f",A[i][j]);
      }
      printf("\n");
    }
    printf("determinantes\n");
    printf("/***********************************/\n");
  /**********************************************/
  for(k=0;k<3;k++)
  {
    for(w=0;w<3;w++)
    {
  SUBM(k,w);
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){               
        if(i<k && j<w){
//          SM00[i][j]=A[i][j];
          subm(k,w,i,j)=A[i][j];
        }
        if(i<k && j>w){
//          SM00[i][j-1]=A[i][j];
          subm(k,w,i,j-1)=A[i][j];
        }
        if(i>k && j<w){
//          SM00[i-1][j]=A[i][j];
          subm(k,w,i-1,j)=A[i][j];
        }
        if(i>k && j>w){
//          SM00[i-1][j-1]=A[i][j];
          subm(k,w,i-1,j-1)=A[i][j];
        }
      }//end for()
    }//end for() 
  for(i=0;i<2;i++){
      for(j=0;j<2;j++){
//        printf("\t%f",SM00[i][j]);
        printf("\t%.1f",subm(k,w,i,j));
      }
      printf("\n");
    }
    B[w][k]=pow(-1,w+k)*(subm(k,w,0,0)*subm(k,w,1,1)-subm(k,w,1,0)*subm(k,w,0,1));
    printf("\n%f\n",B[w][k]);
    printf("/***********************************/\n");
    }//end for, k
  }//end for, w
  printf("\n la transpuesta de la matriz adjunta\n");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++)
      {
        printf("\t%.1f",B[i][j]);
      }
      printf("\n");
    }
  det=1/(A[0][0]*B[0][0]-A[0][1]*B[1][0]+A[0][2]*B[2][0]);
  printf("\n la inversa de la matriz \n");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++)
      {           
        printf("\t%.2f",B[i][j]*det);
      }
      printf("\n");
    }
  system("PAUSE");	
  return 0;
}
