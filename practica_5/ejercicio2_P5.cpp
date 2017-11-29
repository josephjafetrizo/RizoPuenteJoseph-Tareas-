#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char c[50];
   int l, i;
   printf("\nIngrese su cadena: ");
   gets(c);
   l=strlen(c);
   printf("\nLongitud: %d\n",l);
   l=l-1;
   while(l!=-1)
   {
    printf("%c",c[l]);
    l=l-1;
   }

  system("PAUSE");
  return 0;
}
