#include <stdio.h>
#include <stdlib.h>
void c_r(float voltaje,float corriente);
void c_v(float resistencia,float corriente);
void c_c(float voltaje,float resistencia);

int main()
{
  system("color 70");
  int resistencia;
  int voltaje;
  int corriente;
  char sel;
  printf("\nR: Resistencia\tV: Voltaje\tC: Corriente\n\nQue desea calcular? ");
  scanf("%c",&sel);
  if(sel=='R')
  {
    printf("\nIngrese voltaje: ");
    scanf("%f",&voltaje);
    printf("\nIngrese corriente: ");
    scanf("%f",&corriente);
    c_r(voltaje,corriente);
  }
  if(sel=='V')
  {
    printf("\nIngrese resistencia: ");
    scanf("%f",&resistencia);
    printf("\nIngrese corriente: ");
    scanf("%f",&corriente);

    c_v(resistencia,corriente);
  }
  if(sel=='C')
  {
    printf("\nIngrese voltaje: ");
    scanf("%f",&voltaje);
    printf("\nIngrese resistencia: ");
    scanf("%f",&resistencia);
    c_c(voltaje,resistencia);
  }
  system("PAUSE");
  return 0;
}

void c_r(float voltaje,float corriente)
{
	float resistencia;
	resistencia=voltaje/corriente;
	printf("\n\nResistencia: %f",resistencia);
}

void c_v(float resistencia,float corriente)
{
	float voltaje;
	voltaje=resistencia*corriente;
	printf("\n\nVoltaje: %f",voltaje);
}

void c_c(float voltaje,float resistencia)
{
	float corriente;
	corriente=voltaje/resistencia;
	printf("\n\nCorriente: %f",corriente);
}
