#include <stdio.h>

int	main()
{
	float	sueldo;
	int		antiguedad;

	printf("ingrese el sueldo: ");
	scanf("%f", &sueldo);
	printf("ingrese antiguedad: ");
	scanf("%i", &antiguedad);
	
	if (sueldo < 500 && antiguedad >= 10)
	{
		float	aumento = sueldo * 0.20;
		float	sueldopag = sueldo + aumento;
		printf("sueldo a pagar: ");
		printf("%.2f", sueldopag);
	}
	else
	{
		if (sueldo < 500)
		{
			float	aumento = sueldo * 0.05;
			float	sueldopag = sueldo + aumento;
			printf("sueldo a pagar: ");
			printf("%.2f", sueldopag);
		}
		else
		{
			printf("sueldo a pagar: ");
			printf("%.2f", sueldo);
		}
	}
	printf("\n");
	return (0);
}
