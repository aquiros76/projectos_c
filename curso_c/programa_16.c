#include <stdio.h>

int	main()
{
	int	num;
	printf("introduzca un valor positivo de tres digitos: ");
	scanf("%i", &num);
	if (num < 10)
	{
		printf("El numero tiene un digito.");
		printf("\n");
	}
	else
	{
		if (num < 100)
		{
			printf("El numero tiene dos digitos.");
			printf("\n");
		}
		else
		{
			if (num < 1000)
			{
				printf("El numero tiene tres digitos.");
				printf("\n");
			}
			else
			{
				printf("Error en la entrada de datos.");
				printf("\n");
			}
		}
	}
	return (0);
}

/*nos dice cuatos digitos tiene un numero, maximo tres cifras
si hay mas da error en la enbtrada de datos*/