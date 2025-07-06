#include <stdio.h>

int	main()
{
	int	num1;
	int num2;
	int	num3;
	printf("ingrese el primer numero: ");
	scanf("%i", &num1);
	printf("ingrese el segundo numero: ");
	scanf("%i", &num2);
	printf("ingresa el tercer numero: ");
	scanf("%i", &num3);
	if (num1 && num2 && num3 < 10 )
	{
		printf("Todos los numeros son menores de diez. \n");
	}
	return (0);
}
