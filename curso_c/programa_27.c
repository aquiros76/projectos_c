#include <stdio.h>

int	main()
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		printf("%i ", i);
		/*printf(" - ");*/
		i = i + 1;
	}
	printf("\n");
	return (0);
}
/*si dejamos un espacio o un guion despues de %i
separa los numeros.
podemos incrementar i = i +..., para mostrar numeros
de dos en dos o de tres en tres... */