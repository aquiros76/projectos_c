#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;
	int	num3;
	printf("ingrese el primer numero: ");
	scanf("%i", &num1);
	printf("ingrese el segundo numero: ");
	scanf("%i", &num2);
	printf("ingrese el tercer numero: ");
	scanf("%i", &num3);
	if (num1 < 10 || num2 < 10 || num3 < 10)
	{
		printf("algunos de los numeros son menores de diez.\n");
	}
	return (0);
}
