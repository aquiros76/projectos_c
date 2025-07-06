#include <stdio.h>

int	main()
{
	int	num1, num2, num3, num4, suma, promedio;
	printf("ingrese el primer valor: ");
	scanf("%i", &num1);
	printf("ingrese el segundo valor: ");
	scanf("%i", &num2);
	printf("ingrese el tercer valor: ");
	scanf("%i", &num3);
	printf("ingrese el cuarto valor: ");
	scanf("%i", &num4);
	suma = num1 + num2 + num3 + num4;
	promedio = suma / 4;
	printf("la suma de los valores es: ");
	printf("%i", suma);
	printf("\n");
	printf("el promedio es: ");
	printf("%i", promedio);
	printf("\n");
	return (0);
}
