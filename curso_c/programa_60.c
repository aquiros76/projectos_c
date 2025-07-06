/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_60.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:54:13 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/23 09:22:26 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	vec[8];
	int	i;
	int	suma;

	suma = 0;
	for(i = 0; i < 8; i++)
	{
		printf("ingrese elemento: ");
		scanf("%i", &vec[i]);
	}
	for(i = 0; i < 8; i++)
	{
		suma = suma + vec[i];
	}
	printf("La suma de los vectores es %i \n", suma);
}

/*int	main()
{
	int	v[8];
	int	i;
	int	suma;
	int	may36;
	int	may50;

	i = 0;
	printf("Ingrese el valor: ");
	scanf("%i", &v[0]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[1]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[2]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[3]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[4]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[5]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[6]);
	printf("Ingrese el valor: ");
	scanf("%i", &v[7]);
	
	suma = 0;
	may36 = 0;
	may50 = 0;
	suma = suma + v[0] + v[1] + v[2] + v[3] + v[4] + v[5] + v[6] + v[7];
	if (v[i] > 36)
	{
		may36 = may36 + v[i];
		i++;
	}
	if (v[i] >= 50)
	{
		may50++;
	}
	printf("La suma de los valores es :%d\n", suma);
	printf("La suma de todos los valores mayores a 36 es: %d\n", may36);
	printf("La cantidad de valores mayores a 50 son: %d", may50);
	return (0);
}*/

/*int	suma_vector(int vector[], int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return vector[n - 1] + suma_vector(vector, n - 1);
	}
}*/