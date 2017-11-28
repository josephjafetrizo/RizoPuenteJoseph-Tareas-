#include <stdio.h>
#include <stdlib.h>
int volumen(int a,int l,int h);
int main()
{
  int a[3];
  int l[3];
  int h[3];
  int v[3];
  int i;
  int vt=0;
  for(i=0;i<=2;i++){
  printf("\n\nHabitacion %d\n",i+1);
  printf("Alto(m): "); 
  scanf("%d",&h[i]);
  printf("Largo(m): "); 
  scanf("%d",&l[i]);
  printf("Ancho(m): "); 
  scanf("%d",&a[i]);
  v[i]=volumen(a[i],l[i],h[i]);
  vt=v[i]+vt;
  printf("Volumen igual a: %d\n",v[i]);
  }
  printf("\n\nVolumen total: %d\n",vt);
  system("PAUSE");
  return 0;
}

int volumen(int a,int l,int h){
 int v;
 v=a*l*h;
 return v;
}
