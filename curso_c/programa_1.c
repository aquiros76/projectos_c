#include <stdio.h>

int main()
{
	float 	HorasTrabajadas;
	float	CostoHora;
	float	sueldo;
	printf("ingrese las horas trabajadas: ");
	scanf("%f", &HorasTrabajadas);
	printf("ingrese el precio por hora: ");
	scanf("%f", &CostoHora);
	sueldo = HorasTrabajadas * CostoHora;
	printf("el sueldo del operario es: ");
	printf("%.2f", sueldo);
	return (0);
}
/*float si queremos entrar decimales
  int si introducimos enteros*/