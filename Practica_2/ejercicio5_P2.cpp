#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() 
{
	system("color 71");
	int a,b;
	char o;
	while(o!='s' & o!='S')
	{
		printf("calculadora capas de hacer operaciones como:\n");
		printf("Suma-------------------------- A+B \n");
		printf("Resta------------------------- A-B \n");
		printf("Multiplicacion---------------- A*B \n");
		printf("division---------------------- A/B \n");
		printf("introdusca el valor de A ");
		scanf("%d",&a);
		fflush( stdin );
		printf("introdusca el valor de B ");
		scanf("%d",&b);
		fflush( stdin );
		printf("introdusca la operacion de la siguiente forma \n");
		printf("en caso de suma intodusca                             '+'\n");
		printf("en caso de resta intodusca                            '-'\n");
		printf("en caso de multiplicacion intodusca                   '*'\n");
		printf("en caso de division intodusca                         '/'\n");
		printf("en caso de terminar con el programa introdusca  's' o 'S'\n");
		scanf("%c",&o);
		fflush( stdin );
		switch (o)
		{
		case '+': printf("el resultado de la suma de %d+%d es %d",a,b,a+b);
		break;
		case '-': printf("el resultado de la resta de %d-%d es %d",a,b,a-b);
		break;
		case '*': printf("el resultado de la multiplicacion de %d*%d es %d",a,b,a*b);
		break;
		case '/': printf("el resultado de la divicion de %d/%d es %d",a,b,a/b);
		break;
		case ('s' | 'S'): printf("\nhasta pronto");
		break;
		default: printf("introduca un valor valido\n");
		} 
		getch();
		system("cls");
	}
}
