#include <stdio.h>

int	main()
{
	int		cantidad;
	float	precio, importe;
	printf("ingrese el precio del articulo: ");
	scanf("%f", &precio);
	printf("ingrese la cantidad de articulos: ");
	scanf("%i", &cantidad);
	importe = cantidad * precio;
	printf("el importe total a pagar es: ");
	printf("%.2f", importe);
	printf("\n");
	return (0);
}
