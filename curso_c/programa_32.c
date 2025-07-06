#include <stdio.h>

int	main()
{
	int		x;
	int		n;
	float	altura;
	float	suma;
	float	promedio;

	x = 1;
	suma = 0;
	printf("Cuantas personas hay: ");
	scanf("%i", &n);
	while (x <= n)
	{
		printf("Ingrese la altura: ");
		scanf("%f", &altura);
		suma = suma + altura;
		x = x + 1;
	}
	promedio = suma / n;
	printf("Altura promedio: ");
	printf("%.2f", promedio);
	printf("\n");
	return (0);
}
