#include <stdio.h>

int	main()
{
	int	x;
	int	y;
	printf("ingrese la coordenada x: ");
	scanf("%i", &x);
	printf("ingese la coordenada y: ");
	scanf("%i", &y);
	if (x > 0 && y > 0)
	{
		printf("1er cuadrante.");
	}
	else
	{
		if (x < 0 && y > 0)
		{
			printf("2do cuadrante.");
		}
		else
		{
			if (x < 0 && y < 0)
			{
				printf("3er cuadrante.");
			}
			else
			{
				if (x > 0 && y < 0)
				{
					printf("4to cuadrante.");
				}
				else
					printf("sobre un eje.");
			}
		}
	}
	printf("\n");
	return (0);
}
