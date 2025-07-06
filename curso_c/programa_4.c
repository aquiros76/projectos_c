#include <stdio.h>

int	main()
{
	int	lado;
	int	perimetro;
	printf("ingrese el lado del cuadrado: ");
	scanf("%i", &lado);
	perimetro = lado * 4;
	printf("el perimetro del cuadrado es: ");
	printf("%i", perimetro);
	return (0);
}
/*calcula el perimetro*/