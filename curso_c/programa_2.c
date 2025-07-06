#include <stdio.h>

int	main()
{
	int	lado;
	int	superficie;
	printf("ingrese el valor del lado del cuadrado: ");
	scanf("%i", &lado);
	superficie = lado * lado;
	printf("la superficie del cuadrado es: ");
	printf("%i", superficie);
}
