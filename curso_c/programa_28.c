#include <stdio.h>

int	main()
{
	int	i;
	int	x;

	x = 1;
	printf("ingrese un numero: ");
	scanf("%i", &i);
	while (x <= i)
	{
		printf("%i", x);
		printf(" - ");
		x = x + 1;
	}
	printf("\n");
	return (0);
}
