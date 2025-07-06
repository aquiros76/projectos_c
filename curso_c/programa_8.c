#include <stdio.h>

int	main()
{
	float	sueldo;
	printf("ingrese su sueldo; ");
	scanf("%f", &sueldo);
	if (sueldo <= 1800)
	{
		printf("no debe pagar impuestos");
	}
	if (sueldo > 1800)
	{
		printf("debe pagar impuestos");
	}
	printf("\n");
	return (0);
}
