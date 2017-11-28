#include <stdio.h>
#include <stdlib.h>
int fac(int n);
int n;

int main(int argc, char *argv[])
{
  system("color 70");
  int t;
  printf("\n\t\tFactorial de un numero\n\nIngrese N: ");
  scanf("%d",&n);
  t=fac(n);
  printf("El factorial es: %d\n",t);
  system("PAUSE");
  return 0;
}

int fac(int n)
{
  int x;
  x=n;
  n=n-1;
  while(n>=2)
  {
    x=x*n;
    n=n-1;
  }
  return x;
}
