#include <stdio.h>

int	main()
{
	int	num1;
	int	num2;
	int	num3;
	int	suma;
	int	producto;
	printf("ingrese el primer numero :");
	scanf("%i", &num1);
	printf("ingrese el segundo numero: ");
	scanf("%i", &num2);
	printf("ingrese el tercer numero: ");
	scanf("%i", &num3);
	suma = num1 + num2;
	producto = suma * num3;
	if (num1 == num2 && num1 == num3)
	{
		suma = num1 + num2;
		printf("la suma del primer y el segundo valor es: ");
		printf("%i", suma);
		printf("\n");
		producto = suma * num3;
		printf("la suma de los dos numeros multicados por el tercero es: ");
		printf("%i", producto);
		printf("\n");
	}
	return (0);
}
