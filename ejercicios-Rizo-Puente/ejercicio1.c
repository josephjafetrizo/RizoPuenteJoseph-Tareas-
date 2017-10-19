#include <stdio.h>
#include <stdlib.h>

int main()
{
  int h=0,p=0;
  char n[100];
  printf("introduzca su nombre recordando que al final de su nombre debe poner un punto\n"); 
  scanf("%[^.]",&n);
  fflush( stdin );
  printf("\nintroduzca las horas que trabaja\n"); 
  scanf("%d",&h);
  printf("\nintroduzca su ingreso por hora\n");
  scanf("%d",&p);
  printf("\nsenior/seniora %s",n);
  printf("\nsu ingreso es %d\n",h*p);
  printf("\nel impuesto que deve pagar es %f \n",(h*p)*0.25);
  printf("\nsu ganancia neta es de %f\n",h*p-(h*p)*0.25);
   
  system("PAUSE");	
  return 0;
}
