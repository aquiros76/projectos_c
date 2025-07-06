#include <stdio.h>

int	main()
{
	int	num1, num2, suma, diferencia, division, producto; 
	printf("introduce el valor 1: ");
	scanf("%i", &num1);
	printf("introduce el valor 2: ");
	scanf("%i", &num2);
	if (num1 > num2)
	{
		suma = num1 + num2;
		diferencia = num1 - num2;
		printf("la suma de los dos valores: ");
		printf("%i", suma);
		printf("\n");
		printf("la diferencia de los dos valores: ");
		printf("%i", diferencia);
		printf("\n");
	}
	else
	{
		producto = num1 * num2;
		division = num1 / num2;
		printf("el producto de los valores es: ");
		printf("%i", producto);
		printf("\n");
		printf("la division de los valores es: ");
		printf("%i", division);
		printf("\n");
	}
	return (0);
}
