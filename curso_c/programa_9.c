#include <stdio.h>

int	main()
{
	int	num1, num2;
	printf("ingrese el primer valor: ");
	scanf("%i", &num1);
	printf("ingrese el segundo valor: ");
	scanf("%i", &num2);
	printf("el valor mayor es: ");
	if (num1 > num2)
	{
		printf("%i", num1);
	}
	else
	{
		printf("%i", num2);
	}
	printf("\n");
	return (0);
}
