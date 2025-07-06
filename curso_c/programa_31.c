#include <stdio.h>

int	main()
{
	float	nota;
	int	x;
	int	bajas;
	int	altas;

	altas = 0;
	bajas = 0;
	x = 1;
	while (x <= 10)
	{
		printf("ingrese su nota: ");
		scanf("%f", &nota);
		if (nota >= 7)
		{
			altas = altas + 1;
		}
		else
		{
			bajas = bajas + 1;
		}
		x = x + 1;
	}
	printf("Cantidad de alumnos con nota superior o igual a 7: ");
	printf("%i", altas);
	printf("\n");
	printf("cantidad de alumnos con notas menores de 7: ");
	printf("%i", bajas);
	printf("\n");
	return (0);
}
