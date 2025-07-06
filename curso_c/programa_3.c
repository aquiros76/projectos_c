#include <stdio.h>

int	main()
{
	int	num1, num2, suma, producto;
	printf("ingrese primer valor: ");
	scanf("%i", &num1);
	printf("ingrese segundo valor: ");
	scanf("%i", &num2);
	suma = num1 + num2;
	producto = num1 * num2;
	printf("la suma de los valores es: ");
	printf("%i", suma);
	printf("\n");
	printf("el producto de los dos valores es: ");
	printf("%i", producto);
	return (0);
}
