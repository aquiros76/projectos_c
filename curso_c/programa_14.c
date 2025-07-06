#include <stdio.h>

int	main()
{
	int	num1, num2, num3;
	printf("ingrse el primer valor: ");
	scanf("%i", &num1);
	printf("ingrese el segundo valor: ");
	scanf("%i", &num2);
	printf("ingrese el tercer valor: ");
	scanf("%i", &num3);
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			printf("%i", num1);
			printf("\n");
		}
		else
		{
			printf("%i", num3);
			printf("\n");
		}
	}
	else
	{
		if(num2 > num3)
		{
			printf("%i", num2);
			printf("\n");
		}
		else
		{
			printf("%i", num3);
			printf("\n");
		}
	}
	return (0);
}
/*muestra el numero mayor de los 3*/