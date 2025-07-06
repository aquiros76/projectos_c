#include <stdio.h>

int	main()
{
	int	num;
	printf("ingrese un valor: ");
	scanf("%i", &num);
	if (num == 0)
	{
		printf("Nulo");
		printf("\n");
	}
	else
	{
		if (num > 0)
		{
			printf("positivo");
			printf("\n");
		}
		else
		{
			printf("Negativo");
			printf("\n");
		}
	}
	return (0);
}
