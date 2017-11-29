#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char c[100];
  int l=0;
  int x=0;
  int a=0, e=0,i=0,o=0,u=0;
  printf("\nIngrese su cadena: ");
  gets(c);
  l=(strlen(c))-1;
  while(x<=l){
    if(c[x]=='a'){
        a=a+1;
    }
    if(c[x]=='e'){
        e=e+1;
    }
    if(c[x]=='i'){
        i=i+1;
    }
    if(c[x]=='o'){
        o=o+1;
    }
    if(c[x]=='u'){
        u=u+1;
    }
    x=x+1;
  }
  printf("\n\na: %d",a);
  printf("\ne: %d",e);
  printf("\ni: %d",i);
  printf("\no: %d",o);
  printf("\nu: %d",u);

  system("PAUSE");
  return 0;
}
