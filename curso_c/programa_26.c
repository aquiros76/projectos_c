#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;
	int	num3;
	printf("introduzca el primer numero: ");
	scanf("%i", &num1);
	printf("introduzca el segundo numero: ");
	scanf("%i", &num2);
	printf("intoduzca el tercer numero: ");
	scanf("%i", &num3);
	if (num1 < num2 && num1 < num3)
	{
		printf("%i", num1);
	}
	else
	{
		if (num2 < num3)
		{
			printf("%i", num2);
		}
		else
		{
			printf("%i", num3);
		}
	}
	printf(" - ");
	if (num1 > num2 && num1 > num3)
	{
		printf("%i", num1);
	}
	else
	{
		if (num2 > num3)
		{
			printf("%i", num2);
		}
		else
		{
			printf ("%i", num3);
		}
	}
	printf("\n");
	return (0);
}
