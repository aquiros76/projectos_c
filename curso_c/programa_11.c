#include <stdio.h>

int	main()
{
	int	nota1, nota2, nota3, promedio;
	printf("introduce la primera nota: ");
	scanf("%i", &nota1);
	printf("introduce la segunda nota: ");
	scanf("%i", &nota2);
	printf("introduce la tercera nota: ");
	scanf("%i", &nota3);
	promedio = (nota1 + nota2 + nota3) / 3;
	if (promedio >= 7)
	{
		printf("estas aprobado");
		printf("\n");
	}
	else
		printf("estas suspendido");
		printf("\n");
	return (0);
}
