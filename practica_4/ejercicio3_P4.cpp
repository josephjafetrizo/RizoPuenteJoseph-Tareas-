#include <stdio.h>
#include <stdlib.h>
int entero_potencia(int b,int e);

int b, e;
int main(int argc, char *argv[])
{
  system("color 70");
  int t;
  printf("Ingrese la base: ");
  scanf("%d",&b);
  printf("Ingrese el exponente: ");
  scanf("%d",&e);
  t=entero_potencia(b,e);
  printf("El resultado es: %d\n",t);
  system("PAUSE");
  return 0;
}

int entero_potencia(int b,int e)
{
   int t,x;
   t=b;
   if(e==0)
   {
    b=1;
    return b;
   }
   if(e==1)
   {
    return b;
   }
   x=2;
   while(x<=e)
   {
    t=t*b;
    x=x+1;
   }
   return t;

}
