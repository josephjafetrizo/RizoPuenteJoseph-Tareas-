#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUBM(fil,col) float SM##fil##col[2][2]
#define subm(k,w,i,j) SM##k##w[i][j]

int main()
{
  int i,j,k,w;
  float A[3][3]={{2,0,1},{3,0,0},{5,1,1}};
  float B[3][3];
  float det=0;
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

