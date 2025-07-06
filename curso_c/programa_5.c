#include <stdio.h>

int	main()
{
	int	num1, num2, num3, num4;
	int	suma;
	int	producto;
	printf("ingrese primer valor: ");
	scanf("%i", &num1);
	printf("ingrese segundo valor: ");
	scanf("%i", &num2);
	printf("ingrese tercer valor: ");
	scanf("%i", &num3);
	printf("ingrese cuarto valor: ");
	scanf("%i", &num4);
	suma = num1 + num2;
	producto = num3 * num4;
	printf("la suma de los dos primeros valores es: ");
	printf("%i", suma);
	printf("\n");
	printf("el producto del tercer y cuarto valor es: ");
	printf("%i", producto);
	printf("\n");
	return (0);
}
