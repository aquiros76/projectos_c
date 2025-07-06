#include <stdio.h>

int	main()
{
	int	x;
	int	cantidad;
	int	n;
	float	largo;

	x = 1;
	cantidad = 0;
	printf("Cuantas piezas va a procesar: ");
	scanf("%i", &n);
	while (x <= n)
	{
		printf("ingrese la medida de la pieza: ");
		scanf("%f", &largo);
		if (largo >= 1.20 && largo <= 1.30)
		{
			cantidad = cantidad + 1;
		}
		x = x + 1;
	}
	printf("La cantidad de piezas aptas son: ");
	printf("%i", cantidad);
	printf("\n");
	return (0);
}
