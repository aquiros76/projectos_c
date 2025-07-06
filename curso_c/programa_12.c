#include <stdio.h>

int	main()
{
	int	valor;
	printf("introduce un valor entre 0 y 99: ");
	scanf("%i", &valor);
	if (valor > 9)
	{
		printf("el valor tiene dos digitos.");
		printf("\n");
	}
	else
		printf("el valor tiene un digito.");
		printf("\n");
	return (0);
}
