#include <stdio.h>

int	main()
{
	int	totalpreguntas;
	int	totalcorrectas;
	int	porcentaje;
	printf("ingrese la cantidad total de preguntas: ");
	scanf("%i", &totalpreguntas);
	printf("ingrese la cantidad de preguntas correctas: ");
	scanf("%i", &totalcorrectas);
	porcentaje = totalcorrectas * 100 / totalpreguntas;
	if (porcentaje >= 90)
	{
		printf("nivel maximo.");
	}
	else
	{
		if (porcentaje >= 75)
		{
			printf("nivel medio.");
		}
		else
		{
			if (porcentaje >= 50)
			{
				printf("nivel regular.");
			}
			else
			{
				printf("fuera de nivel.");
			}
		}
	}
	printf("\n");
	return (0);
}
