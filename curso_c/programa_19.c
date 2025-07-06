#include <stdio.h>

int	main()
{
	int	dd;
	int	mm;
	int	aa;
	printf("ingrese el dia: ");
	scanf("%i", &dd);
	printf("ingrese el mes: ");
	scanf("%i", &mm);
	printf("ingrese el año: ");
	scanf("%i", &aa);
	if (mm == 1 || mm == 2 || mm == 3)
	{
		printf("es el primer trimestre del año." "\n");
		
	}
	return (0);
}
