#include <stdio.h>
#include <stdlib.h>
#define SUBM(fil,col) float SM##fil##col[2][2]
#define subm(k,w,i,j) SM##k##w[i][j]

int main()
{
  int i,j,k,w;
  float A[3][3]={{1,3,5},{7,9,11},{13,15,17}};
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
    printf("/***********************************/\n");
    }//end for, k
  }//end for, w
  system("PAUSE");	
  return 0;
}
