#include <stdio.h>

/*int	main()
{
	int	x;
	int	suma;
	int	prom;
	int	valor;

	x = 1;
	suma = 0;
	while (x <= 10)
	{
		printf("ingrese un valor: ");
		scanf("%i", &valor);
		suma = suma + valor;
		x = x + 1;
	}
	prom = suma / 10;
	printf("la suma de los diez valores es: ");
	printf("%i", suma);
	printf("\n");
	printf("el promedio es: ");
	printf("%i", prom);
	printf("\n");
	return (0);
}*/

//El mismo programa con For (programa_39)
int	main()
{
	int	x;
	int	suma;
	int	valor;
	int	prom;

	x = 1;
	suma = 0;
	for (x = 1; x < 10; x = x + 1)
	{
		printf("Ingrese un valor: ");
		scanf("%i", &valor);
		suma = suma + valor;
	}
	prom = suma / 10;
	printf("La suma es: ");
	printf("%i", suma);
	printf("\n");
	printf("El promedio es: ");
	printf("%i", prom);
	printf("\n");
	return (0);
}
