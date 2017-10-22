#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	int s;
	printf("este programa le da el equivalente dado en \nhoras, minutos y segundos del valor en segundos ingresado.\n");
	scanf("%d",&s);
	printf("\n %d segundos son:",s);
	(s>=3600)?(printf("\n %d horas",s/3600)):(printf("\n 0 horas"));
	s=s%3600;
	(s>=60)?(printf("\n %d minutos",s/60)):(printf("\n 0 minutos"));
	s=s%60;
	printf("\n %d segundos",s);
	getch();	
}

