#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hip(double x,double y);

int main(int argc, char *argv[])
{
system("color 70");
  double l[2];
  int x;
  int y=0;
  double h;
  for(x=1;x<=3;x++)
  {
	  printf("\n\tTriangulo %d\n");
	  printf("Ingrese lado 1: ");
	  scanf("%lf",&l[y]);
	  printf("Ingrese lado 2: ");
	  scanf("%lf",&l[y+1]);
	  h=hip(l[y],l[y+1]);
	  printf("Hipotenusa: %f",h);

  }
  system("PAUSE");
  return 0;
}

int hip(double x,double y)
{
	double h;
	x=x*x;
	y=y*y;
	h=sqrt(x+y);
	return h;
}
