#include <stdio.h>

int	main()
{
	int dd;
	int mm;
	int	aa;
	printf("introduzca un dia: ");
	scanf("%i", &dd);
	printf("introduzca un mes: ");
	scanf("%i", &mm);
	printf("ingrese el año: ");
	scanf("%i", &aa);
	if (dd == 25 && mm == 12)
	{
		printf("es navidad. \n");
	}
	return (0);
}
