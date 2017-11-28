#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int resultado(int n);

int main()
{
  system("color 70");
  int t,n;
  printf("Ingrese N: ");
  scanf("%d",&n);
  t=resultado(n);
  printf("\nResultado: %d\n",t);

  system("PAUSE");
  return 0;
}
int resultado(int n)
{
	int x=1;
	int t=0;
	while(x<=n)
	{
	    t=t+pow(x,x);
	    if(x+1<n)
		{
	    x=x+1;
	    t=t-pow(x,x);
	    }
	    x=x+1;
	}
	return t;
}

